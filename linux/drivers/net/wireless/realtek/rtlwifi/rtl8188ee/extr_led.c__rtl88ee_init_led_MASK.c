
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_led {int ledpin; int ledon; struct ieee80211_hw* hw; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rtl_led_pin { ____Placeholder_rtl_led_pin } rtl_led_pin ;



__attribute__((used)) static void FUNC_0(struct ieee80211_hw *VAR_0,
         struct rtl_led *VAR_1, enum rtl_led_pin VAR_2)
{
 VAR_1->hw = VAR_0;
 VAR_1->ledpin = VAR_2;
 VAR_1->ledon = 0;
}
