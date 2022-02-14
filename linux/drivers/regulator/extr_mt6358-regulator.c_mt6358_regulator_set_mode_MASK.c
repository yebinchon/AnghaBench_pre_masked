
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; int dev; } ;
struct mt6358_regulator_info {int modeset_shift; int modeset_mask; int modeset_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *,char*,int ,int ,int,int) ;
 struct mt6358_regulator_info* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3,
         unsigned int VAR_4)
{
 struct mt6358_regulator_info *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 switch (VAR_4) {
 case 129:
  VAR_6 = VAR_2;
  break;
 case 128:
  VAR_6 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(&VAR_3->dev, "mt6358 buck set_mode %#x, %#x, %#x, %#x\n",
  VAR_5->modeset_reg, VAR_5->modeset_mask,
  VAR_5->modeset_shift, VAR_6);

 VAR_6 <<= VAR_5->modeset_shift;

 return FUNC_2(VAR_3->regmap, VAR_5->modeset_reg,
      VAR_5->modeset_mask, VAR_6);
}
