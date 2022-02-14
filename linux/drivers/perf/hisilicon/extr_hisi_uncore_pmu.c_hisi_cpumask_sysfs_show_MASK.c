
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_pmu {int on_cpu; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct hisi_pmu* FUNC_2 (int ) ;

ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct hisi_pmu *VAR_3 = FUNC_2(FUNC_0(VAR_0));

 return FUNC_1(VAR_2, "%d\n", VAR_3->on_cpu);
}
