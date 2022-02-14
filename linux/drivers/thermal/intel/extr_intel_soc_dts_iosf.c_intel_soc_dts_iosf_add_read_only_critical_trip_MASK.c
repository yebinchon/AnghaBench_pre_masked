
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_soc_dts_sensors {scalar_t__ tj_max; TYPE_1__* soc_dts; } ;
struct TYPE_2__ {int trip_count; int trip_mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int,scalar_t__,int ) ;

int FUNC_2(
 struct intel_soc_dts_sensors *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  for (VAR_6 = 0; VAR_6 < VAR_3->soc_dts[VAR_5].trip_count; ++VAR_6) {
   if (!(VAR_3->soc_dts[VAR_5].trip_mask & FUNC_0(VAR_6))) {
    return FUNC_1(&VAR_3->soc_dts[VAR_5], VAR_6,
     VAR_3->tj_max - VAR_4,
     VAR_2);
   }
  }
 }

 return -VAR_0;
}
