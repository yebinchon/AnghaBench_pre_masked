
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_3__ {int power; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int VAR_3 ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (int ,int *,int *,int *,struct backlight_properties*) ;
 int FUNC_3 (struct backlight_device*) ;
 int FUNC_4 (struct backlight_device*) ;
 int FUNC_5 (struct backlight_properties*,int ,int) ;
 struct backlight_device* VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(void)
{
 struct backlight_device *VAR_7;
 struct backlight_properties VAR_8;

 FUNC_5(&VAR_8, 0, sizeof(struct backlight_properties));
 VAR_8.type = VAR_0;
 VAR_8.max_brightness = VAR_3;
 VAR_7 = FUNC_2(VAR_1,
           &VAR_6->dev, ((void*)0),
           &VAR_5,
           &VAR_8);

 if (FUNC_0(VAR_7)) {
  VAR_4 = ((void*)0);
  FUNC_6("Unable to register backlight device\n");
  return FUNC_1(VAR_7);
 }

 VAR_4 = VAR_7;

 VAR_7->props.brightness = FUNC_4(VAR_7);
 VAR_7->props.power = VAR_2;
 FUNC_3(VAR_7);

 return 0;
}
