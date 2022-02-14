
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_chip {int dev; int i2c; } ;
struct max8925_backlight_data {unsigned char current_brightness; int reg_mode_cntl; int reg_cntl; struct max8925_chip* chip; } ;
struct backlight_device {int dummy; } ;


 int VAR_0 ;
 struct max8925_backlight_data* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,char*,unsigned char,...) ;
 int FUNC_2 (int ,int ,unsigned char) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_1, int VAR_2)
{
 struct max8925_backlight_data *VAR_3 = FUNC_0(VAR_1);
 struct max8925_chip *VAR_4 = VAR_3->chip;
 unsigned char VAR_5;
 int VAR_6;

 if (VAR_2 > VAR_0)
  VAR_5 = VAR_0;
 else
  VAR_5 = VAR_2;

 VAR_6 = FUNC_2(VAR_4->i2c, VAR_3->reg_cntl, VAR_5);
 if (VAR_6 < 0)
  goto out;

 if (!VAR_3->current_brightness && VAR_2)

  VAR_6 = FUNC_3(VAR_4->i2c, VAR_3->reg_mode_cntl, 1, 1);
 else if (!VAR_2)

  VAR_6 = FUNC_3(VAR_4->i2c, VAR_3->reg_mode_cntl, 1, 0);
 if (VAR_6 < 0)
  goto out;
 FUNC_1(VAR_4->dev, "set brightness %d\n", VAR_5);
 VAR_3->current_brightness = VAR_5;
 return 0;
out:
 FUNC_1(VAR_4->dev, "set brightness %d failure with return value:%d\n",
  VAR_5, VAR_6);
 return VAR_6;
}
