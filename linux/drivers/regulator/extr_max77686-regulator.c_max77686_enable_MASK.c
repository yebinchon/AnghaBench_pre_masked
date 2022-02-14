
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct max77686_data {unsigned int* opmode; } ;
struct TYPE_2__ {int enable_mask; int enable_reg; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct max77686_data*,int) ;
 struct max77686_data* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_1)
{
 struct max77686_data *VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3;
 int VAR_4 = FUNC_3(VAR_1);

 VAR_3 = FUNC_0(VAR_4);

 if (VAR_2->opmode[VAR_4] == VAR_0)
  VAR_2->opmode[VAR_4] = FUNC_1(VAR_2, VAR_4);

 return FUNC_4(VAR_1->regmap, VAR_1->desc->enable_reg,
      VAR_1->desc->enable_mask,
      VAR_2->opmode[VAR_4] << VAR_3);
}
