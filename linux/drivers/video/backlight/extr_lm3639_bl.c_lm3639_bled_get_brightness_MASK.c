
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3639_platform_data {int (* pwm_get_intensity ) () ;scalar_t__ pin_pwm; } ;
struct lm3639_chip_data {int dev; int regmap; struct lm3639_platform_data* pdata; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lm3639_chip_data* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;
 struct lm3639_chip_data *VAR_6 = FUNC_0(VAR_3);
 struct lm3639_platform_data *VAR_7 = VAR_6->pdata;

 if (VAR_7->pin_pwm) {
  if (VAR_7->pwm_get_intensity)
   VAR_3->props.brightness = VAR_7->pwm_get_intensity();
  else
   FUNC_1(VAR_6->dev,
    "No pwm control func. in plat-data\n");
  return VAR_3->props.brightness;
 }

 VAR_4 = FUNC_2(VAR_6->regmap, VAR_0, &VAR_5);
 if (VAR_4 < 0)
  goto out;
 if (VAR_5 & 0x10)
  VAR_4 = FUNC_2(VAR_6->regmap, VAR_2, &VAR_5);
 else
  VAR_4 = FUNC_2(VAR_6->regmap, VAR_1, &VAR_5);
 if (VAR_4 < 0)
  goto out;
 VAR_3->props.brightness = VAR_5;

 return VAR_3->props.brightness;
out:
 FUNC_1(VAR_6->dev, "i2c failed to access register\n");
 return VAR_3->props.brightness;
}
