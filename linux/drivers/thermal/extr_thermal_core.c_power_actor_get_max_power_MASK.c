
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct thermal_zone_device {int dummy; } ;
struct thermal_cooling_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* state2power ) (struct thermal_cooling_device*,struct thermal_zone_device*,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct thermal_cooling_device*) ;
 int FUNC_1 (struct thermal_cooling_device*,struct thermal_zone_device*,int ,int *) ;

int FUNC_2(struct thermal_cooling_device *VAR_1,
         struct thermal_zone_device *VAR_2, u32 *VAR_3)
{
 if (!FUNC_0(VAR_1))
  return -VAR_0;

 return VAR_1->ops->state2power(VAR_1, VAR_2, 0, VAR_3);
}
