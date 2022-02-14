
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int is_active; } ;
struct perf_event {scalar_t__ state; struct perf_event* group_leader; } ;
struct perf_cpu_context {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_event*,struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_1 (struct perf_event*,struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_2 (struct perf_event*,int ) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event_context*) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_3,
     struct perf_cpu_context *VAR_4,
     struct perf_event_context *VAR_5,
     void *VAR_6)
{
 if (VAR_3->state < VAR_1)
  return;

 if (VAR_5->is_active & VAR_0) {
  FUNC_4(VAR_5);
  FUNC_3(VAR_3);
 }

 if (VAR_3 == VAR_3->group_leader)
  FUNC_1(VAR_3, VAR_4, VAR_5);
 else
  FUNC_0(VAR_3, VAR_4, VAR_5);

 FUNC_2(VAR_3, VAR_2);
}
