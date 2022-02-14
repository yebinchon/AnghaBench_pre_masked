
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int init_set; int bt_coexistence; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int) ;

void FUNC_5(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_3(VAR_3);
 u8 VAR_5 = 0;
 if (!VAR_4->btcoexist.bt_coexistence) {
  FUNC_0(VAR_4, VAR_0, VAR_2,
    "[DM]{BT], BT not exist!!\n");
  return;
 }

 if (!VAR_4->btcoexist.init_set) {
  FUNC_0(VAR_4, VAR_0, VAR_2,
    "[DM][BT], rtl8723e_dm_bt_coexist()\n");
  FUNC_2(VAR_3);
 }

 VAR_5 = FUNC_4(VAR_4, 0x40);
 FUNC_0(VAR_4, VAR_0, VAR_2,
   "[DM][BT], 0x40 is 0x%x\n", VAR_5);
 FUNC_0(VAR_4, VAR_0, VAR_1,
   "[DM][BT], bt_dm_coexist start\n");
 FUNC_1(VAR_3);
}
