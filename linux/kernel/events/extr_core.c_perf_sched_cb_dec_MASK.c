
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int pmu_cpu_context; } ;
struct perf_cpu_context {int sched_cb_entry; int sched_cb_usage; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct perf_cpu_context* FUNC_2 (int ) ;

void FUNC_3(struct pmu *VAR_1)
{
 struct perf_cpu_context *VAR_2 = FUNC_2(VAR_1->pmu_cpu_context);

 FUNC_1(VAR_0);

 if (!--VAR_2->sched_cb_usage)
  FUNC_0(&VAR_2->sched_cb_entry);
}
