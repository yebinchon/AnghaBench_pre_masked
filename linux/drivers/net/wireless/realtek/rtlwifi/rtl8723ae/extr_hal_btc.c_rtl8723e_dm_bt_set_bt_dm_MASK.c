
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ hold_for_bt_operation; } ;
struct rtl_priv {TYPE_1__ btcoexist; TYPE_3__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct btdm_8723 {int* ps_tdma_byte; int ignore_wlan_act; int dec_bt_pwr; int sw_dac_swing_lvl; int sw_dac_swing_on; int tdma_dac_swing; int tdma_nav; int tdma_ant; int tra_tdma_nav; int tra_tdma_ant; int tra_tdma_on; int ps_tdma_on; int tdma_on; int b2_ant_hid_en; int pta_on; int val_0x6cc; int val_0x6c8; int val_0x6c0; int wlan_act_lo; int wlan_act_hi; int fw_dac_swing_lvl; int bt_retry_index; int adc_back_off_on; int agc_table_en; int rf_rx_lpf_shrink; int low_penalty_rate_adaptive; int reject_aggre_pkt; int all_off; } ;
struct TYPE_8__ {struct btdm_8723 btdm; } ;
struct TYPE_7__ {TYPE_2__* ops; } ;
struct TYPE_6__ {int (* get_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;


 int VAR_0 ;
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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,int ) ;
 TYPE_4__ VAR_13 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct btdm_8723*,struct btdm_8723*,int) ;
 int FUNC_4 (struct btdm_8723*,struct btdm_8723*,int) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,int ) ;
 int FUNC_7 (struct ieee80211_hw*,int ) ;
 int FUNC_8 (struct ieee80211_hw*,int ) ;
 int FUNC_9 (struct ieee80211_hw*,int ,int ,int ) ;
 int FUNC_10 (struct ieee80211_hw*,int,int) ;
 int FUNC_11 (struct ieee80211_hw*,int,int,int,int,int) ;
 int FUNC_12 (struct ieee80211_hw*,int) ;
 int FUNC_13 (struct ieee80211_hw*,int ) ;
 int FUNC_14 (struct ieee80211_hw*,int ) ;
 int FUNC_15 (struct ieee80211_hw*,int ) ;
 int FUNC_16 (struct ieee80211_hw*,int) ;
 int FUNC_17 (struct ieee80211_hw*,int,int ,int ,int ) ;
 int FUNC_18 (struct ieee80211_hw*,int ,int ,int ) ;
 int FUNC_19 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_20 (struct ieee80211_hw*,int ) ;
 int FUNC_21 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_22 (struct ieee80211_hw*,int ) ;
 struct rtl_priv* FUNC_23 (struct ieee80211_hw*) ;
 int FUNC_24 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_25 (struct ieee80211_hw*,int ,int*) ;

void FUNC_26(struct ieee80211_hw *VAR_14,
         struct btdm_8723 *VAR_15)
{
 struct rtl_priv *VAR_16 = FUNC_23(VAR_14);
 struct btdm_8723 *VAR_17 = &VAR_13;
 u8 VAR_18;

 bool VAR_19 = 0;
 bool VAR_20 = 1;

 VAR_16->cfg->ops->get_hw_reg(VAR_14, VAR_12,
           (u8 *)(&VAR_19));
 VAR_16->cfg->ops->get_hw_reg(VAR_14, VAR_11,
           (u8 *)(&VAR_20));



