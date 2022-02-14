
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;
struct mt6380_regulator_info {unsigned int modeset_mask; int modeset_reg; } ;


 unsigned int VAR_0 ;


 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 struct mt6380_regulator_info* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_3(struct regulator_dev *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 int VAR_6;
 struct mt6380_regulator_info *VAR_7 = FUNC_1(VAR_3);

 VAR_6 = FUNC_2(VAR_3->regmap, VAR_7->modeset_reg, &VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4 &= VAR_7->modeset_mask;
 VAR_4 >>= FUNC_0(VAR_7->modeset_mask) - 1;

 switch (VAR_4) {
 case 129:
  VAR_5 = VAR_2;
  break;
 case 128:
  VAR_5 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return VAR_5;
}
