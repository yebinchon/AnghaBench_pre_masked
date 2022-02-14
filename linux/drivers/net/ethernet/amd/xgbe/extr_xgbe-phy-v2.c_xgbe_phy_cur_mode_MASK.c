
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int cur_mode; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;



__attribute__((used)) static enum xgbe_mode FUNC_0(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_phy_data *VAR_1 = VAR_0->phy_data;

 return VAR_1->cur_mode;
}
