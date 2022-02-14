
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int regmap; TYPE_1__* constraints; } ;
struct chg_reg_data {unsigned int linear_mask; unsigned int min_sel; unsigned int uA_step; int linear_reg; } ;
struct TYPE_2__ {unsigned int min_uA; unsigned int max_uA; } ;


 int VAR_0 ;
 struct chg_reg_data* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1)
{
 const struct chg_reg_data *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3 = VAR_1->constraints->min_uA;
 unsigned int VAR_4 = VAR_1->constraints->max_uA;
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_1->regmap, VAR_2->linear_reg, &VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6 = VAR_5 & VAR_2->linear_mask;


 if (VAR_6 <= VAR_2->min_sel)
  VAR_6 = 0;
 else
  VAR_6 -= VAR_2->min_sel;

 VAR_7 = VAR_3 + VAR_2->uA_step * VAR_6;
 if (VAR_7 > VAR_4)
  return -VAR_0;

 return VAR_7;
}
