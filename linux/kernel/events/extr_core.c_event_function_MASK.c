
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {scalar_t__ task; int is_active; } ;
struct perf_event {struct perf_event_context* ctx; } ;
struct perf_cpu_context {struct perf_event_context ctx; struct perf_event_context* task_ctx; } ;
struct event_function_struct {int data; int (* func ) (struct perf_event*,struct perf_cpu_context*,struct perf_event_context*,int ) ;struct perf_event* event; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct perf_cpu_context* FUNC_1 (struct perf_event_context*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_4 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_5 (struct perf_event*,struct perf_cpu_context*,struct perf_event_context*,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_2)
{
 struct event_function_struct *VAR_3 = VAR_2;
 struct perf_event *VAR_4 = VAR_3->event;
 struct perf_event_context *VAR_5 = VAR_4->ctx;
 struct perf_cpu_context *VAR_6 = FUNC_1(VAR_5);
 struct perf_event_context *VAR_7 = VAR_6->task_ctx;
 int VAR_8 = 0;

 FUNC_2();

 FUNC_3(VAR_6, VAR_7);




 if (VAR_5->task) {
  if (VAR_5->task != VAR_1) {
   VAR_8 = -VAR_0;
   goto unlock;
  }
  FUNC_0(!VAR_5->is_active);




  FUNC_0(VAR_7 != VAR_5);
 } else {
  FUNC_0(&VAR_6->ctx != VAR_5);
 }

 VAR_3->func(VAR_4, VAR_6, VAR_5, VAR_3->data);
unlock:
 FUNC_4(VAR_6, VAR_7);

 return VAR_8;
}
