
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max8973_chip {int dev; int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int) ;
 struct max8973_chip* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_5,
  int VAR_6, int VAR_7)
{
 struct max8973_chip *VAR_8 = FUNC_1(VAR_5);
 unsigned int VAR_9;
 int VAR_10;

 if (VAR_7 <= 9000000)
  VAR_9 = VAR_1;
 else if (VAR_7 <= 12000000)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_2;

 VAR_10 = FUNC_2(VAR_8->regmap, VAR_4,
   VAR_3, VAR_9);
 if (VAR_10 < 0) {
  FUNC_0(VAR_8->dev, "register %d update failed: %d\n",
    VAR_4, VAR_10);
  return VAR_10;
 }
 return 0;
}
