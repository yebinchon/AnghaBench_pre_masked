
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;
struct fan53555_device_info {int mode_mask; int vol_reg; int mode_reg; } ;


 int VAR_0 ;


 struct fan53555_device_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1, unsigned int VAR_2)
{
 struct fan53555_device_info *VAR_3 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_1->regmap, VAR_3->mode_reg,
       VAR_3->mode_mask, VAR_3->mode_mask);
  break;
 case 128:
  FUNC_1(VAR_1->regmap, VAR_3->vol_reg, VAR_3->mode_mask, 0);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
