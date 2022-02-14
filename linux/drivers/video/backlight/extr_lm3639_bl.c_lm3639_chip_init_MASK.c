
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3639_platform_data {unsigned int pin_pwm; int pin_strobe; int pin_tx; unsigned int fled_pins; unsigned int bled_pins; int init_brt_led; } ;
struct lm3639_chip_data {int dev; int regmap; struct lm3639_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int,unsigned int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct lm3639_chip_data *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 struct lm3639_platform_data *VAR_8 = VAR_5->pdata;


 VAR_6 =
     FUNC_1(VAR_5->regmap, VAR_0, 0x08,
          VAR_8->pin_pwm);
 if (VAR_6 < 0)
  goto out;

 VAR_7 = (VAR_8->pin_pwm & 0x40) | VAR_8->pin_strobe | VAR_8->pin_tx;
 VAR_6 = FUNC_1(VAR_5->regmap, VAR_4, 0x7C, VAR_7);
 if (VAR_6 < 0)
  goto out;


 VAR_6 = FUNC_2(VAR_5->regmap, VAR_2, VAR_8->init_brt_led);
 if (VAR_6 < 0)
  goto out;

 VAR_6 = FUNC_2(VAR_5->regmap, VAR_1, VAR_8->init_brt_led);
 if (VAR_6 < 0)
  goto out;


 if (!VAR_8->init_brt_led) {
  VAR_7 = VAR_8->fled_pins;
  VAR_7 |= VAR_8->bled_pins;
 } else {
  VAR_7 = VAR_8->fled_pins;
  VAR_7 |= VAR_8->bled_pins | 0x01;
 }

 VAR_6 = FUNC_1(VAR_5->regmap, VAR_3, 0x79, VAR_7);
 if (VAR_6 < 0)
  goto out;

 return VAR_6;
out:
 FUNC_0(VAR_5->dev, "i2c failed to access register\n");
 return VAR_6;
}
