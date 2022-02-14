
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thermal_zone_device {int dummy; } ;
struct thermal_cooling_device {struct cpufreq_cooling_device* devdata; } ;
struct cpufreq_policy {int related_cpus; } ;
struct cpufreq_cooling_device {scalar_t__ last_load; struct cpufreq_policy* policy; } ;


 unsigned int FUNC_0 (struct cpufreq_cooling_device*,int) ;
 unsigned long FUNC_1 (struct cpufreq_cooling_device*,unsigned int) ;
 int FUNC_2 (int ,unsigned int,unsigned long,int) ;

__attribute__((used)) static int FUNC_3(struct thermal_cooling_device *VAR_0,
          struct thermal_zone_device *VAR_1, u32 VAR_2,
          unsigned long *VAR_3)
{
 unsigned int VAR_4;
 u32 VAR_5, VAR_6;
 struct cpufreq_cooling_device *VAR_7 = VAR_0->devdata;
 struct cpufreq_policy *VAR_8 = VAR_7->policy;

 VAR_5 = VAR_7->last_load ?: 1;
 VAR_6 = (VAR_2 * 100) / VAR_5;
 VAR_4 = FUNC_0(VAR_7, VAR_6);

 *VAR_3 = FUNC_1(VAR_7, VAR_4);
 FUNC_2(VAR_8->related_cpus, VAR_4, *VAR_3,
          VAR_2);
 return 0;
}
