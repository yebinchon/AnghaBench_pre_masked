
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ab8500_btemp {int curr_source; TYPE_1__* bm; int parent; } ;
struct TYPE_2__ {scalar_t__ adc_therm; int gnd_lift_resistance; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ab8500_btemp *VAR_1,
 int VAR_2, int VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_1->parent)) {




  return (450000 * (VAR_2)) / (1800 - VAR_2);
 }

 if (VAR_1->bm->adc_therm == VAR_0) {




  VAR_4 = (VAR_2 * 1000
         - VAR_1->bm->gnd_lift_resistance * VAR_3)
        / VAR_1->curr_source;
 } else {




  VAR_4 = (80000 * (VAR_2)) / (1800 - VAR_2);
 }

 return VAR_4;
}
