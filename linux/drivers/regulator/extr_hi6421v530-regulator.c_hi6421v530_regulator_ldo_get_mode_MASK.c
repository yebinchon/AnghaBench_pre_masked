
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct hi6421v530_regulator_info {unsigned int mode_mask; } ;
struct TYPE_2__ {int enable_reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct hi6421v530_regulator_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_2(
     struct regulator_dev *VAR_2)
{
 struct hi6421v530_regulator_info *VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_0(VAR_2);
 FUNC_1(VAR_2->regmap, VAR_2->desc->enable_reg, &VAR_4);

 if (VAR_4 & (VAR_3->mode_mask))
  return VAR_0;

 return VAR_1;
}
