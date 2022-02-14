
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_chip {int dev; } ;
struct pm860x_backlight_data {int current_brightness; int reg_duty_cycle; int i2c; struct pm860x_chip* chip; } ;
struct backlight_device {int dummy; } ;


 int VAR_0 ;
 struct pm860x_backlight_data* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_1)
{
 struct pm860x_backlight_data *VAR_2 = FUNC_0(VAR_1);
 struct pm860x_chip *VAR_3 = VAR_2->chip;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2->i2c, VAR_2->reg_duty_cycle);
 if (VAR_4 < 0)
  goto out;
 VAR_2->current_brightness = VAR_4;
 FUNC_1(VAR_3->dev, "get brightness %d\n", VAR_2->current_brightness);
 return VAR_2->current_brightness;
out:
 return -VAR_0;
}
