
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl_phy {int sw_chnl_inprogress; int sw_chnl_step; int sw_chnl_stage; int current_channel; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct rtl_hal*) ;
 int FUNC_3 (scalar_t__) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

void FUNC_6(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_5(VAR_2);
 struct rtl_hal *VAR_4 = FUNC_4(FUNC_5(VAR_2));
 struct rtl_phy *VAR_5 = &(VAR_3->phy);
 u32 VAR_6;

 FUNC_0(VAR_3, VAR_0, VAR_1,
   "switch to channel%d\n", VAR_5->current_channel);
 if (FUNC_2(VAR_4))
  return;
 do {
  if (!VAR_5->sw_chnl_inprogress)
   break;
  if (!FUNC_1
      (VAR_2, VAR_5->current_channel, &VAR_5->sw_chnl_stage,
       &VAR_5->sw_chnl_step, &VAR_6)) {
   if (VAR_6 > 0)
    FUNC_3(VAR_6);
   else
    continue;
  } else {
   VAR_5->sw_chnl_inprogress = 0;
  }
  break;
 } while (1);
 FUNC_0(VAR_3, VAR_0, VAR_1, "\n");
}
