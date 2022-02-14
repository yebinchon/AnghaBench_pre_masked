
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sw_coexist_all_off; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

void FUNC_3(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_3, VAR_0, VAR_1,
   "rtl8723e_dm_bt_sw_coex_all_off()\n");

 if (VAR_3->btcoexist.sw_coexist_all_off)
  return;

 FUNC_0(VAR_3, VAR_0, VAR_1,
   "rtl8723e_dm_bt_sw_coex_all_off(), real Do\n");
 FUNC_1(VAR_2);
 VAR_3->btcoexist.sw_coexist_all_off = 1;
}
