
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65217 {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;



 unsigned int VAR_2 ;
 int FUNC_0 (int ,unsigned int,unsigned int) ;

int FUNC_1(struct tps65217 *VAR_3, unsigned int VAR_4,
   unsigned int VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;

 switch (VAR_6) {
 case 128:
  return FUNC_0(VAR_3->regmap, VAR_4, VAR_5);
 case 130:
  VAR_8 = VAR_4 ^ VAR_1;
  VAR_7 = FUNC_0(VAR_3->regmap, VAR_2,
       VAR_8);
  if (VAR_7 < 0)
   return VAR_7;

  return FUNC_0(VAR_3->regmap, VAR_4, VAR_5);
 case 129:
  VAR_8 = VAR_4 ^ VAR_1;
  VAR_7 = FUNC_0(VAR_3->regmap, VAR_2,
       VAR_8);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_7 = FUNC_0(VAR_3->regmap, VAR_4, VAR_5);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_7 = FUNC_0(VAR_3->regmap, VAR_2,
       VAR_8);
  if (VAR_7 < 0)
   return VAR_7;
  return FUNC_0(VAR_3->regmap, VAR_4, VAR_5);
 default:
  return -VAR_0;
 }
}
