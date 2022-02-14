
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsu_pmu {int active_cpu; int irq; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_0, struct dsu_pmu *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->active_cpu);
 if (FUNC_1(VAR_1->irq, &VAR_1->active_cpu))
  FUNC_2("Failed to set irq affinity to %d\n", VAR_0);
}
