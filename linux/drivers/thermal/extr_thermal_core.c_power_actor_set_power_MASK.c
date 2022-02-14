
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct thermal_instance {unsigned long target; int tz; } ;
struct thermal_cooling_device {int updated; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* power2state ) (struct thermal_cooling_device*,int ,int ,unsigned long*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct thermal_cooling_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thermal_cooling_device*,int ,int ,unsigned long*) ;
 int FUNC_4 (struct thermal_cooling_device*) ;

int FUNC_5(struct thermal_cooling_device *VAR_1,
     struct thermal_instance *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 if (!FUNC_0(VAR_1))
  return -VAR_0;

 VAR_5 = VAR_1->ops->power2state(VAR_1, VAR_2->tz, VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_2->target = VAR_4;
 FUNC_1(&VAR_1->lock);
 VAR_1->updated = 0;
 FUNC_2(&VAR_1->lock);
 FUNC_4(VAR_1);

 return 0;
}
