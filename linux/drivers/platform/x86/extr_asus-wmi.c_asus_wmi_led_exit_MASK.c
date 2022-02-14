
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct asus_wmi {scalar_t__ led_workqueue; TYPE_1__ lightbar_led; TYPE_1__ wlan_led; TYPE_1__ tpd_led; TYPE_1__ kbd_led; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct asus_wmi *VAR_0)
{
 if (!FUNC_0(VAR_0->kbd_led.dev))
  FUNC_2(&VAR_0->kbd_led);
 if (!FUNC_0(VAR_0->tpd_led.dev))
  FUNC_2(&VAR_0->tpd_led);
 if (!FUNC_0(VAR_0->wlan_led.dev))
  FUNC_2(&VAR_0->wlan_led);
 if (!FUNC_0(VAR_0->lightbar_led.dev))
  FUNC_2(&VAR_0->lightbar_led);
 if (VAR_0->led_workqueue)
  FUNC_1(VAR_0->led_workqueue);
}
