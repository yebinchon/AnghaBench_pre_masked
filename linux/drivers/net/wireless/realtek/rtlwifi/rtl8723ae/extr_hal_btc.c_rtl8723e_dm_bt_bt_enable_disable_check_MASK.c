
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bt_active_zero_cnt; int cur_bt_disabled; int pre_bt_disabled; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int high_priority_tx; int high_priority_rx; int low_priority_tx; int low_priority_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 TYPE_2__ VAR_2 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_1(VAR_3);
 bool VAR_5 = 1;

 if (VAR_2 == 0 &&
     VAR_2 == 0 &&
     VAR_2 == 0 &&
     VAR_2 == 0) {
  VAR_5 = 0;
 }
 if (VAR_2 == 0xeaea &&
     VAR_2 == 0xeaea &&
     VAR_2 == 0xeaea &&
     VAR_2 == 0xeaea) {
  VAR_5 = 0;
 }
 if (VAR_2 == 0xffff &&
     VAR_2 == 0xffff &&
     VAR_2 == 0xffff &&
     VAR_2 == 0xffff) {
  VAR_5 = 0;
 }
 if (VAR_5) {
  VAR_4->btcoexist.bt_active_zero_cnt = 0;
  VAR_4->btcoexist.cur_bt_disabled = 0;
  FUNC_0(VAR_4, VAR_0, VAR_1,
    "8723A BT is enabled !!\n");
 } else {
  VAR_4->btcoexist.bt_active_zero_cnt++;
  FUNC_0(VAR_4, VAR_0, VAR_1,
    "8723A bt all counters=0, %d times!!\n",
    VAR_4->btcoexist.bt_active_zero_cnt);
  if (VAR_4->btcoexist.bt_active_zero_cnt >= 2) {
   VAR_4->btcoexist.cur_bt_disabled = 1;
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "8723A BT is disabled !!\n");
  }
 }
 if (VAR_4->btcoexist.pre_bt_disabled !=
  VAR_4->btcoexist.cur_bt_disabled) {
  FUNC_0(VAR_4, VAR_0,
    VAR_1, "8723A BT is from %s to %s!!\n",
    (VAR_4->btcoexist.pre_bt_disabled ?
    "disabled" : "enabled"),
    (VAR_4->btcoexist.cur_bt_disabled ?
    "disabled" : "enabled"));
  VAR_4->btcoexist.pre_bt_disabled
   = VAR_4->btcoexist.cur_bt_disabled;
 }
}
