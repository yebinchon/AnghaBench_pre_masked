
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int redrv_lane; } ;
typedef enum xgbe_phy_redrv_mode { ____Placeholder_xgbe_phy_redrv_mode } xgbe_phy_redrv_mode ;


 int VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_1,
           enum xgbe_phy_redrv_mode VAR_2)
{
 struct xgbe_phy_data *VAR_3 = VAR_1->phy_data;
 unsigned int VAR_4;
 int VAR_5;


 VAR_4 = VAR_0 + (VAR_3->redrv_lane * 0x1000);

 VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_2);

 return VAR_5;
}
