
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max8973_chip {int dev; int regmap; } ;





 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 struct max8973_chip* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2)
{
 struct max8973_chip *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3->regmap, VAR_1, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(VAR_3->dev, "register %d read failed: %d\n",
    VAR_1, VAR_5);
  return VAR_5;
 }
 switch (VAR_4 & VAR_0) {
 case 128:
  return 15000000;
 case 130:
  return 12000000;
 case 129:
  return 9000000;
 default:
  break;
 }
 return 9000000;
}
