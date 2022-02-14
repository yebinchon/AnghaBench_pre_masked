
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p54_common {int led_work; TYPE_1__* leds; } ;
struct TYPE_2__ {int registered; int led_dev; scalar_t__ toggled; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct p54_common *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->leds); VAR_1++) {
  if (VAR_0->leds[VAR_1].registered) {
   VAR_0->leds[VAR_1].registered = 0;
   VAR_0->leds[VAR_1].toggled = 0;
   FUNC_2(&VAR_0->leds[VAR_1].led_dev);
  }
 }

 FUNC_1(&VAR_0->led_work);
}
