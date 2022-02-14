
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3560_flash {int regmap; } ;
typedef enum lm3560_led_id { ____Placeholder_lm3560_led_id } lm3560_led_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct lm3560_flash *VAR_2,
         enum lm3560_led_id VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_3 == VAR_0) {
  if (VAR_4)
   VAR_5 = FUNC_0(VAR_2->regmap,
        VAR_1, 0x08, 0x08);
  else
   VAR_5 = FUNC_0(VAR_2->regmap,
        VAR_1, 0x08, 0x00);
 } else {
  if (VAR_4)
   VAR_5 = FUNC_0(VAR_2->regmap,
        VAR_1, 0x10, 0x10);
  else
   VAR_5 = FUNC_0(VAR_2->regmap,
        VAR_1, 0x10, 0x00);
 }
 return VAR_5;
}
