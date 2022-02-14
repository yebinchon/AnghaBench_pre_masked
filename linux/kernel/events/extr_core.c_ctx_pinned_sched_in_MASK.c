
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_in_data {int can_add_hw; struct perf_cpu_context* cpuctx; struct perf_event_context* ctx; } ;
struct perf_event_context {int pinned_groups; } ;
struct perf_cpu_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int ,struct sched_in_data*) ;

__attribute__((used)) static void
FUNC_2(struct perf_event_context *VAR_1,
      struct perf_cpu_context *VAR_2)
{
 struct sched_in_data VAR_3 = {
  .ctx = VAR_1,
  .cpuctx = VAR_2,
  .can_add_hw = 1,
 };

 FUNC_1(&VAR_1->pinned_groups,
      FUNC_0(),
      VAR_0, &VAR_3);
}
