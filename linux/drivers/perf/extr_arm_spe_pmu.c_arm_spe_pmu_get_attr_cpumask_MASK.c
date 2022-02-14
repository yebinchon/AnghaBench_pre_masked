
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct arm_spe_pmu {int supported_cpus; } ;
typedef int ssize_t ;


 int FUNC_0 (int,char*,int *) ;
 struct arm_spe_pmu* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct arm_spe_pmu *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(1, VAR_2, &VAR_3->supported_cpus);
}
