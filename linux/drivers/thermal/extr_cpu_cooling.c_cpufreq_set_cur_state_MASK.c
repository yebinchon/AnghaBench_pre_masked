
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {struct cpufreq_cooling_device* devdata; } ;
struct cpufreq_cooling_device {unsigned long max_level; unsigned long cpufreq_state; TYPE_1__* freq_table; int qos_req; } ;
struct TYPE_2__ {int frequency; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct thermal_cooling_device *VAR_1,
     unsigned long VAR_2)
{
 struct cpufreq_cooling_device *VAR_3 = VAR_1->devdata;


 if (FUNC_0(VAR_2 > VAR_3->max_level))
  return -VAR_0;


 if (VAR_3->cpufreq_state == VAR_2)
  return 0;

 VAR_3->cpufreq_state = VAR_2;

 return FUNC_1(&VAR_3->qos_req,
    VAR_3->freq_table[VAR_2].frequency);
}
