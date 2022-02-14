
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int pmu_cpu_context; } ;
struct perf_event_context {int dummy; } ;
struct perf_cpu_context {struct perf_event_context* task_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_cpu_context*,struct perf_event_context*,int) ;
 int FUNC_1 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_2 (struct perf_cpu_context*,struct perf_event_context*) ;
 struct perf_cpu_context* FUNC_3 (int ) ;

void FUNC_4(struct pmu *VAR_2)
{
 struct perf_cpu_context *VAR_3 = FUNC_3(VAR_2->pmu_cpu_context);
 struct perf_event_context *VAR_4 = VAR_3->task_ctx;

 FUNC_1(VAR_3, VAR_4);
 FUNC_0(VAR_3, VAR_4, VAR_0|VAR_1);
 FUNC_2(VAR_3, VAR_4);
}
