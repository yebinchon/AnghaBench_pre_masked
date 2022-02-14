
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (int *,char*,int *,int *,int *,struct backlight_properties*) ;
 int VAR_3 ;
 int FUNC_3 (struct backlight_device*) ;
 int FUNC_4 (struct backlight_properties*,int ,int) ;
 int FUNC_5 (struct platform_device*,struct backlight_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct backlight_properties VAR_5;
 struct backlight_device *VAR_6;

 FUNC_4(&VAR_5, 0, sizeof(struct backlight_properties));
 VAR_5.type = VAR_0;
 VAR_5.max_brightness = VAR_2;
 VAR_6 = FUNC_2(&VAR_4->dev, "hp680-bl", &VAR_4->dev,
     ((void*)0), &VAR_3, &VAR_5);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 FUNC_5(VAR_4, VAR_6);

 VAR_6->props.brightness = VAR_1;
 FUNC_3(VAR_6);

 return 0;
}
