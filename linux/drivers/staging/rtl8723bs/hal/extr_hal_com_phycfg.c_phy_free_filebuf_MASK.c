
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_com_data {scalar_t__ rf_tx_pwr_lmt; scalar_t__ rf_tx_pwr_track; scalar_t__ rf_radio_b; scalar_t__ rf_radio_a; scalar_t__ bb_phy_reg_mp; scalar_t__ bb_phy_reg_pg; scalar_t__ bb_agc_tab; scalar_t__ bb_phy_reg; scalar_t__ mac_reg; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct adapter *VAR_0)
{
 struct hal_com_data *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->mac_reg)
  FUNC_1(VAR_1->mac_reg);
 if (VAR_1->bb_phy_reg)
  FUNC_1(VAR_1->bb_phy_reg);
 if (VAR_1->bb_agc_tab)
  FUNC_1(VAR_1->bb_agc_tab);
 if (VAR_1->bb_phy_reg_pg)
  FUNC_1(VAR_1->bb_phy_reg_pg);
 if (VAR_1->bb_phy_reg_mp)
  FUNC_1(VAR_1->bb_phy_reg_mp);
 if (VAR_1->rf_radio_a)
  FUNC_1(VAR_1->rf_radio_a);
 if (VAR_1->rf_radio_b)
  FUNC_1(VAR_1->rf_radio_b);
 if (VAR_1->rf_tx_pwr_track)
  FUNC_1(VAR_1->rf_tx_pwr_track);
 if (VAR_1->rf_tx_pwr_lmt)
  FUNC_1(VAR_1->rf_tx_pwr_lmt);

}
