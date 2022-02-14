
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct charger_manager {scalar_t__ tzd_batt; TYPE_1__* desc; } ;
struct TYPE_2__ {int measure_battery_temp; } ;


 int VAR_0 ;
 int FUNC_0 (struct charger_manager*,int*) ;
 int FUNC_1 (scalar_t__,int*) ;

__attribute__((used)) static int FUNC_2(struct charger_manager *VAR_1,
     int *VAR_2)
{
 int VAR_3;

 if (!VAR_1->desc->measure_battery_temp)
  return -VAR_0;
 {

  VAR_3 = FUNC_0(VAR_1, VAR_2);
 }

 return VAR_3;
}
