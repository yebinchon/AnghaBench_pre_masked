
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int tree; } ;
struct perf_event_context {int pmu; TYPE_1__ pinned_groups; int nr_events; } ;
struct perf_cpu_context {struct perf_event_context* task_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct perf_cpu_context* FUNC_1 (struct perf_event_context*) ;
 int FUNC_2 (struct perf_cpu_context*,int ) ;
 int FUNC_3 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_4 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_5 (struct perf_cpu_context*,struct perf_event_context*,struct task_struct*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct perf_event_context *VAR_1,
     struct task_struct *VAR_2)
{
 struct perf_cpu_context *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3->task_ctx == VAR_1)
  return;

 FUNC_3(VAR_3, VAR_1);




 if (!VAR_1->nr_events)
  goto unlock;

 FUNC_6(VAR_1->pmu);
 if (!FUNC_0(&VAR_1->pinned_groups.tree))
  FUNC_2(VAR_3, VAR_0);
 FUNC_5(VAR_3, VAR_1, VAR_2);
 FUNC_7(VAR_1->pmu);

unlock:
 FUNC_4(VAR_3, VAR_1);
}
