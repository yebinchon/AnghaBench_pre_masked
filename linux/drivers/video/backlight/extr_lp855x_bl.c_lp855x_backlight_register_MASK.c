
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp855x_platform_data {scalar_t__ initial_brightness; int name; } ;
struct lp855x {struct backlight_device* bl; int dev; struct lp855x_platform_data* pdata; } ;
struct backlight_properties {scalar_t__ max_brightness; scalar_t__ brightness; int type; } ;
struct backlight_device {int dummy; } ;
typedef int props ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (int ,char const*,int ,struct lp855x*,int *,struct backlight_properties*) ;
 int VAR_3 ;
 int FUNC_3 (struct backlight_properties*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct lp855x *VAR_4)
{
 struct backlight_device *VAR_5;
 struct backlight_properties VAR_6;
 struct lp855x_platform_data *VAR_7 = VAR_4->pdata;
 const char *VAR_8 = VAR_7->name ? : VAR_1;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.type = VAR_0;
 VAR_6.max_brightness = VAR_2;

 if (VAR_7->initial_brightness > VAR_6.max_brightness)
  VAR_7->initial_brightness = VAR_6.max_brightness;

 VAR_6.brightness = VAR_7->initial_brightness;

 VAR_5 = FUNC_2(VAR_4->dev, VAR_8, VAR_4->dev, VAR_4,
           &VAR_3, &VAR_6);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_4->bl = VAR_5;

 return 0;
}
