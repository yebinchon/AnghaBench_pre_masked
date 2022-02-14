
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dsu_pmu {int irq; int cpuhp_node; int pmu; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 struct dsu_pmu* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct dsu_pmu *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(&VAR_2->pmu);
 FUNC_0(VAR_0, &VAR_2->cpuhp_node);
 FUNC_1(VAR_2->irq, ((void*)0));

 return 0;
}
