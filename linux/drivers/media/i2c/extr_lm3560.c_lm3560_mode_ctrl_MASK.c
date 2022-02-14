
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3560_flash {int led_mode; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct lm3560_flash *VAR_5)
{
 int VAR_6 = -VAR_0;

 switch (VAR_5->led_mode) {
 case 129:
  VAR_6 = FUNC_0(VAR_5->regmap,
       VAR_4, 0x03, VAR_2);
  break;
 case 128:
  VAR_6 = FUNC_0(VAR_5->regmap,
       VAR_4, 0x03, VAR_3);
  break;
 case 130:
  VAR_6 = FUNC_0(VAR_5->regmap,
       VAR_4, 0x03, VAR_1);
  break;
 }
 return VAR_6;
}
