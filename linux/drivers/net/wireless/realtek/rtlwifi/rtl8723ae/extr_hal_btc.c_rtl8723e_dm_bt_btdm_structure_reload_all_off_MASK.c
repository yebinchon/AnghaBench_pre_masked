
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int dummy; } ;
struct btdm_8723 {int all_off; int pta_on; int wlan_act_hi; } ;


 int FUNC_0 (struct ieee80211_hw*,struct btdm_8723*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0,
        struct btdm_8723 *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 VAR_1->all_off = 1;
 VAR_1->pta_on = 0;
 VAR_1->wlan_act_hi = 0x10;
}
