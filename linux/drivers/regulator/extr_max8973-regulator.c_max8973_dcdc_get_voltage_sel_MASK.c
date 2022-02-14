
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max8973_chip {int curr_vout_reg; int dev; int regmap; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 struct max8973_chip* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1)
{
 struct max8973_chip *VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2->regmap, VAR_2->curr_vout_reg, &VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2->dev, "register %d read failed, err = %d\n",
   VAR_2->curr_vout_reg, VAR_4);
  return VAR_4;
 }
 return VAR_3 & VAR_0;
}
