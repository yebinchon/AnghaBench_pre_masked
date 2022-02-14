
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct em28xx_led {scalar_t__ role; } ;
struct TYPE_2__ {struct em28xx_led const* leds; } ;
struct em28xx {TYPE_1__ board; } ;
typedef enum em28xx_led_role { ____Placeholder_em28xx_led_role } em28xx_led_role ;


 scalar_t__ VAR_0 ;

const struct em28xx_led *FUNC_0(struct em28xx *VAR_1,
      enum em28xx_led_role VAR_2)
{
 if (VAR_1->board.leds) {
  u8 VAR_3 = 0;

  while (VAR_1->board.leds[VAR_3].role >= 0 &&
         VAR_1->board.leds[VAR_3].role < VAR_0) {
   if (VAR_1->board.leds[VAR_3].role == VAR_2)
    return &VAR_1->board.leds[VAR_3];
   VAR_3++;
  }
 }
 return ((void*)0);
}
