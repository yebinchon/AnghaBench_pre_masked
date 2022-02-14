
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max8973_chip {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ,int) ;
 struct max8973_chip* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_7,
  int VAR_8)
{
 struct max8973_chip *VAR_9 = FUNC_1(VAR_7);
 unsigned int VAR_10;
 int VAR_11;


 if (VAR_8 <= 12000)
  VAR_10 = VAR_2;
 else if (VAR_8 <= 25000)
  VAR_10 = VAR_4;
 else if (VAR_8 <= 50000)
  VAR_10 = VAR_5;
 else if (VAR_8 <= 200000)
  VAR_10 = VAR_3;
 else
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_9->regmap, VAR_1,
   VAR_6, VAR_10);
 if (VAR_11 < 0)
  FUNC_0(VAR_9->dev, "register %d update failed, %d",
    VAR_1, VAR_11);
 return VAR_11;
}
