
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max8973_chip {int dev; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int) ;
 struct max8973_chip* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_3(struct regulator_dev *VAR_4)
{
 struct max8973_chip *VAR_5 = FUNC_1(VAR_4);
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5->regmap, VAR_0, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_5->dev, "register %d read failed, err %d\n",
    VAR_0, VAR_7);
  return VAR_7;
 }
 return (VAR_6 & VAR_1) ?
  VAR_2 : VAR_3;
}
