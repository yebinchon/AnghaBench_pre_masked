
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {struct regmap* regmap; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regmap*,int ,int*) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_5);
 struct regmap *VAR_7 = VAR_5->regmap;
 u8 VAR_8;

 switch (VAR_6) {
 case 128:
  FUNC_0(VAR_7, VAR_2, &VAR_8);
  if ((VAR_8 & VAR_0) == 0)
   return 0;
  FUNC_0(VAR_7, VAR_3, &VAR_8);
  if ((VAR_8 & VAR_4) == 0)
   return 0;

  return 1;
 default:
  return -VAR_1;
 }
}
