
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {int dev; } ;
struct TYPE_17__ {TYPE_9__ led; } ;
struct TYPE_16__ {TYPE_9__ led; } ;
struct TYPE_15__ {TYPE_9__ led; } ;
struct TYPE_14__ {TYPE_9__ led; } ;
struct TYPE_13__ {TYPE_9__ led; } ;
struct TYPE_12__ {TYPE_9__ led; } ;
struct TYPE_11__ {TYPE_9__ led; } ;
struct TYPE_10__ {TYPE_9__ led; } ;
struct asus_laptop {int * led_workqueue; TYPE_8__ kled; TYPE_7__ gled; TYPE_6__ rled; TYPE_5__ pled; TYPE_4__ tled; TYPE_3__ mled; TYPE_2__ bled; TYPE_1__ wled; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_9__*) ;

__attribute__((used)) static void FUNC_3(struct asus_laptop *VAR_0)
{
 if (!FUNC_0(VAR_0->wled.led.dev))
  FUNC_2(&VAR_0->wled.led);
 if (!FUNC_0(VAR_0->bled.led.dev))
  FUNC_2(&VAR_0->bled.led);
 if (!FUNC_0(VAR_0->mled.led.dev))
  FUNC_2(&VAR_0->mled.led);
 if (!FUNC_0(VAR_0->tled.led.dev))
  FUNC_2(&VAR_0->tled.led);
 if (!FUNC_0(VAR_0->pled.led.dev))
  FUNC_2(&VAR_0->pled.led);
 if (!FUNC_0(VAR_0->rled.led.dev))
  FUNC_2(&VAR_0->rled.led);
 if (!FUNC_0(VAR_0->gled.led.dev))
  FUNC_2(&VAR_0->gled.led);
 if (!FUNC_0(VAR_0->kled.led.dev))
  FUNC_2(&VAR_0->kled.led);
 if (VAR_0->led_workqueue) {
  FUNC_1(VAR_0->led_workqueue);
  VAR_0->led_workqueue = ((void*)0);
 }
}
