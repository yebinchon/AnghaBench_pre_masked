
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfreq_cooling_device {TYPE_1__* power_ops; struct devfreq* devfreq; } ;
struct devfreq {int dummy; } ;
struct TYPE_2__ {unsigned long (* get_static_power ) (struct devfreq*,unsigned long) ;} ;


 unsigned long FUNC_0 (struct devfreq*,unsigned long) ;
 unsigned long FUNC_1 (struct devfreq*,unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_2(struct devfreq_cooling_device *VAR_0, unsigned long VAR_1)
{
 struct devfreq *VAR_2 = VAR_0->devfreq;
 unsigned long VAR_3;

 if (!VAR_0->power_ops->get_static_power)
  return 0;

 VAR_3 = FUNC_0(VAR_2, VAR_1);

 if (VAR_3 == 0)
  return 0;

 return VAR_0->power_ops->get_static_power(VAR_2, VAR_3);
}
