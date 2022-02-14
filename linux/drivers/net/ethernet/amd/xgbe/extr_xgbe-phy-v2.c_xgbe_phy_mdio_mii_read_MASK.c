
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* read_ext_mii_regs ) (struct xgbe_prv_data*,int,int) ;} ;
struct xgbe_prv_data {TYPE_1__ hw_if; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {scalar_t__ phydev_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct xgbe_prv_data*,int,int) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_4, int VAR_5,
      int VAR_6)
{
 struct xgbe_phy_data *VAR_7 = VAR_4->phy_data;

 if (VAR_6 & VAR_1) {
  if (VAR_7->phydev_mode != VAR_3)
   return -VAR_0;
 } else {
  if (VAR_7->phydev_mode != VAR_2)
   return -VAR_0;
 }

 return VAR_4->hw_if.read_ext_mii_regs(VAR_4, VAR_5, VAR_6);
}
