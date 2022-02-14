
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct __thermal_zone* devdata; } ;
struct __thermal_zone {int ntrips; } ;



bool FUNC_0(struct thermal_zone_device *VAR_0, int VAR_1)
{
 struct __thermal_zone *VAR_2 = VAR_0->devdata;

 if (!VAR_2 || VAR_1 >= VAR_2->ntrips || VAR_1 < 0)
  return 0;

 return 1;
}
