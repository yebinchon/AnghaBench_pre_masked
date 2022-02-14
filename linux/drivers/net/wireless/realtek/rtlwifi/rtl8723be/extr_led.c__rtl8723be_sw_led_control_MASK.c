
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_led {int dummy; } ;
struct TYPE_2__ {struct rtl_led sw_led0; } ;
struct rtl_priv {TYPE_1__ ledctl; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum led_ctl_mode { ____Placeholder_led_ctl_mode } led_ctl_mode ;






 int FUNC_0 (struct ieee80211_hw*,struct rtl_led*) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtl_led*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0,
          enum led_ctl_mode VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_2(VAR_0);
 struct rtl_led *VAR_3 = &VAR_2->ledctl.sw_led0;

 switch (VAR_1) {
 case 128:
 case 131:
 case 130:
  FUNC_1(VAR_0, VAR_3);
  break;
 case 129:
  FUNC_0(VAR_0, VAR_3);
  break;
 default:
  break;
 }
}
