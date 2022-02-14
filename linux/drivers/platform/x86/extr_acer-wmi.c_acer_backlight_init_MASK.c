
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_2__ {int brightness; int power; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* VAR_2 ;
 int VAR_3 ;
 struct backlight_device* FUNC_2 (char*,struct device*,int *,int *,struct backlight_properties*) ;
 int FUNC_3 (struct backlight_device*) ;
 int VAR_4 ;
 int FUNC_4 (struct backlight_properties*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_5)
{
 struct backlight_properties VAR_6;
 struct backlight_device *VAR_7;

 FUNC_4(&VAR_6, 0, sizeof(struct backlight_properties));
 VAR_6.type = VAR_0;
 VAR_6.max_brightness = VAR_4;
 VAR_7 = FUNC_2("acer-wmi", VAR_5, ((void*)0), &VAR_3,
           &VAR_6);
 if (FUNC_0(VAR_7)) {
  FUNC_5("Could not register Acer backlight device\n");
  VAR_2 = ((void*)0);
  return FUNC_1(VAR_7);
 }

 VAR_2 = VAR_7;

 VAR_7->props.power = VAR_1;
 VAR_7->props.brightness = FUNC_6(VAR_7);
 FUNC_3(VAR_7);
 return 0;
}
