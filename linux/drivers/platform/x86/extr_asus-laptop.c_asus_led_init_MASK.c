
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {char* name; int max_brightness; int brightness_get; int brightness_set; } ;
struct asus_led {int work; struct asus_laptop* asus; struct led_classdev led; } ;
struct asus_laptop {scalar_t__ wled_type; scalar_t__ bled_type; TYPE_1__* platform_device; struct asus_led kled; int handle; int gled; int pled; int rled; int tled; int mled; int bled; int wled; int led_workqueue; scalar_t__ is_pega_lucid; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct asus_laptop*) ;
 int FUNC_3 (struct asus_laptop*,int *,char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,struct led_classdev*) ;

__attribute__((used)) static int FUNC_6(struct asus_laptop *VAR_14)
{
 int VAR_15 = 0;





 if (VAR_14->is_pega_lucid)
  return 0;







 VAR_14->led_workqueue = FUNC_4("led_workqueue");
 if (!VAR_14->led_workqueue)
  return -VAR_0;

 if (VAR_14->wled_type == VAR_10)
  VAR_15 = FUNC_3(VAR_14, &VAR_14->wled, "asus::wlan",
          VAR_9);
 if (VAR_15)
  goto error;
 if (VAR_14->bled_type == VAR_10)
  VAR_15 = FUNC_3(VAR_14, &VAR_14->bled, "asus::bluetooth",
          VAR_1);
 if (VAR_15)
  goto error;
 VAR_15 = FUNC_3(VAR_14, &VAR_14->mled, "asus::mail", VAR_5);
 if (VAR_15)
  goto error;
 VAR_15 = FUNC_3(VAR_14, &VAR_14->tled, "asus::touchpad", VAR_8);
 if (VAR_15)
  goto error;
 VAR_15 = FUNC_3(VAR_14, &VAR_14->rled, "asus::record", VAR_7);
 if (VAR_15)
  goto error;
 VAR_15 = FUNC_3(VAR_14, &VAR_14->pled, "asus::phone", VAR_6);
 if (VAR_15)
  goto error;
 VAR_15 = FUNC_3(VAR_14, &VAR_14->gled, "asus::gaming", VAR_2);
 if (VAR_15)
  goto error;
 if (!FUNC_1(VAR_14->handle, VAR_4, ((void*)0)) &&
     !FUNC_1(VAR_14->handle, VAR_3, ((void*)0))) {
  struct asus_led *VAR_16 = &VAR_14->kled;
  struct led_classdev *VAR_17 = &VAR_16->led;

  VAR_16->asus = VAR_14;

  FUNC_0(&VAR_16->work, VAR_13);
  VAR_17->name = "asus::kbd_backlight";
  VAR_17->brightness_set = VAR_12;
  VAR_17->brightness_get = VAR_11;
  VAR_17->max_brightness = 3;
  VAR_15 = FUNC_5(&VAR_14->platform_device->dev, VAR_17);
 }
error:
 if (VAR_15)
  FUNC_2(VAR_14);
 return VAR_15;
}
