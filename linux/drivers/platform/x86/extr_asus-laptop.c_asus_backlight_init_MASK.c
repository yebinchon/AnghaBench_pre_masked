
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_4__ {int power; int brightness; } ;
struct backlight_device {TYPE_2__ props; } ;
struct asus_laptop {struct backlight_device* backlight_device; TYPE_1__* platform_device; int handle; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct backlight_device*) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct backlight_device*) ;
 int VAR_5 ;
 struct backlight_device* FUNC_4 (int ,int *,struct asus_laptop*,int *,struct backlight_properties*) ;
 int FUNC_5 (struct backlight_device*) ;
 int FUNC_6 (struct backlight_properties*,int ,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct asus_laptop *VAR_6)
{
 struct backlight_device *VAR_7;
 struct backlight_properties VAR_8;

 if (FUNC_2(VAR_6->handle, VAR_3, ((void*)0)) ||
     FUNC_2(VAR_6->handle, VAR_4, ((void*)0)))
  return 0;

 FUNC_6(&VAR_8, 0, sizeof(struct backlight_properties));
 VAR_8.max_brightness = 15;
 VAR_8.type = VAR_1;

 VAR_7 = FUNC_4(VAR_0,
           &VAR_6->platform_device->dev, VAR_6,
           &VAR_5, &VAR_8);
 if (FUNC_0(VAR_7)) {
  FUNC_7("Could not register asus backlight device\n");
  VAR_6->backlight_device = ((void*)0);
  return FUNC_1(VAR_7);
 }

 VAR_6->backlight_device = VAR_7;
 VAR_7->props.brightness = FUNC_3(VAR_7);
 VAR_7->props.power = VAR_2;
 FUNC_5(VAR_7);
 return 0;
}
