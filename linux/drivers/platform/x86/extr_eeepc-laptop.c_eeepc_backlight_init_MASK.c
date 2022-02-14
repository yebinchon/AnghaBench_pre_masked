
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eeepc_laptop {struct backlight_device* backlight_device; TYPE_1__* platform_device; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_4__ {int power; int brightness; } ;
struct backlight_device {TYPE_2__ props; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (int ,int *,struct eeepc_laptop*,int *,struct backlight_properties*) ;
 int FUNC_3 (struct backlight_device*) ;
 int VAR_3 ;
 int FUNC_4 (struct backlight_properties*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_7(struct eeepc_laptop *VAR_4)
{
 struct backlight_properties VAR_5;
 struct backlight_device *VAR_6;

 FUNC_4(&VAR_5, 0, sizeof(struct backlight_properties));
 VAR_5.type = VAR_0;
 VAR_5.max_brightness = 15;
 VAR_6 = FUNC_2(VAR_1,
           &VAR_4->platform_device->dev, VAR_4,
           &VAR_3, &VAR_5);
 if (FUNC_0(VAR_6)) {
  FUNC_5("Could not register eeepc backlight device\n");
  VAR_4->backlight_device = ((void*)0);
  return FUNC_1(VAR_6);
 }
 VAR_4->backlight_device = VAR_6;
 VAR_6->props.brightness = FUNC_6(VAR_6);
 VAR_6->props.power = VAR_2;
 FUNC_3(VAR_6);
 return 0;
}
