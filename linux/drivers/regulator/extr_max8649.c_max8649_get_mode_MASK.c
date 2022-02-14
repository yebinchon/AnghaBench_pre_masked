
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct max8649_regulator_info {int regmap; } ;
struct TYPE_2__ {int vsel_reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct max8649_regulator_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_3)
{
 struct max8649_regulator_info *VAR_4 = FUNC_0(VAR_3);
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4->regmap, VAR_3->desc->vsel_reg, &VAR_5);
 if (VAR_6 != 0)
  return VAR_6;
 if (VAR_5 & VAR_0)
  return VAR_1;
 return VAR_2;
}
