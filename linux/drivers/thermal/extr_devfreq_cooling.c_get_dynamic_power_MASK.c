
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct devfreq_cooling_power {unsigned long (* get_dynamic_power ) (int ,unsigned long,unsigned long) ;scalar_t__ dyn_power_coeff; } ;
struct devfreq_cooling_device {int devfreq; struct devfreq_cooling_power* power_ops; } ;


 int FUNC_0 (unsigned long,int) ;
 unsigned long FUNC_1 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_2(struct devfreq_cooling_device *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2)
{
 u64 VAR_3;
 u32 VAR_4;
 struct devfreq_cooling_power *VAR_5 = VAR_0->power_ops;

 if (VAR_5->get_dynamic_power)
  return VAR_5->get_dynamic_power(VAR_0->devfreq, VAR_1,
          VAR_2);

 VAR_4 = VAR_1 / 1000000;
 VAR_3 = (u64)VAR_5->dyn_power_coeff * VAR_4 * VAR_2 * VAR_2;
 FUNC_0(VAR_3, 1000000000);

 return VAR_3;
}
