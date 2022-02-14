
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int sw_chnl_inprogress; int current_channel; scalar_t__ sw_chnl_step; scalar_t__ sw_chnl_stage; scalar_t__ set_bwmode_inprogress; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct rtl_hal*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;

u8 FUNC_7(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_6(VAR_2);
 struct rtl_phy *VAR_4 = &VAR_3->phy;
 struct rtl_hal *VAR_5 = FUNC_5(FUNC_6(VAR_2));

 if (VAR_4->sw_chnl_inprogress)
  return 0;
 if (VAR_4->set_bwmode_inprogress)
  return 0;
 FUNC_2((VAR_4->current_channel > 14),
    "rtl8723ae: WIRELESS_MODE_G but channel>14");
 VAR_4->sw_chnl_inprogress = 1;
 VAR_4->sw_chnl_stage = 0;
 VAR_4->sw_chnl_step = 0;
 if (!(FUNC_3(VAR_5)) && !(FUNC_0(VAR_2))) {
  FUNC_4(VAR_2);
  FUNC_1(VAR_3, VAR_0, VAR_1,
    "sw_chnl_inprogress false schedule workitem\n");
  VAR_4->sw_chnl_inprogress = 0;
 } else {
  FUNC_1(VAR_3, VAR_0, VAR_1,
    "sw_chnl_inprogress false driver sleep or unload\n");
  VAR_4->sw_chnl_inprogress = 0;
 }
 return 1;
}
