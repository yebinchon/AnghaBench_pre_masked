
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int cpu; int pmu; } ;
struct arm_pmu {int (* map_event ) (struct perf_event*) ;int supported_cpus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;
 struct arm_pmu* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_2)
{
 struct arm_pmu *VAR_3 = FUNC_4(VAR_2->pmu);
 if (VAR_2->cpu != -1 &&
  !FUNC_1(VAR_2->cpu, &VAR_3->supported_cpus))
  return -VAR_0;


 if (FUNC_2(VAR_2))
  return -VAR_1;

 if (VAR_3->map_event(VAR_2) == -VAR_0)
  return -VAR_0;

 return FUNC_0(VAR_2);
}
