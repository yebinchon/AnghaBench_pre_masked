
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_8__ {int power; int brightness; } ;
struct backlight_device {TYPE_4__ props; } ;
struct asus_wmi {TYPE_3__* driver; struct backlight_device* backlight_device; TYPE_1__* platform_device; } ;
struct TYPE_7__ {int panel_power; int brightness; TYPE_2__* quirks; int name; } ;
struct TYPE_6__ {scalar_t__ store_backlight_power; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_3 ;
 struct backlight_device* FUNC_2 (int ,int *,struct asus_wmi*,int *,struct backlight_properties*) ;
 int FUNC_3 (struct backlight_device*) ;
 int FUNC_4 (struct backlight_properties*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct asus_wmi*) ;
 int FUNC_7 (struct backlight_device*) ;
 int FUNC_8 (struct asus_wmi*) ;

__attribute__((used)) static int FUNC_9(struct asus_wmi *VAR_4)
{
 struct backlight_device *VAR_5;
 struct backlight_properties VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_8(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = FUNC_6(VAR_4);
 if (VAR_8 == -VAR_1)
  VAR_8 = VAR_2;
 else if (VAR_8 < 0)
  return VAR_8;

 FUNC_4(&VAR_6, 0, sizeof(struct backlight_properties));
 VAR_6.type = VAR_0;
 VAR_6.max_brightness = VAR_7;
 VAR_5 = FUNC_2(VAR_4->driver->name,
           &VAR_4->platform_device->dev, VAR_4,
           &VAR_3, &VAR_6);
 if (FUNC_0(VAR_5)) {
  FUNC_5("Could not register backlight device\n");
  return FUNC_1(VAR_5);
 }

 VAR_4->backlight_device = VAR_5;

 if (VAR_4->driver->quirks->store_backlight_power)
  VAR_4->driver->panel_power = VAR_8;

 VAR_5->props.brightness = FUNC_7(VAR_5);
 VAR_5->props.power = VAR_8;
 FUNC_3(VAR_5);

 VAR_4->driver->brightness = VAR_5->props.brightness;

 return 0;
}
