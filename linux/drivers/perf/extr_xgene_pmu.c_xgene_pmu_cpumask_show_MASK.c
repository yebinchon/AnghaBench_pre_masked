
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_pmu_dev {TYPE_1__* parent; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int cpu; } ;


 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (struct device*) ;
 struct xgene_pmu_dev* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct xgene_pmu_dev *VAR_3 = FUNC_2(FUNC_1(VAR_0));

 return FUNC_0(1, VAR_2, &VAR_3->parent->cpu);
}
