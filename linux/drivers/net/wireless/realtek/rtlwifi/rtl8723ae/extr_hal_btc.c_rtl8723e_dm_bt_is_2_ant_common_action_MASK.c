
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cstate; scalar_t__ bt_busy; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;
struct btdm_8723 {int low_penalty_rate_adaptive; int rf_rx_lpf_shrink; int reject_aggre_pkt; int agc_table_en; int adc_back_off_on; int sw_dac_swing_on; int pta_on; int val_0x6c0; int val_0x6c8; int val_0x6cc; int tdma_on; int b2_ant_hid_en; int dec_bt_pwr; void* tdma_dac_swing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 void* VAR_4 ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,struct btdm_8723*) ;
 int FUNC_3 (struct ieee80211_hw*,struct btdm_8723*) ;
 scalar_t__ FUNC_4 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_5 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*,struct btdm_8723*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_9(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_8(VAR_5);
 struct btdm_8723 VAR_7;
 bool VAR_8 = 0;

 FUNC_2(VAR_5, &VAR_7);

 if (!FUNC_5(VAR_5) &&
     !VAR_6->btcoexist.bt_busy) {
  FUNC_0(VAR_6, VAR_1, VAR_2,
    "Wifi idle + Bt idle, bt coex mechanism always off!!\n");
  FUNC_3(VAR_5, &VAR_7);
  VAR_8 = 1;
 } else if (FUNC_5(VAR_5) &&
     !VAR_6->btcoexist.bt_busy) {
  FUNC_0(VAR_6, VAR_1, VAR_2,
    "Wifi non-idle + Bt disabled/idle!!\n");
  VAR_7 = 1;
  VAR_7 = 0;
  VAR_7 = 0;


  VAR_7 = 0;
  VAR_7 = 0;
  VAR_7 = 0;

  VAR_7 = 1;
  VAR_7 = 0x5a5aaaaa;
  VAR_7 = 0xcccc;
  VAR_7 = 0x3;

  VAR_7 = 0;
  VAR_7 = VAR_4;
  VAR_7 = 0;

  VAR_8 = 1;
 } else if (VAR_6->btcoexist.bt_busy) {
  FUNC_0(VAR_6, VAR_1, VAR_2,
   "Bt non-idle!\n");
  if (FUNC_1(VAR_5) == VAR_3) {
   FUNC_0(VAR_6, VAR_1, VAR_2,
    "Wifi connection exist\n");
   VAR_8 = 0;
  } else {
   FUNC_0(VAR_6, VAR_1, VAR_2,
    "No Wifi connection!\n");
   VAR_7 = 1;
   VAR_7 = 0;
   VAR_7 = 0;


   VAR_7 = 0;
   VAR_7 = 0;
   VAR_7 = 0;

   VAR_7 = 1;
   VAR_7 = 0x55555555;
   VAR_7 = 0x0000ffff;
   VAR_7 = 0x3;

   VAR_7 = 0;
   VAR_7 = VAR_4;
   VAR_7 = 0;

   VAR_8 = 1;
  }
 }

 if (FUNC_6(VAR_5))
  VAR_7 = 1;

 if (VAR_8)
  VAR_6->btcoexist.cstate |=
   VAR_0;

 if (VAR_8 && FUNC_4(VAR_5))
  FUNC_7(VAR_5, &VAR_7);

 return VAR_8;
}
