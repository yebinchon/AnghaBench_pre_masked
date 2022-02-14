
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_led {int dummy; } ;
struct TYPE_2__ {struct rtl_led sw_led0; } ;
struct rtl_priv {TYPE_1__ ledctl; } ;
struct rtl_hal {int hw_type; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum led_ctl_mode { ____Placeholder_led_ctl_mode } led_ctl_mode ;


 int VAR_0 ;




 int FUNC_0 (struct ieee80211_hw*,struct rtl_led*) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtl_led*) ;
 int FUNC_2 (struct ieee80211_hw*,struct rtl_led*) ;
 int FUNC_3 (struct ieee80211_hw*,struct rtl_led*) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_1,
          enum led_ctl_mode VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_5(VAR_1);
 struct rtl_led *VAR_4 = &VAR_3->ledctl.sw_led0;
 struct rtl_hal *VAR_5 = FUNC_4(FUNC_5(VAR_1));

 switch (VAR_2) {
 case 128:
 case 131:
 case 130:
  if (VAR_5->hw_type == VAR_0)
   FUNC_1(VAR_1, VAR_4);
  else
   FUNC_3(VAR_1, VAR_4);
  break;
 case 129:
  if (VAR_5->hw_type == VAR_0)
   FUNC_0(VAR_1, VAR_4);
  else
   FUNC_2(VAR_1, VAR_4);
  break;
 default:
  break;
 }
}
