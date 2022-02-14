
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3639_platform_data {int max_brt_led; int (* pwm_set_intensity ) (int,int ) ;scalar_t__ pin_pwm; } ;
struct lm3639_chip_data {int dev; int regmap; struct lm3639_platform_data* pdata; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lm3639_chip_data* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct backlight_device *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 struct lm3639_chip_data *VAR_7 = FUNC_0(VAR_4);
 struct lm3639_platform_data *VAR_8 = VAR_7->pdata;

 VAR_5 = FUNC_3(VAR_7->regmap, VAR_3, &VAR_6);
 if (VAR_5 < 0)
  goto out;

 if (VAR_6 != 0)
  FUNC_2(VAR_7->dev, "last flag is 0x%x\n", VAR_6);


 if (VAR_8->pin_pwm) {
  if (VAR_8->pwm_set_intensity)
   VAR_8->pwm_set_intensity(VAR_4->props.brightness,
       VAR_8->max_brt_led);
  else
   FUNC_1(VAR_7->dev,
    "No pwm control func. in plat-data\n");
  return VAR_4->props.brightness;
 }


 VAR_5 = FUNC_5(VAR_7->regmap, VAR_1, VAR_4->props.brightness);
 if (VAR_5 < 0)
  goto out;
 VAR_5 = FUNC_5(VAR_7->regmap, VAR_0, VAR_4->props.brightness);
 if (VAR_5 < 0)
  goto out;

 if (!VAR_4->props.brightness)
  VAR_5 = FUNC_4(VAR_7->regmap, VAR_2, 0x01, 0x00);
 else
  VAR_5 = FUNC_4(VAR_7->regmap, VAR_2, 0x01, 0x01);
 if (VAR_5 < 0)
  goto out;

 return VAR_4->props.brightness;
out:
 FUNC_1(VAR_7->dev, "i2c failed to access registers\n");
 return VAR_4->props.brightness;
}
