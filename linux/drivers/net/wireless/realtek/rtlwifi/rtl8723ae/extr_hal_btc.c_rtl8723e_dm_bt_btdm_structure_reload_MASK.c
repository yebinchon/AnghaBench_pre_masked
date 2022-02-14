
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int dummy; } ;
struct btdm_8723 {int all_off; int agc_table_en; int adc_back_off_on; int b2_ant_hid_en; int low_penalty_rate_adaptive; int rf_rx_lpf_shrink; int reject_aggre_pkt; int tdma_on; int fw_dac_swing_lvl; int tra_tdma_on; int ignore_wlan_act; int ps_tdma_on; int* ps_tdma_byte; int pta_on; int val_0x6c0; int val_0x6c8; int val_0x6cc; int sw_dac_swing_on; int sw_dac_swing_lvl; int wlan_act_hi; int wlan_act_lo; int bt_retry_index; int dec_bt_pwr; void* tra_tdma_nav; void* tra_tdma_ant; int tdma_dac_swing; void* tdma_nav; void* tdma_ant; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ieee80211_hw *VAR_3,
       struct btdm_8723 *VAR_4)
{
 VAR_4->all_off = 0;
 VAR_4->agc_table_en = 0;
 VAR_4->adc_back_off_on = 0;
 VAR_4->b2_ant_hid_en = 0;
 VAR_4->low_penalty_rate_adaptive = 0;
 VAR_4->rf_rx_lpf_shrink = 0;
 VAR_4->reject_aggre_pkt = 0;

 VAR_4->tdma_on = 0;
 VAR_4->tdma_ant = VAR_0;
 VAR_4->tdma_nav = VAR_2;
 VAR_4->tdma_dac_swing = VAR_1;
 VAR_4->fw_dac_swing_lvl = 0x20;

 VAR_4->tra_tdma_on = 0;
 VAR_4->tra_tdma_ant = VAR_0;
 VAR_4->tra_tdma_nav = VAR_2;
 VAR_4->ignore_wlan_act = 0;

 VAR_4->ps_tdma_on = 0;
 VAR_4->ps_tdma_byte[0] = 0x0;
 VAR_4->ps_tdma_byte[1] = 0x0;
 VAR_4->ps_tdma_byte[2] = 0x0;
 VAR_4->ps_tdma_byte[3] = 0x8;
 VAR_4->ps_tdma_byte[4] = 0x0;

 VAR_4->pta_on = 1;
 VAR_4->val_0x6c0 = 0x5a5aaaaa;
 VAR_4->val_0x6c8 = 0xcc;
 VAR_4->val_0x6cc = 0x3;

 VAR_4->sw_dac_swing_on = 0;
 VAR_4->sw_dac_swing_lvl = 0xc0;
 VAR_4->wlan_act_hi = 0x20;
 VAR_4->wlan_act_lo = 0x10;
 VAR_4->bt_retry_index = 2;

 VAR_4->dec_bt_pwr = 0;
}
