
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {char* name; int max_brightness; char* default_trigger; int brightness_get; int brightness_set; int flags; } ;
struct asus_wmi {int kbd_led_wk; TYPE_4__ lightbar_led; TYPE_3__* platform_device; int lightbar_led_work; TYPE_4__ wlan_led; int wlan_led_work; TYPE_2__* driver; TYPE_4__ kbd_led; TYPE_4__ tpd_led; int tpd_led_work; int led_workqueue; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {TYPE_1__* quirks; } ;
struct TYPE_5__ {scalar_t__ wapf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct asus_wmi*,int ) ;
 int FUNC_2 (struct asus_wmi*) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int FUNC_4 (struct asus_wmi*,int*,int *) ;
 int VAR_6 ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (struct asus_wmi*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (struct asus_wmi*) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_8(struct asus_wmi *VAR_16)
{
 int VAR_17 = 0, VAR_18;

 VAR_16->led_workqueue = FUNC_3("led_workqueue");
 if (!VAR_16->led_workqueue)
  return -VAR_2;

 if (FUNC_6(VAR_16) >= 0) {
  FUNC_0(&VAR_16->tpd_led_work, VAR_12);

  VAR_16->tpd_led.name = "asus::touchpad";
  VAR_16->tpd_led.brightness_set = VAR_11;
  VAR_16->tpd_led.brightness_get = VAR_10;
  VAR_16->tpd_led.max_brightness = 1;

  VAR_17 = FUNC_5(&VAR_16->platform_device->dev,
        &VAR_16->tpd_led);
  if (VAR_17)
   goto error;
 }

 if (!FUNC_4(VAR_16, &VAR_18, ((void*)0))) {
  VAR_16->kbd_led_wk = VAR_18;
  VAR_16->kbd_led.name = "asus::kbd_backlight";
  VAR_16->kbd_led.flags = VAR_3;
  VAR_16->kbd_led.brightness_set = VAR_6;
  VAR_16->kbd_led.brightness_get = VAR_5;
  VAR_16->kbd_led.max_brightness = 3;

  VAR_17 = FUNC_5(&VAR_16->platform_device->dev,
        &VAR_16->kbd_led);
  if (VAR_17)
   goto error;
 }

 if (FUNC_1(VAR_16, VAR_1)
   && (VAR_16->driver->quirks->wapf > 0)) {
  FUNC_0(&VAR_16->wlan_led_work, VAR_15);

  VAR_16->wlan_led.name = "asus::wlan";
  VAR_16->wlan_led.brightness_set = VAR_14;
  if (!FUNC_7(VAR_16))
   VAR_16->wlan_led.brightness_get = VAR_13;
  VAR_16->wlan_led.flags = VAR_4;
  VAR_16->wlan_led.max_brightness = 1;
  VAR_16->wlan_led.default_trigger = "asus-wlan";

  VAR_17 = FUNC_5(&VAR_16->platform_device->dev,
        &VAR_16->wlan_led);
  if (VAR_17)
   goto error;
 }

 if (FUNC_1(VAR_16, VAR_0)) {
  FUNC_0(&VAR_16->lightbar_led_work, VAR_9);

  VAR_16->lightbar_led.name = "asus::lightbar";
  VAR_16->lightbar_led.brightness_set = VAR_8;
  VAR_16->lightbar_led.brightness_get = VAR_7;
  VAR_16->lightbar_led.max_brightness = 1;

  VAR_17 = FUNC_5(&VAR_16->platform_device->dev,
        &VAR_16->lightbar_led);
 }

error:
 if (VAR_17)
  FUNC_2(VAR_16);

 return VAR_17;
}
