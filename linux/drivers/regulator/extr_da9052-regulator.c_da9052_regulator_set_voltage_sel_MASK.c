
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct da9052_regulator_info {unsigned int activate_bit; } ;
struct da9052_regulator {int da9052; struct da9052_regulator_info* info; } ;
struct TYPE_2__ {unsigned int vsel_mask; int vsel_reg; } ;







 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct da9052_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1,
         unsigned int VAR_2)
{
 struct da9052_regulator *VAR_3 = FUNC_1(VAR_1);
 struct da9052_regulator_info *VAR_4 = VAR_3->info;
 int VAR_5 = FUNC_2(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3->da9052, VAR_1->desc->vsel_reg,
    VAR_1->desc->vsel_mask, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;




 switch (VAR_5) {
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_6 = FUNC_0(VAR_3->da9052, VAR_0,
     VAR_4->activate_bit, VAR_4->activate_bit);
  break;
 }

 return VAR_6;
}
