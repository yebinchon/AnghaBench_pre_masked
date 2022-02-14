
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx2_uncore_pmu {int cpu; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 struct tx2_uncore_pmu* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
  char *VAR_2)
{
 struct tx2_uncore_pmu *VAR_3;

 VAR_3 = FUNC_3(FUNC_2(VAR_0));
 return FUNC_0(1, VAR_2, FUNC_1(VAR_3->cpu));
}
