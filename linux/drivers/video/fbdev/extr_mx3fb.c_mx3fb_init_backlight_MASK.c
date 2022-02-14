
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mx3fb_data {struct backlight_device* bl; int dev; int backlight_level; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_2__ {int brightness; void* fb_blank; void* power; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (char*,int ,struct mx3fb_data*,int *,struct backlight_properties*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct backlight_properties*,int ,int) ;
 int FUNC_5 (struct backlight_device*) ;
 int VAR_2 ;
 int FUNC_6 (struct mx3fb_data*,int ) ;

__attribute__((used)) static void FUNC_7(struct mx3fb_data *VAR_3)
{
 struct backlight_properties VAR_4;
 struct backlight_device *VAR_5;

 if (VAR_3->bl)
  return;

 FUNC_4(&VAR_4, 0, sizeof(struct backlight_properties));
 VAR_4.max_brightness = 0xff;
 VAR_4.type = VAR_0;
 FUNC_6(VAR_3, VAR_3->backlight_level);

 VAR_5 = FUNC_2("mx3fb-bl", VAR_3->dev, VAR_3,
           &VAR_2, &VAR_4);
 if (FUNC_0(VAR_5)) {
  FUNC_3(VAR_3->dev, "error %ld on backlight register\n",
    FUNC_1(VAR_5));
  return;
 }

 VAR_3->bl = VAR_5;
 VAR_5->props.power = VAR_1;
 VAR_5->props.fb_blank = VAR_1;
 VAR_5->props.brightness = FUNC_5(VAR_5);
}
