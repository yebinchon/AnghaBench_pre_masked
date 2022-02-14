
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl_ps_ctl {scalar_t__ rfoff_reason; } ;
struct TYPE_4__ {scalar_t__ up_first_time; } ;
struct rtl_led {int dummy; } ;
struct TYPE_3__ {struct rtl_led sw_led0; } ;
struct rtl_priv {TYPE_2__ rtlhal; TYPE_1__ ledctl; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,struct rtl_led*) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtl_led*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_3 (struct rtl_priv*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_2(VAR_2);
 struct rtl_ps_ctl *VAR_4 = FUNC_3(FUNC_2(VAR_2));
 struct rtl_led *VAR_5 = &VAR_3->ledctl.sw_led0;

 if (VAR_3->rtlhal.up_first_time)
  return;

 if (VAR_4->rfoff_reason == VAR_1)
  FUNC_1(VAR_2, VAR_5);
 else if (VAR_4->rfoff_reason == VAR_0)
  FUNC_1(VAR_2, VAR_5);
 else
  FUNC_0(VAR_2, VAR_5);
}
