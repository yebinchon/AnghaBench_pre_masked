
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {scalar_t__ port_mode; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*) ;

__attribute__((used)) static enum xgbe_mode FUNC_1(struct xgbe_prv_data *VAR_1)
{
 struct xgbe_phy_data *VAR_2 = VAR_1->phy_data;


 if (VAR_2->port_mode != VAR_0)
  return FUNC_0(VAR_1);

 switch (FUNC_0(VAR_1)) {
 case 129:
 case 128:
  return 130;
 case 130:
 default:
  return 128;
 }
}
