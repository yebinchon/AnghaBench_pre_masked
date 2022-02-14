
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtl_phy {int current_channel; int sw_chnl_inprogress; scalar_t__ lck_inprogress; scalar_t__ set_bwmode_inprogress; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (struct rtl_hal*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*,scalar_t__) ;
 struct rtl_hal* FUNC_8 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;

u8 FUNC_10(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_9(VAR_6);
 struct rtl_phy *VAR_8 = &VAR_7->phy;
 struct rtl_hal *VAR_9 = FUNC_8(FUNC_9(VAR_6));
 u32 VAR_10 = 1000, VAR_11 = 0;
 u8 VAR_12 = VAR_8->current_channel;

 if (VAR_8->sw_chnl_inprogress)
  return 0;
 if (VAR_8->set_bwmode_inprogress)
  return 0;

 if ((FUNC_2(VAR_9)) || (FUNC_0(VAR_6))) {
  FUNC_1(VAR_7, VAR_2, VAR_4,
    "sw_chnl_inprogress false driver sleep or unload\n");
  return 0;
 }
 while (VAR_8->lck_inprogress && VAR_11 < VAR_10) {
  FUNC_3(50);
  VAR_11 += 50;
 }

 if (VAR_8->current_channel > 14 && VAR_9->current_bandtype != VAR_1)
  FUNC_7(VAR_6, VAR_1);
 else if (VAR_8->current_channel <= 14 && VAR_9->current_bandtype != VAR_0)
  FUNC_7(VAR_6, VAR_0);

 VAR_8->sw_chnl_inprogress = 1;
 if (VAR_12 == 0)
  VAR_12 = 1;

 FUNC_1(VAR_7, VAR_3, VAR_5,
   "switch to channel%d, band type is %d\n",
   VAR_8->current_channel, VAR_9->current_bandtype);

 FUNC_6(VAR_6);

 FUNC_4(VAR_6);
 FUNC_5(VAR_6, VAR_8->current_channel);

 FUNC_1(VAR_7, VAR_3, VAR_5, "\n");
 VAR_8->sw_chnl_inprogress = 0;
 return 1;
}
