
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_ps_ctl {scalar_t__ inactiveps; } ;
struct TYPE_2__ {scalar_t__ previous_state_h; scalar_t__ cstate_h; scalar_t__ previous_state; scalar_t__ cstate; int bt_coexistence; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_3 (struct rtl_priv*) ;

void FUNC_4(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_2(VAR_2);
 struct rtl_ps_ctl *VAR_4 = FUNC_3(FUNC_2(VAR_2));

 if (!VAR_3->btcoexist.bt_coexistence)
  return;

 if (VAR_4->inactiveps) {
  FUNC_0(VAR_3, VAR_0, VAR_1,
   "[BT][DM], Before enter IPS, turn off all Coexist DM\n");
  VAR_3->btcoexist.cstate = 0;
  VAR_3->btcoexist.previous_state = 0;
  VAR_3->btcoexist.cstate_h = 0;
  VAR_3->btcoexist.previous_state_h = 0;
  FUNC_1(VAR_2);
 }
}
