
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct backlight_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_1 ;
 struct backlight_device* FUNC_2 (char*,int *,int *,int *,struct backlight_properties*) ;
 int FUNC_3 (struct backlight_properties*,int ,int) ;
 int FUNC_4 (struct platform_device*,struct backlight_device*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{

 struct backlight_properties VAR_4;
 struct backlight_device *VAR_5;

 FUNC_3(&VAR_4, 0, sizeof(struct backlight_properties));
 VAR_4.type = VAR_0;
 VAR_4.max_brightness = VAR_1;
 VAR_5 = FUNC_2("samsung", &VAR_3->dev, ((void*)0),
           &VAR_2, &VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_4(VAR_3, VAR_5);

 return 0;
}
