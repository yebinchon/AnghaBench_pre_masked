
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct __thermal_zone* devdata; } ;
struct __thermal_zone {int ntrips; TYPE_1__* trips; } ;
struct TYPE_2__ {scalar_t__ type; int temperature; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_2,
        int *VAR_3)
{
 struct __thermal_zone *VAR_4 = VAR_2->devdata;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->ntrips; VAR_5++)
  if (VAR_4->trips[VAR_5].type == VAR_1) {
   *VAR_3 = VAR_4->trips[VAR_5].temperature;
   return 0;
  }

 return -VAR_0;
}
