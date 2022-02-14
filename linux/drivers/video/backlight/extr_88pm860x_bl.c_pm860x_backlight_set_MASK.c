
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_chip {int dev; } ;
struct pm860x_backlight_data {unsigned char current_brightness; int port; int reg_always_on; int i2c; scalar_t__ pwm; scalar_t__ iset; int reg_current; int reg_duty_cycle; struct pm860x_chip* chip; } ;
struct backlight_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct pm860x_chip*,int ,int) ;
 struct pm860x_backlight_data* FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (int ,char*,unsigned char,...) ;
 int FUNC_3 (int ,int ,unsigned char) ;
 int FUNC_4 (int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct backlight_device *VAR_5, int VAR_6)
{
 struct pm860x_backlight_data *VAR_7 = FUNC_1(VAR_5);
 struct pm860x_chip *VAR_8 = VAR_7->chip;
 unsigned char VAR_9;
 int VAR_10;

 if (VAR_6 > VAR_1)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_6;

 if (VAR_6)
  FUNC_0(VAR_8, VAR_7->port, 1);

 VAR_10 = FUNC_3(VAR_7->i2c, VAR_7->reg_duty_cycle, VAR_9);
 if (VAR_10 < 0)
  goto out;

 if ((VAR_7->current_brightness == 0) && VAR_6) {
  if (VAR_7->iset) {
   VAR_10 = FUNC_4(VAR_7->i2c, VAR_7->reg_current,
           VAR_0, VAR_7->iset);
   if (VAR_10 < 0)
    goto out;
  }
  if (VAR_7->pwm) {
   VAR_10 = FUNC_4(VAR_7->i2c, VAR_2,
           VAR_3, VAR_7->pwm);
   if (VAR_10 < 0)
    goto out;
  }
  if (VAR_6 == VAR_1) {

   VAR_10 = FUNC_4(VAR_7->i2c, VAR_7->reg_always_on,
           VAR_4, VAR_4);
  }
 } else {
  if (VAR_6 == VAR_1) {

   VAR_10 = FUNC_4(VAR_7->i2c, VAR_7->reg_always_on,
           VAR_4, VAR_4);
  } else {

   VAR_10 = FUNC_4(VAR_7->i2c, VAR_7->reg_always_on,
           VAR_4, 0);
  }
 }
 if (VAR_10 < 0)
  goto out;

 if (VAR_6 == 0)
  FUNC_0(VAR_8, VAR_7->port, 0);

 FUNC_2(VAR_8->dev, "set brightness %d\n", VAR_9);
 VAR_7->current_brightness = VAR_9;
 return 0;
out:
 FUNC_2(VAR_8->dev, "set brightness %d failure with return value: %d\n",
  VAR_9, VAR_10);
 return VAR_10;
}
