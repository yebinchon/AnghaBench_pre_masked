
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ab8500_charger {TYPE_1__* bm; } ;
struct TYPE_2__ {int* chg_input_curr; int n_chg_in_curr; } ;



__attribute__((used)) static int FUNC_0(struct ab8500_charger *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1 < VAR_0->bm->chg_input_curr[0])
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->bm->n_chg_in_curr; VAR_2++) {
  if (VAR_1 < VAR_0->bm->chg_input_curr[VAR_2])
   return VAR_2 - 1;
 }


 VAR_2 = VAR_0->bm->n_chg_in_curr - 1;
 if (VAR_1 == VAR_0->bm->chg_input_curr[VAR_2])
  return VAR_2;
 else
  return -1;
}
