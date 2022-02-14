
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* name; int max_brightness; int brightness_get; int brightness_set; } ;
struct eeepc_laptop {int led_workqueue; TYPE_2__ tpd_led; TYPE_1__* platform_device; int tpd_led_work; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct eeepc_laptop*,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct eeepc_laptop *VAR_6)
{
 int VAR_7;

 if (FUNC_3(VAR_6, VAR_0) == -VAR_1)
  return 0;

 VAR_6->led_workqueue = FUNC_1("led_workqueue");
 if (!VAR_6->led_workqueue)
  return -VAR_2;
 FUNC_0(&VAR_6->tpd_led_work, VAR_5);

 VAR_6->tpd_led.name = "eeepc::touchpad";
 VAR_6->tpd_led.brightness_set = VAR_4;
 if (FUNC_3(VAR_6, VAR_0) >= 0)
  VAR_6->tpd_led.brightness_get = VAR_3;
 VAR_6->tpd_led.max_brightness = 1;

 VAR_7 = FUNC_4(&VAR_6->platform_device->dev,
       &VAR_6->tpd_led);
 if (VAR_7) {
  FUNC_2(VAR_6->led_workqueue);
  return VAR_7;
 }

 return 0;
}
