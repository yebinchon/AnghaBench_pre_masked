
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3560_flash {int regmap; } ;
typedef enum lm3560_led_id { ____Placeholder_lm3560_led_id } lm3560_led_id ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (struct lm3560_flash*,int,int) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct lm3560_flash *VAR_3,
     enum lm3560_led_id VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 u8 VAR_7;

 if (VAR_5 < VAR_1)
  return FUNC_1(VAR_3, VAR_4, 0);
 else
  VAR_6 = FUNC_1(VAR_3, VAR_4, 1);

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_4 == VAR_0)
  VAR_6 = FUNC_2(VAR_3->regmap,
       VAR_2, 0x07, VAR_7);
 else
  VAR_6 = FUNC_2(VAR_3->regmap,
       VAR_2, 0x38, VAR_7 << 3);

 return VAR_6;
}
