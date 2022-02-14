
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3646_flash {int mode_reg; int regmap; } ;
typedef enum v4l2_flash_led_mode { ____Placeholder_v4l2_flash_led_mode } v4l2_flash_led_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct lm3646_flash *VAR_5,
       enum v4l2_flash_led_mode VAR_6)
{
 switch (VAR_6) {
 case 129:
  return FUNC_0(VAR_5->regmap,
        VAR_4, VAR_5->mode_reg | VAR_2);
 case 128:
  return FUNC_0(VAR_5->regmap,
        VAR_4, VAR_5->mode_reg | VAR_3);
 case 130:
  return FUNC_0(VAR_5->regmap,
        VAR_4, VAR_5->mode_reg | VAR_1);
 }
 return -VAR_0;
}
