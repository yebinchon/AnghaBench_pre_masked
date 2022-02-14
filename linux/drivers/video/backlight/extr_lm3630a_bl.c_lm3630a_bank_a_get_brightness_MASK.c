
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm3630a_chip {int dev; TYPE_1__* pdata; } ;
struct TYPE_4__ {int brightness; } ;
struct backlight_device {TYPE_2__ props; } ;
typedef enum lm3630a_pwm_ctrl { ____Placeholder_lm3630a_pwm_ctrl } lm3630a_pwm_ctrl ;
struct TYPE_3__ {int pwm_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct lm3630a_chip* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct lm3630a_chip*,int ) ;
 int FUNC_3 (struct lm3630a_chip*,int ,int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct backlight_device *VAR_5)
{
 int VAR_6, VAR_7;
 struct lm3630a_chip *VAR_8 = FUNC_0(VAR_5);
 enum lm3630a_pwm_ctrl VAR_9 = VAR_8->pdata->pwm_ctrl;

 if ((VAR_9 & VAR_0) != 0) {
  VAR_7 = FUNC_2(VAR_8, VAR_3);
  if (VAR_7 < 0)
   goto out_i2c_err;
  VAR_6 = (VAR_7 & 0x01) << 8;
  VAR_7 = FUNC_2(VAR_8, VAR_4);
  if (VAR_7 < 0)
   goto out_i2c_err;
  VAR_6 |= VAR_7;
  goto out;
 }


 VAR_7 = FUNC_3(VAR_8, VAR_2, 0x80, 0x00);
 if (VAR_7 < 0)
  goto out_i2c_err;
 FUNC_4(1000, 2000);
 VAR_7 = FUNC_2(VAR_8, VAR_1);
 if (VAR_7 < 0)
  goto out_i2c_err;
 VAR_6 = VAR_7;

out:
 VAR_5->props.brightness = VAR_6;
 return VAR_5->props.brightness;
out_i2c_err:
 FUNC_1(VAR_8->dev, "i2c failed to access register\n");
 return 0;
}
