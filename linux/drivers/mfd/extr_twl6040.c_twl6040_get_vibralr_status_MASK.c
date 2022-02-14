
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct twl6040 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

int FUNC_1(struct twl6040 *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_0(VAR_4->regmap, VAR_0, &VAR_5);
 if (VAR_6 != 0)
  return VAR_6;
 VAR_7 = VAR_5;

 VAR_6 = FUNC_0(VAR_4->regmap, VAR_1, &VAR_5);
 if (VAR_6 != 0)
  return VAR_6;
 VAR_7 |= VAR_5;

 VAR_7 &= (VAR_2 | VAR_3);

 return VAR_7;
}
