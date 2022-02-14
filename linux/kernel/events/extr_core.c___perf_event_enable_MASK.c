
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {scalar_t__ task; scalar_t__ is_active; } ;
struct perf_event {scalar_t__ state; struct perf_event* group_leader; } ;
struct perf_cpu_context {struct perf_event_context* task_ctx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct perf_cpu_context*,struct perf_event_context*,int ) ;
 int FUNC_2 (struct perf_event_context*,struct perf_cpu_context*,int ,int ) ;
 int FUNC_3 (struct perf_event_context*,struct perf_cpu_context*,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (struct perf_event*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_5,
    struct perf_cpu_context *VAR_6,
    struct perf_event_context *VAR_7,
    void *VAR_8)
{
 struct perf_event *VAR_9 = VAR_5->group_leader;
 struct perf_event_context *VAR_10;

 if (VAR_5->state >= VAR_3 ||
     VAR_5->state <= VAR_2)
  return;

 if (VAR_7->is_active)
  FUNC_3(VAR_7, VAR_6, VAR_0);

 FUNC_6(VAR_5, VAR_3);

 if (!VAR_7->is_active)
  return;

 if (!FUNC_4(VAR_5)) {
  FUNC_2(VAR_7, VAR_6, VAR_0, VAR_4);
  return;
 }





 if (VAR_9 != VAR_5 && VAR_9->state != VAR_1) {
  FUNC_2(VAR_7, VAR_6, VAR_0, VAR_4);
  return;
 }

 VAR_10 = VAR_6->task_ctx;
 if (VAR_7->task)
  FUNC_0(VAR_10 != VAR_7);

 FUNC_1(VAR_6, VAR_10, FUNC_5(VAR_5));
}
