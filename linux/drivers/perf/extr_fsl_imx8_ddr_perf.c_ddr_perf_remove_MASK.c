
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ddr_pmu {int id; int pmu; int irq; int node; int cpuhp_state; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 struct ddr_pmu* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct ddr_pmu *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2->cpuhp_state, &VAR_2->node);
 FUNC_2(VAR_2->irq, ((void*)0));

 FUNC_3(&VAR_2->pmu);

 FUNC_1(&VAR_0, VAR_2->id);
 return 0;
}
