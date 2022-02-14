
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct task_struct {int dummy; } ;
struct perf_event_context {int is_active; int timestamp; scalar_t__ task; int nr_events; int lock; } ;
struct perf_cpu_context {struct perf_event_context* task_ctx; } ;
typedef enum event_type_t { ____Placeholder_event_type_t } event_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct perf_event_context*,struct perf_cpu_context*) ;
 int FUNC_2 (struct perf_event_context*,struct perf_cpu_context*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct task_struct*,struct perf_event_context*) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(struct perf_event_context *VAR_3,
      struct perf_cpu_context *VAR_4,
      enum event_type_t VAR_5,
      struct task_struct *VAR_6)
{
 int VAR_7 = VAR_3->is_active;
 u64 VAR_8;

 FUNC_4(&VAR_3->lock);

 if (FUNC_3(!VAR_3->nr_events))
  return;

 VAR_3->is_active |= (VAR_5 | VAR_2);
 if (VAR_3->task) {
  if (!VAR_7)
   VAR_4->task_ctx = VAR_3;
  else
   FUNC_0(VAR_4->task_ctx != VAR_3);
 }

 VAR_7 ^= VAR_3->is_active;

 if (VAR_7 & VAR_2) {

  VAR_8 = FUNC_6();
  VAR_3->timestamp = VAR_8;
  FUNC_5(VAR_6, VAR_3);
 }





 if (VAR_7 & VAR_1)
  FUNC_2(VAR_3, VAR_4);


 if (VAR_7 & VAR_0)
  FUNC_1(VAR_3, VAR_4);
}
