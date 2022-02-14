
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct int3406_thermal_data* devdata; } ;
struct int3406_thermal_data {unsigned long upper_limit; unsigned long lower_limit; } ;



__attribute__((used)) static int
FUNC_0(struct thermal_cooling_device *VAR_0,
         unsigned long *VAR_1)
{
 struct int3406_thermal_data *VAR_2 = VAR_0->devdata;

 *VAR_1 = VAR_2->upper_limit - VAR_2->lower_limit;
 return 0;
}
