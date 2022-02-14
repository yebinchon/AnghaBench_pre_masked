
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {int trips; } ;
struct thermal_cooling_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_max_state ) (struct thermal_cooling_device*,unsigned long*) ;} ;


 int FUNC_0 (struct thermal_cooling_device*,unsigned long*) ;

__attribute__((used)) static long FUNC_1(struct thermal_zone_device *VAR_0,
  struct thermal_cooling_device *VAR_1, int VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 VAR_1->ops->get_max_state(VAR_1, &VAR_4);

 return (long)(VAR_2 * VAR_3 * VAR_4) / (100 * VAR_0->trips);
}
