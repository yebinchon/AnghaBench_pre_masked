
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct perf_event_context {int lock; scalar_t__ is_active; struct task_struct* task; int mutex; } ;
struct perf_event {int cpu; int parent; struct perf_event_context* ctx; } ;
struct event_function_struct {void* data; int (* func ) (struct perf_event*,int *,struct perf_event_context*,void*) ;struct perf_event* event; } ;
typedef int (* event_f ) (struct perf_event*,int *,struct perf_event_context*,void*) ;


 struct task_struct* FUNC_0 (struct task_struct*) ;
 struct task_struct* VAR_0 ;
 int FUNC_1 (int ,int ,struct event_function_struct*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct task_struct*,int ,struct event_function_struct*) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_2, event_f VAR_3, void *VAR_4)
{
 struct perf_event_context *VAR_5 = VAR_2->ctx;
 struct task_struct *VAR_6 = FUNC_0(VAR_5->task);
 struct event_function_struct VAR_7 = {
  .event = VAR_2,
  .func = VAR_3,
  .data = VAR_4,
 };

 if (!VAR_2->parent) {





  FUNC_2(&VAR_5->mutex);
 }

 if (!VAR_6) {
  FUNC_1(VAR_2->cpu, VAR_1, &VAR_7);
  return;
 }

 if (VAR_6 == VAR_0)
  return;

again:
 if (!FUNC_5(VAR_6, VAR_1, &VAR_7))
  return;

 FUNC_3(&VAR_5->lock);




 VAR_6 = VAR_5->task;
 if (VAR_6 == VAR_0) {
  FUNC_4(&VAR_5->lock);
  return;
 }
 if (VAR_5->is_active) {
  FUNC_4(&VAR_5->lock);
  goto again;
 }
 VAR_3(VAR_2, ((void*)0), VAR_5, VAR_4);
 FUNC_4(&VAR_5->lock);
}
