
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int regmap; TYPE_1__* constraints; } ;
struct chg_reg_data {int uA_step; int linear_reg; scalar_t__ min_sel; } ;
struct TYPE_2__ {unsigned int min_uA; } ;


 int VAR_0 ;
 struct chg_reg_data* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1,
      int VAR_2, int VAR_3)
{
 const struct chg_reg_data *VAR_4 = FUNC_0(VAR_1);
 unsigned int VAR_5 = VAR_1->constraints->min_uA;
 int VAR_6 = 0;

 while (VAR_5 + VAR_4->uA_step * VAR_6 < VAR_2)
  VAR_6++;

 if (VAR_5 + VAR_4->uA_step * VAR_6 > VAR_3)
  return -VAR_0;


 VAR_6 += VAR_4->min_sel;

 return FUNC_1(VAR_1->regmap, VAR_4->linear_reg, VAR_6);
}
