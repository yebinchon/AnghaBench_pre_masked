
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int dummy; } ;
struct perf_cpu_context {struct perf_event_context* task_ctx; } ;
typedef enum event_type_t { ____Placeholder_event_type_t } event_type_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct perf_event_context*,struct perf_cpu_context*,int) ;

__attribute__((used)) static void FUNC_2(struct perf_cpu_context *VAR_0,
          struct perf_event_context *VAR_1,
          enum event_type_t VAR_2)
{
 if (!VAR_0->task_ctx)
  return;

 if (FUNC_0(VAR_1 != VAR_0->task_ctx))
  return;

 FUNC_1(VAR_1, VAR_0, VAR_2);
}
