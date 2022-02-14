
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rtl_phy {scalar_t__ current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct btdm_8723 {int rf_rx_lpf_shrink; int low_penalty_rate_adaptive; int reject_aggre_pkt; int val_0x6c0; int val_0x6c8; int val_0x6cc; int agc_table_en; int adc_back_off_on; int sw_dac_swing_on; int ps_tdma_on; int* ps_tdma_byte; int dec_bt_pwr; } ;
struct TYPE_2__ {scalar_t__ bt_inq_page_start_time; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 TYPE_1__ VAR_8 ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,struct btdm_8723*) ;
 scalar_t__ FUNC_3 (struct ieee80211_hw*,int,int,int ) ;
 scalar_t__ FUNC_4 (struct ieee80211_hw*,int,int,int ) ;
 scalar_t__ FUNC_5 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*,struct btdm_8723*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_8(VAR_9);
 struct rtl_phy *VAR_11 = &(VAR_10->phy);
 struct btdm_8723 VAR_12;
 u8 VAR_13, VAR_14;
 u8 VAR_15 = 0;

 FUNC_2(VAR_9, &VAR_12);

 VAR_12 = 1;
 VAR_12 = 1;
 VAR_12 = 0;

 VAR_15 = FUNC_1(VAR_9);
 FUNC_0(VAR_10, VAR_5, VAR_6,
   "[BTCoex], BT TxRx Counters = %d\n", VAR_15);

 if (VAR_11->current_chan_bw == VAR_7) {
  FUNC_0(VAR_10, VAR_5, VAR_6, "HT40\n");

  VAR_12 = 0x55555555;
  VAR_12 = 0xffff;
  VAR_12 = 0x3;


  VAR_12 = 0;
  VAR_12 = 0;
  VAR_12 = 0;


  VAR_12 = 1;
  if (VAR_15 == VAR_3) {
   FUNC_0(VAR_10, VAR_5, VAR_6,
     "[BTCoex], BT TxRx Counters >= 1400\n");
   VAR_12[0] = 0xa3;
   VAR_12[1] = 0x5;
   VAR_12[2] = 0x5;
   VAR_12[3] = 0x2;
   VAR_12[4] = 0x80;
  } else if (VAR_15 == VAR_2) {
   FUNC_0(VAR_10, VAR_5, VAR_6,
     "[BTCoex], BT TxRx Counters >= 1200 && < 1400\n");
   VAR_12[0] = 0xa3;
   VAR_12[1] = 0xa;
   VAR_12[2] = 0xa;
   VAR_12[3] = 0x2;
   VAR_12[4] = 0x80;
  } else {
   FUNC_0(VAR_10, VAR_5, VAR_6,
     "[BTCoex], BT TxRx Counters < 1200\n");
   VAR_12[0] = 0xa3;
   VAR_12[1] = 0xf;
   VAR_12[2] = 0xf;
   VAR_12[3] = 0x2;
   VAR_12[4] = 0x80;
  }
 } else {
  FUNC_0(VAR_10, VAR_5, VAR_6,
    "HT20 or Legacy\n");
  VAR_13 =
    FUNC_3(VAR_9, 2, 47, 0);
  VAR_14 =
    FUNC_4(VAR_9, 2, 27, 0);


  VAR_12 = 0x55555555;
  VAR_12 = 0xffff;
  VAR_12 = 0x3;


  if ((VAR_13 == VAR_0) ||
   (VAR_13 == VAR_1)) {
   FUNC_0(VAR_10, VAR_5, VAR_6,
     "Wifi rssi high\n");
   VAR_12 = 1;
   VAR_12 = 1;
   VAR_12 = 0;
  } else {
   FUNC_0(VAR_10, VAR_5, VAR_6,
     "Wifi rssi low\n");
   VAR_12 = 0;
   VAR_12 = 0;
   VAR_12 = 0;
  }


  VAR_12 = 1;
  if ((VAR_14 == VAR_0) ||
   (VAR_14 == VAR_1)) {
   FUNC_0(VAR_10, VAR_5, VAR_6,
     "Wifi rssi-1 high\n");


   FUNC_9(VAR_10, 0x883, 0x40);
   if (VAR_15 == VAR_3) {
    FUNC_0(VAR_10, VAR_5, VAR_6,
    "[BTCoex], BT TxRx Counters >= 1400\n");
    VAR_12[0] = 0xa3;
    VAR_12[1] = 0x5;
    VAR_12[2] = 0x5;
    VAR_12[3] = 0x83;
    VAR_12[4] = 0x80;
   } else if (VAR_15 == VAR_2) {
    FUNC_0(VAR_10, VAR_5, VAR_6,
      "[BTCoex], BT TxRx Counters>= 1200 && < 1400\n");
    VAR_12[0] = 0xa3;
    VAR_12[1] = 0xa;
    VAR_12[2] = 0xa;
    VAR_12[3] = 0x83;
    VAR_12[4] = 0x80;
   } else {
    FUNC_0(VAR_10, VAR_5, VAR_6,
      "[BTCoex], BT TxRx Counters < 1200\n");
    VAR_12[0] = 0xa3;
    VAR_12[1] = 0xf;
    VAR_12[2] = 0xf;
    VAR_12[3] = 0x83;
    VAR_12[4] = 0x80;
   }
  } else {
   FUNC_0(VAR_10, VAR_5, VAR_6,
     "Wifi rssi-1 low\n");
   if (VAR_15 == VAR_3) {
    FUNC_0(VAR_10, VAR_5, VAR_6,
      "[BTCoex], BT TxRx Counters >= 1400\n");
    VAR_12[0] = 0xa3;
    VAR_12[1] = 0x5;
    VAR_12[2] = 0x5;
    VAR_12[3] = 0x2;
    VAR_12[4] = 0x80;
   } else if (VAR_15 == VAR_2) {
    FUNC_0(VAR_10, VAR_5, VAR_6,
      "[BTCoex], BT TxRx Counters >= 1200 && < 1400\n");
    VAR_12[0] = 0xa3;
    VAR_12[1] = 0xa;
    VAR_12[2] = 0xa;
    VAR_12[3] = 0x2;
    VAR_12[4] = 0x80;
   } else {
    FUNC_0(VAR_10, VAR_5, VAR_6,
      "[BTCoex], BT TxRx Counters < 1200\n");
    VAR_12[0] = 0xa3;
    VAR_12[1] = 0xf;
    VAR_12[2] = 0xf;
    VAR_12[3] = 0x2;
    VAR_12[4] = 0x80;
   }
  }
 }

 if (FUNC_6(VAR_9))
  VAR_12 = 1;



 FUNC_0(VAR_10, VAR_5, VAR_6,
   "[BTCoex], BT btInqPageStartTime = 0x%x, btTxRxCntLvl = %d\n",
   VAR_8, VAR_15);
 if ((VAR_8) ||
     (VAR_4 == VAR_15)) {
  FUNC_0(VAR_10, VAR_5, VAR_6,
    "[BTCoex], Set BT inquiry / page scan 0x3a setting\n");
  VAR_12 = 1;
  VAR_12[0] = 0xa3;
  VAR_12[1] = 0x5;
  VAR_12[2] = 0x5;
  VAR_12[3] = 0x2;
  VAR_12[4] = 0x80;
 }

 if (FUNC_5(VAR_9))
  FUNC_7(VAR_9, &VAR_12);

}
