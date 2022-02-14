
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_2__ {int brightness; int power; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;
 struct backlight_device* FUNC_4 (int *,int ,int *,int *,int *,struct backlight_properties*) ;
 int VAR_5 ;
 int FUNC_5 (struct backlight_device*) ;
 int FUNC_6 (struct backlight_properties*,int ,int) ;
 int FUNC_7 (struct platform_device*,struct backlight_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct backlight_properties VAR_7;
 int VAR_8;
 struct backlight_device *VAR_9;

 FUNC_6(&VAR_7, 0, sizeof(struct backlight_properties));
 VAR_7.type = VAR_0;
 VAR_7.max_brightness = VAR_2;

 VAR_9 = FUNC_4(&VAR_6->dev, VAR_4,
     &VAR_6->dev, ((void*)0), &VAR_5,
     &VAR_7);
 if (FUNC_0(VAR_9)) {
  VAR_8 = FUNC_1(VAR_9);
  FUNC_2(&VAR_6->dev, "failed to register device, err=%x\n", VAR_8);
  return VAR_8;
 }

 VAR_9->props.power = VAR_3;
 VAR_9->props.brightness = VAR_1;





 FUNC_5(VAR_9);

 FUNC_7(VAR_6, VAR_9);
 FUNC_3(&VAR_6->dev, "HP Jornada 700 series backlight driver\n");

 return 0;
}
