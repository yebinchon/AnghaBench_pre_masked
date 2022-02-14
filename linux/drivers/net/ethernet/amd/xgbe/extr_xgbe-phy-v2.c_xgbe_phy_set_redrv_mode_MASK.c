
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {scalar_t__ port_mode; scalar_t__ sfp_base; scalar_t__ redrv_if; int redrv; } ;
typedef enum xgbe_phy_redrv_mode { ____Placeholder_xgbe_phy_redrv_mode } xgbe_phy_redrv_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*,int) ;
 int FUNC_3 (struct xgbe_prv_data*,int) ;

__attribute__((used)) static void FUNC_4(struct xgbe_prv_data *VAR_5)
{
 struct xgbe_phy_data *VAR_6 = VAR_5->phy_data;
 enum xgbe_phy_redrv_mode VAR_7;
 int VAR_8;

 if (!VAR_6->redrv)
  return;

 VAR_7 = VAR_0;
 if ((VAR_6->port_mode == VAR_2) &&
     (VAR_6->sfp_base != VAR_4) &&
     (VAR_6->sfp_base != VAR_3))
  VAR_7 = VAR_1;

 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8)
  return;

 if (VAR_6->redrv_if)
  FUNC_2(VAR_5, VAR_7);
 else
  FUNC_3(VAR_5, VAR_7);

 FUNC_1(VAR_5);
}
