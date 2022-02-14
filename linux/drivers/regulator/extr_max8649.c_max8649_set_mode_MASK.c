
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct max8649_regulator_info {int regmap; } ;
struct TYPE_2__ {int vsel_reg; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct max8649_regulator_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2, unsigned int VAR_3)
{
 struct max8649_regulator_info *VAR_4 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 129:
  FUNC_1(VAR_4->regmap, VAR_2->desc->vsel_reg,
       VAR_1, VAR_1);
  break;
 case 128:
  FUNC_1(VAR_4->regmap, VAR_2->desc->vsel_reg,
       VAR_1, 0);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
