
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dev; int regmap; } ;
struct mt6397_regulator_info {int modeset_shift; int modeset_mask; int modeset_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *,char*,int ,int ,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 struct mt6397_regulator_info* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_3,
         unsigned int VAR_4)
{
 struct mt6397_regulator_info *VAR_5 = FUNC_2(VAR_3);
 int VAR_6, VAR_7;

 switch (VAR_4) {
 case 129:
  VAR_7 = VAR_2;
  break;
 case 128:
  VAR_7 = VAR_1;
  break;
 default:
  VAR_6 = -VAR_0;
  goto err_mode;
 }

 FUNC_0(&VAR_3->dev, "mt6397 buck set_mode %#x, %#x, %#x, %#x\n",
  VAR_5->modeset_reg, VAR_5->modeset_mask,
  VAR_5->modeset_shift, VAR_7);

 VAR_7 <<= VAR_5->modeset_shift;
 VAR_6 = FUNC_3(VAR_3->regmap, VAR_5->modeset_reg,
     VAR_5->modeset_mask, VAR_7);
err_mode:
 if (VAR_6 != 0) {
  FUNC_1(&VAR_3->dev,
   "Failed to set mt6397 buck mode: %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
