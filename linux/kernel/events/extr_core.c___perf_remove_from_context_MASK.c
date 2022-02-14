
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int is_active; scalar_t__ task; int nr_events; } ;
struct perf_event {int dummy; } ;
struct perf_cpu_context {struct perf_event_context* task_ctx; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct perf_event*,struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_2 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_cpu_context*) ;
 int FUNC_5 (struct perf_event_context*) ;

__attribute__((used)) static void
FUNC_6(struct perf_event *VAR_2,
      struct perf_cpu_context *VAR_3,
      struct perf_event_context *VAR_4,
      void *VAR_5)
{
 unsigned long VAR_6 = (unsigned long)VAR_5;

 if (VAR_4->is_active & VAR_1) {
  FUNC_5(VAR_4);
  FUNC_4(VAR_3);
 }

 FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_6 & VAR_0)
  FUNC_3(VAR_2);
 FUNC_2(VAR_2, VAR_4);

 if (!VAR_4->nr_events && VAR_4->is_active) {
  VAR_4->is_active = 0;
  if (VAR_4->task) {
   FUNC_0(VAR_3->task_ctx != VAR_4);
   VAR_3->task_ctx = ((void*)0);
  }
 }
}
