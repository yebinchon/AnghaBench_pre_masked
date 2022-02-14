
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int flexible_groups; scalar_t__ rotate_disable; } ;
struct perf_event {int dummy; } ;


 int FUNC_0 (int *,struct perf_event*) ;
 int FUNC_1 (int *,struct perf_event*) ;

__attribute__((used)) static void FUNC_2(struct perf_event_context *VAR_0, struct perf_event *VAR_1)
{




 if (VAR_0->rotate_disable)
  return;

 FUNC_0(&VAR_0->flexible_groups, VAR_1);
 FUNC_1(&VAR_0->flexible_groups, VAR_1);
}
