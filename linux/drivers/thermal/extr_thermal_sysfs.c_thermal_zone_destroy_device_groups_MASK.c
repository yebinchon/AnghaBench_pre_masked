
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int groups; } ;
struct thermal_zone_device {TYPE_1__ device; scalar_t__ trips; } ;


 int FUNC_0 (struct thermal_zone_device*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct thermal_zone_device *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->trips)
  FUNC_0(VAR_0);

 FUNC_1(VAR_0->device.groups);
}
