
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ act_scanning; } ;
struct rtl_hal {int version; int current_bandtype; } ;
struct rtl_phy {int lck_inprogress; } ;
struct rtl_priv {TYPE_1__ mac80211; struct rtl_hal rtlhal; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int) ;

void FUNC_5(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_3(VAR_2);
 struct rtl_phy *VAR_4 = &(VAR_3->phy);
 struct rtl_hal *VAR_5 = &(VAR_3->rtlhal);
 u32 VAR_6 = 2000, VAR_7 = 0;

 while (VAR_3->mac80211.act_scanning && VAR_7 < VAR_6) {
  FUNC_4(50);
  VAR_7 += 50;
 }

 VAR_4->lck_inprogress = 1;
 FUNC_1(VAR_3, VAR_0, VAR_1,
  "LCK:Start!!! currentband %x delay %d ms\n",
  VAR_5->current_bandtype, VAR_7);
 if (FUNC_0(VAR_5->version)) {
  FUNC_2(VAR_2, 1);
 } else {

  FUNC_2(VAR_2, 0);
 }
 VAR_4->lck_inprogress = 0;
 FUNC_1(VAR_3, VAR_0, VAR_1, "LCK:Finish!!!\n");
}
