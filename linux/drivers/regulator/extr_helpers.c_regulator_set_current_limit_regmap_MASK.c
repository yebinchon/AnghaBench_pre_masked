
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {unsigned int n_current_limits; unsigned int* curr_table; int csel_mask; int csel_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;

int FUNC_2(struct regulator_dev *VAR_1,
           int VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_1->desc->n_current_limits;
 int VAR_5, VAR_6 = -1;

 if (VAR_4 == 0)
  return -VAR_0;

 if (VAR_1->desc->curr_table) {
  const unsigned int *VAR_7 = VAR_1->desc->curr_table;
  bool VAR_8 = VAR_7[VAR_4 - 1] > VAR_7[0];


  if (VAR_8) {
   for (VAR_5 = VAR_4 - 1; VAR_5 >= 0; VAR_5--) {
    if (VAR_2 <= VAR_7[VAR_5] &&
        VAR_7[VAR_5] <= VAR_3) {
     VAR_6 = VAR_5;
     break;
    }
   }
  } else {
   for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    if (VAR_2 <= VAR_7[VAR_5] &&
        VAR_7[VAR_5] <= VAR_3) {
     VAR_6 = VAR_5;
     break;
    }
   }
  }
 }

 if (VAR_6 < 0)
  return -VAR_0;

 VAR_6 <<= FUNC_0(VAR_1->desc->csel_mask) - 1;

 return FUNC_1(VAR_1->regmap, VAR_1->desc->csel_reg,
      VAR_1->desc->csel_mask, VAR_6);
}
