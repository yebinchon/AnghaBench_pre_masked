
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thermal_cooling_device {int dummy; } ;
struct device_node {int dummy; } ;
struct cpufreq_policy {int cpu; } ;


 scalar_t__ FUNC_0 (struct thermal_cooling_device*) ;
 int FUNC_1 (struct thermal_cooling_device*) ;
 struct thermal_cooling_device* FUNC_2 (struct device_node*,struct cpufreq_policy*,int ) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_4 (int ,int *) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (char*,int ,...) ;

struct thermal_cooling_device *
FUNC_8(struct cpufreq_policy *VAR_0)
{
 struct device_node *VAR_1 = FUNC_4(VAR_0->cpu, ((void*)0));
 struct thermal_cooling_device *VAR_2 = ((void*)0);
 u32 VAR_3 = 0;

 if (!VAR_1) {
  FUNC_7("cpu_cooling: OF node not available for cpu%d\n",
         VAR_0->cpu);
  return ((void*)0);
 }

 if (FUNC_3(VAR_1, "#cooling-cells", ((void*)0))) {
  FUNC_6(VAR_1, "dynamic-power-coefficient",
         &VAR_3);

  VAR_2 = FUNC_2(VAR_1, VAR_0, VAR_3);
  if (FUNC_0(VAR_2)) {
   FUNC_7("cpu_cooling: cpu%d failed to register as cooling device: %ld\n",
          VAR_0->cpu, FUNC_1(VAR_2));
   VAR_2 = ((void*)0);
  }
 }

 FUNC_5(VAR_1);
 return VAR_2;
}
