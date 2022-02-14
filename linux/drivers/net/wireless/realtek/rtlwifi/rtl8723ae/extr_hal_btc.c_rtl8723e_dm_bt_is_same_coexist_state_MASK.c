
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ previous_state; scalar_t__ cstate; scalar_t__ previous_state_h; scalar_t__ cstate_h; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_2(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_1(VAR_2);

 if ((VAR_3->btcoexist.previous_state ==
      VAR_3->btcoexist.cstate) &&
     (VAR_3->btcoexist.previous_state_h ==
      VAR_3->btcoexist.cstate_h)) {
  FUNC_0(VAR_3, VAR_0, VAR_1,
    "[DM][BT], Coexist state do not chang!!\n");
  return 1;
 } else {
  FUNC_0(VAR_3, VAR_0, VAR_1,
    "[DM][BT], Coexist state changed!!\n");
  return 0;
 }
}
