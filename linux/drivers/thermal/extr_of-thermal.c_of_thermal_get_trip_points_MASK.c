
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct __thermal_zone* devdata; } ;
struct thermal_trip {int dummy; } ;
struct __thermal_zone {struct thermal_trip const* trips; } ;



const struct thermal_trip *
FUNC_0(struct thermal_zone_device *VAR_0)
{
 struct __thermal_zone *VAR_1 = VAR_0->devdata;

 if (!VAR_1)
  return ((void*)0);

 return VAR_1->trips;
}
