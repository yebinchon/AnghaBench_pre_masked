
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {scalar_t__ led_toggle_counter; scalar_t__ blink_led; scalar_t__ card_exist; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rtsx_chip*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct rtsx_chip *VAR_2)
{
 if (VAR_2->card_exist && VAR_2->blink_led) {
  if (VAR_2->led_toggle_counter < VAR_1) {
   VAR_2->led_toggle_counter++;
  } else {
   VAR_2->led_toggle_counter = 0;
   FUNC_0(VAR_2, VAR_0);
  }
 }
}
