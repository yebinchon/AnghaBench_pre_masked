
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cache_pmu {int cpumask; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (struct device*) ;
 struct l2cache_pmu* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct l2cache_pmu *VAR_3 = FUNC_2(FUNC_1(VAR_0));

 return FUNC_0(1, VAR_2, &VAR_3->cpumask);
}
