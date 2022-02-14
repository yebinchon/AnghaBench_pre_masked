
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max8973_chip {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,char*,int ,int) ;
 struct max8973_chip* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3, unsigned int VAR_4)
{
 struct max8973_chip *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;
 int VAR_7;


 switch (VAR_4) {
 case 129:
  VAR_7 = VAR_2;
  break;

 case 128:
  VAR_7 = 0;
  break;

 default:
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_5->regmap, VAR_1,
    VAR_2, VAR_7);
 if (VAR_6 < 0)
  FUNC_0(VAR_5->dev, "register %d update failed, err %d\n",
    VAR_1, VAR_6);
 return VAR_6;
}
