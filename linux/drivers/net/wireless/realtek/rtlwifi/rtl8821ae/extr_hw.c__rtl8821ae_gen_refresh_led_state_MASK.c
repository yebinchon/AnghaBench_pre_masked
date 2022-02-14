
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl_ps_ctl {scalar_t__ rfoff_reason; } ;
struct TYPE_3__ {scalar_t__ up_first_time; } ;
struct rtl_led {int dummy; } ;
struct TYPE_4__ {struct rtl_led sw_led0; } ;
struct rtl_priv {TYPE_1__ rtlhal; TYPE_2__ ledctl; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee80211_hw*,struct rtl_led*) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtl_led*) ;
 int FUNC_2 (struct ieee80211_hw*,struct rtl_led*) ;
 int FUNC_3 (struct ieee80211_hw*,struct rtl_led*) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_6 (struct rtl_priv*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_5(VAR_3);
 struct rtl_ps_ctl *VAR_5 = FUNC_6(FUNC_5(VAR_3));
 struct rtl_led *VAR_6 = &VAR_4->ledctl.sw_led0;
 struct rtl_hal *VAR_7 = FUNC_4(FUNC_5(VAR_3));

 if (VAR_4->rtlhal.up_first_time)
  return;

 if (VAR_5->rfoff_reason == VAR_2)
  if (VAR_7->hw_type == VAR_0)
   FUNC_1(VAR_3, VAR_6);
  else
   FUNC_3(VAR_3, VAR_6);
 else if (VAR_5->rfoff_reason == VAR_1)
  if (VAR_7->hw_type == VAR_0)
   FUNC_1(VAR_3, VAR_6);
  else
   FUNC_3(VAR_3, VAR_6);
 else
  if (VAR_7->hw_type == VAR_0)
   FUNC_0(VAR_3, VAR_6);
  else
   FUNC_2(VAR_3, VAR_6);
}
