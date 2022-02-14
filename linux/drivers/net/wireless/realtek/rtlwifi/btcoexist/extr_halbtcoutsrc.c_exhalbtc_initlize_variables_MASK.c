
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct TYPE_2__ {int bt_ctrl_buf_size; int agg_buf_size; int increase_scan_dev_num; } ;
struct btc_coexist {int bt_mp_comp; int btc_get_bt_afh_map_from_bt; int btc_get_ble_scan_para_from_bt; int btc_get_ble_scan_type_from_bt; int btc_get_ant_det_val_from_bt; int btc_phydm_query_phy_counter; int btc_phydm_modify_ra_pcr_threshold; int btc_get_bt_phydm_version; int btc_get_bt_coex_supported_version; int btc_get_bt_coex_supported_feature; TYPE_1__ bt_info; int btc_get_bt_reg; int btc_set_bt_reg; int btc_set; int btc_get; int btc_disp_dbg_msg; int btc_fill_h2c; int btc_get_rf_reg; int btc_set_rf_reg; int btc_get_bb_reg; int btc_set_bb_reg; int btc_write_local_reg_1byte; int btc_write_4byte; int btc_read_4byte; int btc_write_2byte; int btc_read_2byte; int btc_write_1byte_bitmask; int btc_write_1byte; int btc_read_1byte; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int *) ;
 struct btc_coexist* FUNC_2 (struct rtl_priv*) ;

bool FUNC_3(struct rtl_priv *VAR_27)
{
 struct btc_coexist *VAR_28 = FUNC_2(VAR_27);

 if (!VAR_28)
  return 0;

 FUNC_0();

 VAR_28->btc_read_1byte = VAR_16;
 VAR_28->btc_write_1byte = VAR_23;
 VAR_28->btc_write_1byte_bitmask = VAR_0;
 VAR_28->btc_read_2byte = VAR_17;
 VAR_28->btc_write_2byte = VAR_24;
 VAR_28->btc_read_4byte = VAR_18;
 VAR_28->btc_write_4byte = VAR_25;
 VAR_28->btc_write_local_reg_1byte = VAR_26;

 VAR_28->btc_set_bb_reg = VAR_20;
 VAR_28->btc_get_bb_reg = VAR_5;

 VAR_28->btc_set_rf_reg = VAR_22;
 VAR_28->btc_get_rf_reg = VAR_13;

 VAR_28->btc_fill_h2c = VAR_2;
 VAR_28->btc_disp_dbg_msg = VAR_1;

 VAR_28->btc_get = VAR_3;
 VAR_28->btc_set = VAR_19;
 VAR_28->btc_set_bt_reg = VAR_21;
 VAR_28->btc_get_bt_reg = VAR_11;

 VAR_28->bt_info.bt_ctrl_buf_size = 0;
 VAR_28->bt_info.agg_buf_size = 5;

 VAR_28->bt_info.increase_scan_dev_num = 0;

 VAR_28->btc_get_bt_coex_supported_feature =
     VAR_9;
 VAR_28->btc_get_bt_coex_supported_version =
     VAR_10;
 VAR_28->btc_get_bt_phydm_version = VAR_12;
 VAR_28->btc_phydm_modify_ra_pcr_threshold =
     VAR_14;
 VAR_28->btc_phydm_query_phy_counter = VAR_15;
 VAR_28->btc_get_ant_det_val_from_bt = VAR_4;
 VAR_28->btc_get_ble_scan_type_from_bt =
     VAR_7;
 VAR_28->btc_get_ble_scan_para_from_bt =
     VAR_6;
 VAR_28->btc_get_bt_afh_map_from_bt =
     VAR_8;

 FUNC_1(&VAR_28->bt_mp_comp);

 return 1;
}
