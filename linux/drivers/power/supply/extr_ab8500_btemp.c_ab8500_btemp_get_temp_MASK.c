
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int btemp_low_limit; int btemp_high_limit; int btemp_med_limit; } ;
struct TYPE_3__ {scalar_t__ btemp_medhigh; scalar_t__ btemp_lowmed; scalar_t__ btemp_high; scalar_t__ btemp_low; } ;
struct ab8500_btemp {int bat_temp; TYPE_2__ btemp_ranges; TYPE_1__ events; int parent; } ;


 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct ab8500_btemp *VAR_0)
{
 int VAR_1 = 0;





 if (FUNC_0(VAR_0->parent)) {
  VAR_1 = VAR_0->bat_temp * 10;
 } else {
  if (VAR_0->events.btemp_low) {
   if (VAR_1 > VAR_0->btemp_ranges.btemp_low_limit)
    VAR_1 = VAR_0->btemp_ranges.btemp_low_limit * 10;
   else
    VAR_1 = VAR_0->bat_temp * 10;
  } else if (VAR_0->events.btemp_high) {
   if (VAR_1 < VAR_0->btemp_ranges.btemp_high_limit)
    VAR_1 = VAR_0->btemp_ranges.btemp_high_limit * 10;
   else
    VAR_1 = VAR_0->bat_temp * 10;
  } else if (VAR_0->events.btemp_lowmed) {
   if (VAR_1 > VAR_0->btemp_ranges.btemp_med_limit)
    VAR_1 = VAR_0->btemp_ranges.btemp_med_limit * 10;
   else
    VAR_1 = VAR_0->bat_temp * 10;
  } else if (VAR_0->events.btemp_medhigh) {
   if (VAR_1 < VAR_0->btemp_ranges.btemp_med_limit)
    VAR_1 = VAR_0->btemp_ranges.btemp_med_limit * 10;
   else
    VAR_1 = VAR_0->bat_temp * 10;
  } else
   VAR_1 = VAR_0->bat_temp * 10;
 }
 return VAR_1;
}
