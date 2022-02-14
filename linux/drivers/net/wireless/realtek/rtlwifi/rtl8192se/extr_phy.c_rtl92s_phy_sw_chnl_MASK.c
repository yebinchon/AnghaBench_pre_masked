
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtl_phy {int sw_chnl_inprogress; scalar_t__ sw_chnl_step; scalar_t__ sw_chnl_stage; int current_channel; scalar_t__ set_bwmode_inprogress; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct rtl_hal*) ;
 int FUNC_3 (scalar_t__) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

u8 FUNC_6(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_5(VAR_2);
 struct rtl_hal *VAR_4 = FUNC_4(FUNC_5(VAR_2));
 struct rtl_phy *VAR_5 = &(VAR_3->phy);
 u32 VAR_6;
 bool VAR_7;

 FUNC_0(VAR_3, VAR_0, VAR_1, "switch to channel%d\n",
   VAR_5->current_channel);

 if (VAR_5->sw_chnl_inprogress)
  return 0;

 if (VAR_5->set_bwmode_inprogress)
  return 0;

 if (FUNC_2(VAR_4))
  return 0;

 VAR_5->sw_chnl_inprogress = 1;
 VAR_5->sw_chnl_stage = 0;
 VAR_5->sw_chnl_step = 0;

 do {
  if (!VAR_5->sw_chnl_inprogress)
   break;

  VAR_7 = FUNC_1(VAR_2,
     VAR_5->current_channel,
     &VAR_5->sw_chnl_stage,
     &VAR_5->sw_chnl_step, &VAR_6);
  if (!VAR_7) {
   if (VAR_6 > 0)
    FUNC_3(VAR_6);
   else
    continue;
  } else {
   VAR_5->sw_chnl_inprogress = 0;
  }
  break;
 } while (1);

 VAR_5->sw_chnl_inprogress = 0;

 FUNC_0(VAR_3, VAR_0, VAR_1, "<==\n");

 return 1;
}
