
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct perf_event_context {scalar_t__ is_active; struct task_struct* task; } ;
struct perf_event {struct perf_event_context* ctx; } ;
struct perf_cpu_context {struct perf_event_context ctx; struct perf_event_context* task_ctx; } ;
typedef int (* event_f ) (struct perf_event*,struct perf_cpu_context*,struct perf_event_context*,void*) ;


 struct task_struct* FUNC_0 (struct task_struct*) ;
 struct task_struct* VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 struct perf_cpu_context* FUNC_2 (struct perf_event_context*) ;
 struct task_struct* VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_5 (struct perf_cpu_context*,struct perf_event_context*) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_2, event_f VAR_3, void *VAR_4)
{
 struct perf_event_context *VAR_5 = VAR_2->ctx;
 struct perf_cpu_context *VAR_6 = FUNC_2(VAR_5);
 struct task_struct *VAR_7 = FUNC_0(VAR_5->task);
 struct perf_event_context *VAR_8 = ((void*)0);

 FUNC_3();

 if (VAR_7) {
  if (VAR_7 == VAR_0)
   return;

  VAR_8 = VAR_5;
 }

 FUNC_4(VAR_6, VAR_8);

 VAR_7 = VAR_5->task;
 if (VAR_7 == VAR_0)
  goto unlock;

 if (VAR_7) {





  if (VAR_5->is_active) {
   if (FUNC_1(VAR_7 != VAR_1))
    goto unlock;

   if (FUNC_1(VAR_6->task_ctx != VAR_5))
    goto unlock;
  }
 } else {
  FUNC_1(&VAR_6->ctx != VAR_5);
 }

 VAR_3(VAR_2, VAR_6, VAR_5, VAR_4);
unlock:
 FUNC_5(VAR_6, VAR_8);
}
