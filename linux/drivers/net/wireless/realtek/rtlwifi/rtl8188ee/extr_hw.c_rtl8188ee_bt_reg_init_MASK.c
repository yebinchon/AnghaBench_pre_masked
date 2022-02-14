
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_bt_iso; int reg_bt_sco; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

void FUNC_1(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_0(VAR_0);


 VAR_1->btcoexist.reg_bt_iso = 2;

 VAR_1->btcoexist.reg_bt_sco = 3;

 VAR_1->btcoexist.reg_bt_sco = 0;
}
