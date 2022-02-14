
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gpio; } ;
struct TYPE_4__ {scalar_t__ dev; } ;
struct brcms_info {TYPE_1__ radio_led; TYPE_2__ led_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(struct brcms_info *VAR_0)
{
 if (VAR_0->led_dev.dev)
  FUNC_1(&VAR_0->led_dev);
 if (VAR_0->radio_led.gpio != -1)
  FUNC_0(VAR_0->radio_led.gpio);
}
