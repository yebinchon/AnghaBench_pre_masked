
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct __thermal_zone* devdata; } ;
struct __thermal_zone {int ntrips; TYPE_1__* trips; } ;
struct TYPE_2__ {int hysteresis; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_1, int VAR_2,
        int VAR_3)
{
 struct __thermal_zone *VAR_4 = VAR_1->devdata;

 if (VAR_2 >= VAR_4->ntrips || VAR_2 < 0)
  return -VAR_0;


 VAR_4->trips[VAR_2].hysteresis = VAR_3;

 return 0;
}
