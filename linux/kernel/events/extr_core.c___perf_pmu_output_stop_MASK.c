
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct remote_output {int err; int rb; } ;
struct pmu {int pmu_cpu_context; } ;
struct perf_event {int rb; TYPE_1__* ctx; } ;
struct perf_cpu_context {int * task_ctx; int ctx; } ;
struct TYPE_2__ {struct pmu* pmu; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct remote_output*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct perf_cpu_context* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 struct perf_event *VAR_2 = VAR_1;
 struct pmu *VAR_3 = VAR_2->ctx->pmu;
 struct perf_cpu_context *VAR_4 = FUNC_3(VAR_3->pmu_cpu_context);
 struct remote_output VAR_5 = {
  .rb = VAR_2->rb,
 };

 FUNC_1();
 FUNC_0(&VAR_4->ctx, VAR_0, &VAR_5, 0);
 if (VAR_4->task_ctx)
  FUNC_0(VAR_4->task_ctx, VAR_0,
       &VAR_5, 0);
 FUNC_2();

 return VAR_5.err;
}
