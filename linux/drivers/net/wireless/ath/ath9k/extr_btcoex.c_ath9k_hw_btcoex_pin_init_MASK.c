
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct ath_btcoex_hw {scalar_t__ scheme; void* btpriority_gpio; void* wlanactive_gpio; void* btactive_gpio; } ;
struct ath_hw {TYPE_1__* dev; struct ath_btcoex_hw btcoex_hw; } ;
struct ath9k_platform_data {void* bt_priority_pin; void* wlan_active_pin; void* bt_active_pin; } ;
struct TYPE_2__ {struct ath9k_platform_data* platform_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ath_hw *VAR_2, u8 VAR_3,
         u8 VAR_4, u8 VAR_5)
{
 struct ath_btcoex_hw *VAR_6 = &VAR_2->btcoex_hw;
 struct ath9k_platform_data *VAR_7 = VAR_2->dev->platform_data;

 if (VAR_6->scheme != VAR_0 &&
     VAR_6->scheme != VAR_1)
  return;


 if (VAR_7 && (VAR_7->bt_active_pin || VAR_7->bt_priority_pin ||
        VAR_7->wlan_active_pin)) {
  VAR_6->btactive_gpio = VAR_7->bt_active_pin;
  VAR_6->wlanactive_gpio = VAR_7->wlan_active_pin;
  VAR_6->btpriority_gpio = VAR_7->bt_priority_pin;
 } else {
  VAR_6->btactive_gpio = VAR_4;
  VAR_6->wlanactive_gpio = VAR_3;
  VAR_6->btpriority_gpio = VAR_5;
 }
}
