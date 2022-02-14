
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct perf_event_context** perf_event_ctxp; } ;
struct perf_event_context {int lock; int task_ctx_data; int task; int parent_ctx; } ;
struct perf_cpu_context {int task_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event_context*,struct perf_event_context*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct task_struct*) ;
 struct perf_cpu_context* FUNC_2 (struct perf_event_context*) ;
 scalar_t__ FUNC_3 (struct perf_event_context*,struct perf_event_context*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct perf_event_context*,struct perf_event_context*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 struct perf_event_context* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct perf_cpu_context*,struct perf_event_context*,int ) ;

__attribute__((used)) static void FUNC_14(struct task_struct *VAR_2, int VAR_3,
      struct task_struct *VAR_4)
{
 struct perf_event_context *VAR_5 = VAR_2->perf_event_ctxp[VAR_3];
 struct perf_event_context *VAR_6;
 struct perf_event_context *VAR_7, *VAR_8;
 struct perf_cpu_context *VAR_9;
 int VAR_10 = 1;

 if (FUNC_4(!VAR_5))
  return;

 VAR_9 = FUNC_2(VAR_5);
 if (!VAR_9->task_ctx)
  return;

 FUNC_10();
 VAR_6 = VAR_4->perf_event_ctxp[VAR_3];
 if (!VAR_6)
  goto unlock;

 VAR_7 = FUNC_9(VAR_5->parent_ctx);
 VAR_8 = FUNC_9(VAR_6->parent_ctx);


 if (!VAR_7 && !VAR_8)
  goto unlock;

 if (VAR_8 == VAR_5 || VAR_6 == VAR_7 || VAR_8 == VAR_7) {
  FUNC_6(&VAR_5->lock);
  FUNC_7(&VAR_6->lock, VAR_1);
  if (FUNC_3(VAR_5, VAR_6)) {
   FUNC_1(VAR_5->task, VAR_4);
   FUNC_1(VAR_6->task, VAR_2);

   FUNC_12(VAR_5->task_ctx_data, VAR_6->task_ctx_data);
   FUNC_0(VAR_2->perf_event_ctxp[VAR_3], VAR_6);
   FUNC_0(VAR_4->perf_event_ctxp[VAR_3], VAR_5);

   VAR_10 = 0;

   FUNC_5(VAR_5, VAR_6);
  }
  FUNC_8(&VAR_6->lock);
  FUNC_8(&VAR_5->lock);
 }
unlock:
 FUNC_11();

 if (VAR_10) {
  FUNC_6(&VAR_5->lock);
  FUNC_13(VAR_9, VAR_5, VAR_0);
  FUNC_8(&VAR_5->lock);
 }
}
