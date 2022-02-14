
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long entry_max_undec_sm_pwdb; long entry_min_undec_sm_pwdb; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ opmode; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_1(VAR_3);
 struct rtl_mac *VAR_5 = FUNC_0(FUNC_1(VAR_3));
 long VAR_6 = 0, VAR_7 = 0xff;

 if (VAR_5->link_state != VAR_0)
  return;

 if (VAR_5->opmode == VAR_1 ||
     VAR_5->opmode == VAR_2) {

 }

 if (VAR_6 != 0)
  VAR_4->dm.entry_max_undec_sm_pwdb = VAR_6;
 else
  VAR_4->dm.entry_max_undec_sm_pwdb = 0;

 if (VAR_7 != 0xff)
  VAR_4->dm.entry_min_undec_sm_pwdb = VAR_7;
 else
  VAR_4->dm.entry_min_undec_sm_pwdb = 0;
}
