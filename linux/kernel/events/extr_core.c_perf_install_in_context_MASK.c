
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct perf_event_context {int lock; struct task_struct* task; int mutex; } ;
struct perf_event {int cpu; int ctx; } ;


 struct task_struct* FUNC_0 (struct task_struct*) ;
 struct task_struct* VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_3 (int,int ,struct perf_event*) ;
 int FUNC_4 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,struct perf_event_context*) ;
 scalar_t__ FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct task_struct*,int ,struct perf_event*) ;

__attribute__((used)) static void
FUNC_12(struct perf_event_context *VAR_2,
   struct perf_event *VAR_3,
   int VAR_4)
{
 struct task_struct *VAR_5 = FUNC_0(VAR_2->task);

 FUNC_5(&VAR_2->mutex);

 FUNC_1(!FUNC_4(VAR_3, VAR_2));

 if (VAR_3->cpu != -1)
  VAR_3->cpu = VAR_4;





 FUNC_9(&VAR_3->ctx, VAR_2);

 if (!VAR_5) {
  FUNC_3(VAR_4, VAR_1, VAR_3);
  return;
 }




 if (FUNC_1(VAR_5 == VAR_0))
  return;
 FUNC_8();
again:
 if (!FUNC_11(VAR_5, VAR_1, VAR_3))
  return;

 FUNC_6(&VAR_2->lock);
 VAR_5 = VAR_2->task;
 if (FUNC_1(VAR_5 == VAR_0)) {





  FUNC_7(&VAR_2->lock);
  return;
 }




 if (FUNC_10(VAR_5)) {
  FUNC_7(&VAR_2->lock);
  goto again;
 }
 FUNC_2(VAR_3, VAR_2);
 FUNC_7(&VAR_2->lock);
}
