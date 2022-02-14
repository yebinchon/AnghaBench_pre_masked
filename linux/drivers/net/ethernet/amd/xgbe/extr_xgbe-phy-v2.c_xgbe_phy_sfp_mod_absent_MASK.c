
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int sfp_mod_absent; int sfp_eeprom; scalar_t__ sfp_phy_avail; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_phy_data *VAR_1 = VAR_0->phy_data;

 FUNC_1(VAR_0);

 VAR_1->sfp_mod_absent = 1;
 VAR_1->sfp_phy_avail = 0;
 FUNC_0(&VAR_1->sfp_eeprom, 0, sizeof(VAR_1->sfp_eeprom));
}
