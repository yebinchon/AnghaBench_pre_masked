
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dev; int regmap; } ;
struct mt6358_regulator_info {int modeset_mask; int modeset_shift; int modeset_reg; } ;


 unsigned int VAR_0 ;


 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 struct mt6358_regulator_info* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static unsigned int FUNC_3(struct regulator_dev *VAR_3)
{
 struct mt6358_regulator_info *VAR_4 = FUNC_1(VAR_3);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_3->regmap, VAR_4->modeset_reg, &VAR_6);
 if (VAR_5 != 0) {
  FUNC_0(&VAR_3->dev,
   "Failed to get mt6358 buck mode: %d\n", VAR_5);
  return VAR_5;
 }

 switch ((VAR_6 & VAR_4->modeset_mask) >> VAR_4->modeset_shift) {
 case 129:
  return VAR_2;
 case 128:
  return VAR_1;
 default:
  return -VAR_0;
 }
}
