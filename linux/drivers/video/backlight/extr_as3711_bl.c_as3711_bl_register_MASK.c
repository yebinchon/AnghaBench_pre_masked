
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct backlight_properties {unsigned int max_brightness; int type; } ;
struct TYPE_2__ {unsigned int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct as3711_bl_data {scalar_t__ type; struct backlight_device* bl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (int *,char*) ;
 struct backlight_device* FUNC_4 (int *,char*,int *,struct as3711_bl_data*,int *,struct backlight_properties*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3,
         unsigned int VAR_4, struct as3711_bl_data *VAR_5)
{
 struct backlight_properties VAR_6 = {.type = VAR_1,};
 struct backlight_device *VAR_7;


 VAR_6.max_brightness = VAR_4;

 VAR_7 = FUNC_4(&VAR_3->dev,
           VAR_5->type == VAR_0 ?
           "as3711-su1" : "as3711-su2",
           &VAR_3->dev, VAR_5,
           &VAR_2, &VAR_6);
 if (FUNC_0(VAR_7)) {
  FUNC_3(&VAR_3->dev, "failed to register backlight\n");
  return FUNC_1(VAR_7);
 }

 VAR_7->props.brightness = VAR_6.max_brightness;

 FUNC_2(VAR_7);

 VAR_5->bl = VAR_7;

 return 0;
}
