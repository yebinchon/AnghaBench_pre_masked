
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int mode; } ;
struct rtl_phy {int current_channel; int sw_chnl_inprogress; scalar_t__ sw_chnl_step; scalar_t__ sw_chnl_stage; scalar_t__ lck_inprogress; scalar_t__ set_bwmode_inprogress; } ;
struct rtl_priv {TYPE_1__ mac80211; struct rtl_phy phy; } ;
struct rtl_hal {scalar_t__ macphymode; scalar_t__ bandset; int current_bandtype; } ;
struct ieee80211_hw {int dummy; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (struct ieee80211_hw*,int,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct rtl_hal*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct ieee80211_hw*,int) ;
 scalar_t__ FUNC_8 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_hal* FUNC_9 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_10 (struct ieee80211_hw*) ;

u8 FUNC_11(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_10(VAR_8);
 struct rtl_phy *VAR_10 = &(VAR_9->phy);
 struct rtl_hal *VAR_11 = FUNC_9(FUNC_10(VAR_8));
 u32 VAR_12;
 u32 VAR_13 = 1000, VAR_14 = 0;
 u8 VAR_15 = VAR_10->current_channel;
 u32 VAR_16;

 if (VAR_10->sw_chnl_inprogress)
  return 0;
 if (VAR_10->set_bwmode_inprogress)
  return 0;

 if ((FUNC_5(VAR_11)) || (FUNC_1(VAR_8))) {
  FUNC_2(VAR_9, VAR_1, VAR_3,
    "sw_chnl_inprogress false driver sleep or unload\n");
  return 0;
 }
 while (VAR_10->lck_inprogress && VAR_14 < VAR_13) {
  FUNC_6(50);
  VAR_14 += 50;
 }
 if (VAR_11->macphymode == VAR_7 &&
     VAR_11->bandset == VAR_0) {
  VAR_16 = FUNC_8(VAR_8, VAR_6,
       VAR_5);
  if (VAR_10->current_channel > 14 && !(VAR_16 & FUNC_0(0)))
   FUNC_7(VAR_8, 128);
  else if (VAR_10->current_channel <= 14 && (VAR_16 & FUNC_0(0)))
   FUNC_7(VAR_8, 129);
 }
 switch (VAR_11->current_bandtype) {
 case 128:


  if (VAR_15 <= 14)
   return 0;
  FUNC_3((VAR_15 <= 14), "rtl8192de: 5G but channel<=14\n");
  break;
 case 129:


  if (VAR_15 > 14)
   return 0;
  FUNC_3((VAR_15 > 14), "rtl8192de: 2G but channel>14\n");
  break;
 default:
  FUNC_3(1, "rtl8192de: Invalid WirelessMode(%#x)!!\n",
     VAR_9->mac80211.mode);
  break;
 }
 VAR_10->sw_chnl_inprogress = 1;
 if (VAR_15 == 0)
  VAR_15 = 1;
 VAR_10->sw_chnl_stage = 0;
 VAR_10->sw_chnl_step = 0;
 FUNC_2(VAR_9, VAR_2, VAR_4,
   "switch to channel%d\n", VAR_10->current_channel);

 do {
  if (!VAR_10->sw_chnl_inprogress)
   break;
  if (!FUNC_4(VAR_8,
            VAR_10->current_channel,
      &VAR_10->sw_chnl_stage, &VAR_10->sw_chnl_step, &VAR_12)) {
   if (VAR_12 > 0)
    FUNC_6(VAR_12);
   else
    continue;
  } else {
   VAR_10->sw_chnl_inprogress = 0;
  }
  break;
 } while (1);
 FUNC_2(VAR_9, VAR_2, VAR_4, "<==\n");
 VAR_10->sw_chnl_inprogress = 0;
 return 1;
}
