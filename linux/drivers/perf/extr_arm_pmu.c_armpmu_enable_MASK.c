
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_hw_events {int used_mask; } ;
struct pmu {int dummy; } ;
struct arm_pmu {int (* start ) (struct arm_pmu*) ;int supported_cpus; int num_events; int hw_events; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct arm_pmu*) ;
 struct pmu_hw_events* FUNC_4 (int ) ;
 struct arm_pmu* FUNC_5 (struct pmu*) ;

__attribute__((used)) static void FUNC_6(struct pmu *VAR_0)
{
 struct arm_pmu *VAR_1 = FUNC_5(VAR_0);
 struct pmu_hw_events *VAR_2 = FUNC_4(VAR_1->hw_events);
 int VAR_3 = FUNC_0(VAR_2->used_mask, VAR_1->num_events);


 if (!FUNC_1(FUNC_2(), &VAR_1->supported_cpus))
  return;

 if (VAR_3)
  VAR_1->start(VAR_1);
}
