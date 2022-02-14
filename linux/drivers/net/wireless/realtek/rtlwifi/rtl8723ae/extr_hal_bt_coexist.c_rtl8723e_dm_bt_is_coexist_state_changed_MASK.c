
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ previous_state; scalar_t__ cstate; scalar_t__ previous_state_h; scalar_t__ cstate_h; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

bool FUNC_1(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_0(VAR_0);

 if ((VAR_1->btcoexist.previous_state == VAR_1->btcoexist.cstate) &&
     (VAR_1->btcoexist.previous_state_h ==
      VAR_1->btcoexist.cstate_h))
  return 0;
 return 1;
}