 if (FUNC_3(VAR_17, VAR_15, sizeof(struct btdm_8723)) == 0) {
  FUNC_0(VAR_16, VAR_8, VAR_9,
   "[BTCoex], the same coexist setting, return!!\n");
  return;
 } else {
  FUNC_0(VAR_16, VAR_8, VAR_9,
   "[BTCoex], UPDATE TO NEW COEX SETTING!!\n");
  FUNC_0(VAR_16, VAR_8, VAR_9,
   "[BTCoex], original/new bAllOff=0x%x/ 0x%x\n",
   VAR_17->all_off, VAR_15->all_off);
  FUNC_0(VAR_16, VAR_8, VAR_9,
   "[BTCoex], original/new agc_table_en=0x%x/ 0x%x\n",
   VAR_17->agc_table_en, VAR_15->agc_table_en);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new adc_back_off_on=0x%x/ 0x%x\n",
    VAR_17->adc_back_off_on,
    VAR_15->adc_back_off_on);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new b2_ant_hid_en=0x%x/ 0x%x\n",
    VAR_17->b2_ant_hid_en, VAR_15->b2_ant_hid_en);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new bLowPenaltyRateAdaptive=0x%x/ 0x%x\n",
    VAR_17->low_penalty_rate_adaptive,
    VAR_15->low_penalty_rate_adaptive);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new bRfRxLpfShrink=0x%x/ 0x%x\n",
    VAR_17->rf_rx_lpf_shrink,
    VAR_15->rf_rx_lpf_shrink);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new bRejectAggrePkt=0x%x/ 0x%x\n",
    VAR_17->reject_aggre_pkt,
    VAR_15->reject_aggre_pkt);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new tdma_on=0x%x/ 0x%x\n",
    VAR_17->tdma_on, VAR_15->tdma_on);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new tdmaAnt=0x%x/ 0x%x\n",
    VAR_17->tdma_ant, VAR_15->tdma_ant);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new tdmaNav=0x%x/ 0x%x\n",
    VAR_17->tdma_nav, VAR_15->tdma_nav);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new tdma_dac_swing=0x%x/ 0x%x\n",
    VAR_17->tdma_dac_swing, VAR_15->tdma_dac_swing);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new fw_dac_swing_lvl=0x%x/ 0x%x\n",
    VAR_17->fw_dac_swing_lvl,
    VAR_15->fw_dac_swing_lvl);

  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new bTraTdmaOn=0x%x/ 0x%x\n",
    VAR_17->tra_tdma_on, VAR_15->tra_tdma_on);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new traTdmaAnt=0x%x/ 0x%x\n",
    VAR_17->tra_tdma_ant, VAR_15->tra_tdma_ant);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new traTdmaNav=0x%x/ 0x%x\n",
    VAR_17->tra_tdma_nav, VAR_15->tra_tdma_nav);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new bPsTdmaOn=0x%x/ 0x%x\n",
    VAR_17->ps_tdma_on, VAR_15->ps_tdma_on);
  for (VAR_18 = 0; VAR_18 < 5; VAR_18++) {
   FUNC_0(VAR_16, VAR_8, VAR_9,
     "[BTCoex], original/new psTdmaByte[i]=0x%x/ 0x%x\n",
     VAR_17->ps_tdma_byte[VAR_18],
     VAR_15->ps_tdma_byte[VAR_18]);
  }
  FUNC_0(VAR_16, VAR_8, VAR_9,
   "[BTCoex], original/new bIgnoreWlanAct=0x%x/ 0x%x\n",
   VAR_17->ignore_wlan_act,
   VAR_15->ignore_wlan_act);


  FUNC_0(VAR_16, VAR_8, VAR_9,
   "[BTCoex], original/new bPtaOn=0x%x/ 0x%x\n",
   VAR_17->pta_on, VAR_15->pta_on);
  FUNC_0(VAR_16, VAR_8, VAR_9,
   "[BTCoex], original/new val_0x6c0=0x%x/ 0x%x\n",
   VAR_17->val_0x6c0, VAR_15->val_0x6c0);
  FUNC_0(VAR_16, VAR_8, VAR_9,
   "[BTCoex], original/new val_0x6c8=0x%x/ 0x%x\n",
   VAR_17->val_0x6c8, VAR_15->val_0x6c8);
  FUNC_0(VAR_16, VAR_8, VAR_9,
   "[BTCoex], original/new val_0x6cc=0x%x/ 0x%x\n",
   VAR_17->val_0x6cc, VAR_15->val_0x6cc);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new sw_dac_swing_on=0x%x/ 0x%x\n",
    VAR_17->sw_dac_swing_on,
    VAR_15->sw_dac_swing_on);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new sw_dac_swing_lvl=0x%x/ 0x%x\n",
    VAR_17->sw_dac_swing_lvl,
    VAR_15->sw_dac_swing_lvl);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new wlanActHi=0x%x/ 0x%x\n",
    VAR_17->wlan_act_hi, VAR_15->wlan_act_hi);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new wlanActLo=0x%x/ 0x%x\n",
    VAR_17->wlan_act_lo, VAR_15->wlan_act_lo);
  FUNC_0(VAR_16, VAR_8, VAR_9,
    "[BTCoex], original/new btRetryIndex=0x%x/ 0x%x\n",
    VAR_17->bt_retry_index, VAR_15->bt_retry_index);

  FUNC_4(VAR_17, VAR_15, sizeof(struct btdm_8723));
 }





 if (VAR_16->btcoexist.hold_for_bt_operation) {
  FUNC_0(VAR_16, VAR_8, VAR_10,
   "[BTCoex], set to ignore wlanAct for BT OP!!\n");
  FUNC_16(VAR_14, 1);
  return;
 }

 if (VAR_15->all_off) {
  FUNC_0(VAR_16, VAR_8, VAR_10,
   "[BTCoex], disable all coexist mechanism !!\n");
  FUNC_5(VAR_14);
  return;
 }

 FUNC_8(VAR_14, VAR_15->reject_aggre_pkt);

 if (VAR_15->low_penalty_rate_adaptive)
  FUNC_1(VAR_14, VAR_6);
 else
  FUNC_1(VAR_14,
         VAR_7);

 if (VAR_15->rf_rx_lpf_shrink)
  FUNC_22(VAR_14,
    VAR_5);
 else
  FUNC_22(VAR_14,
    VAR_4);

 if (VAR_15->agc_table_en)
  FUNC_6(VAR_14, VAR_1);
 else
  FUNC_6(VAR_14, VAR_0);

 if (VAR_15->adc_back_off_on)
  FUNC_7(VAR_14, VAR_3);
 else
  FUNC_7(VAR_14, VAR_2);

 FUNC_13(VAR_14, VAR_15->bt_retry_index);

 FUNC_14(VAR_14, VAR_15->fw_dac_swing_lvl);
 FUNC_19(VAR_14, VAR_15->wlan_act_hi,
           VAR_15->wlan_act_lo);

 FUNC_9(VAR_14, VAR_15->val_0x6c0,
          VAR_15->val_0x6c8, VAR_15->val_0x6cc);
 FUNC_20(VAR_14, VAR_15->pta_on);






 if (VAR_15->b2_ant_hid_en) {

  FUNC_18(VAR_14, VAR_15->tra_tdma_on,
          VAR_15->tra_tdma_ant,
          VAR_15->tra_tdma_nav);
  FUNC_17(VAR_14, 0, VAR_15->tdma_ant,
      VAR_15->tdma_nav,
      VAR_15->tdma_dac_swing);


  FUNC_16(VAR_14,
            VAR_15->ignore_wlan_act);

  FUNC_11(VAR_14, 0x0, 0x0, 0x0, 0x8, 0x0);


  FUNC_12(VAR_14, 1);
  FUNC_10(VAR_14, 1, 1);
 } else if (VAR_15->tdma_on) {

  FUNC_12(VAR_14, 0);
  FUNC_10(VAR_14, 0, 0);


  FUNC_16(VAR_14,
            VAR_15->ignore_wlan_act);

  FUNC_11(VAR_14, 0x0, 0x0, 0x0, 0x8, 0x0);


  FUNC_18(VAR_14, VAR_15->tra_tdma_on,
          VAR_15->tra_tdma_ant,
          VAR_15->tra_tdma_nav);
  FUNC_17(VAR_14, 1, VAR_15->tdma_ant,
      VAR_15->tdma_nav,
      VAR_15->tdma_dac_swing);
 } else if (VAR_15->ps_tdma_on) {

  FUNC_12(VAR_14, 0);
  FUNC_10(VAR_14, 0, 0);


  FUNC_18(VAR_14, VAR_15->tra_tdma_on,
          VAR_15->tra_tdma_ant,
          VAR_15->tra_tdma_nav);
  FUNC_17(VAR_14, 0, VAR_15->tdma_ant,
      VAR_15->tdma_nav,
      VAR_15->tdma_dac_swing);


  FUNC_16(VAR_14,
            VAR_15->ignore_wlan_act);
  FUNC_11(VAR_14, VAR_15->ps_tdma_byte[0],
      VAR_15->ps_tdma_byte[1],
      VAR_15->ps_tdma_byte[2],
      VAR_15->ps_tdma_byte[3],
      VAR_15->ps_tdma_byte[4]);
 } else {

  FUNC_12(VAR_14, 0);
  FUNC_10(VAR_14, 0, 0);


  FUNC_18(VAR_14, VAR_15->tra_tdma_on,
          VAR_15->tra_tdma_ant,
          VAR_15->tra_tdma_nav);
  FUNC_17(VAR_14, 0, VAR_15->tdma_ant,
      VAR_15->tdma_nav,
      VAR_15->tdma_dac_swing);


  FUNC_16(VAR_14,
      VAR_15->ignore_wlan_act);

  FUNC_11(VAR_14, 0x0, 0x0, 0x0, 0x8, 0x0);
 }
 FUNC_2(30);
 FUNC_21(VAR_14, VAR_15->sw_dac_swing_on,
        VAR_15->sw_dac_swing_lvl);
 FUNC_15(VAR_14, VAR_15->dec_bt_pwr);
}
