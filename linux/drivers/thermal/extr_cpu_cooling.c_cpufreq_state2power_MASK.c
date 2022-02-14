
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct thermal_zone_device {int dummy; } ;
struct thermal_cooling_device {struct cpufreq_cooling_device* devdata; } ;
struct cpufreq_cooling_device {unsigned long max_level; TYPE_2__* freq_table; TYPE_1__* policy; } ;
struct TYPE_4__ {unsigned int frequency; } ;
struct TYPE_3__ {int cpus; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct cpufreq_cooling_device*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct thermal_cooling_device *VAR_1,
          struct thermal_zone_device *VAR_2,
          unsigned long VAR_3, u32 *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 struct cpufreq_cooling_device *VAR_7 = VAR_1->devdata;


 if (FUNC_0(VAR_3 > VAR_7->max_level))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_7->policy->cpus);

 VAR_5 = VAR_7->freq_table[VAR_3].frequency;
 *VAR_4 = FUNC_1(VAR_7, VAR_5) * VAR_6;

 return 0;
}
