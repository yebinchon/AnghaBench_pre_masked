
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_in_data {TYPE_1__* ctx; scalar_t__ can_add_hw; int cpuctx; } ;
struct perf_event {scalar_t__ state; int active_list; } ;
struct TYPE_2__ {int rotate_necessary; int flexible_active; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (struct perf_event*,int ,scalar_t__) ;
 int FUNC_2 (struct perf_event*,int ,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_1, void *VAR_2)
{
 struct sched_in_data *VAR_3 = VAR_2;

 if (VAR_1->state <= VAR_0)
  return 0;

 if (!FUNC_0(VAR_1))
  return 0;

 if (FUNC_1(VAR_1, VAR_3->cpuctx, VAR_3->can_add_hw)) {
  int VAR_4 = FUNC_2(VAR_1, VAR_3->cpuctx, VAR_3->ctx);
  if (VAR_4) {
   VAR_3->can_add_hw = 0;
   VAR_3->ctx->rotate_necessary = 1;
   return 0;
  }
  FUNC_3(&VAR_1->active_list, &VAR_3->ctx->flexible_active);
 }

 return 0;
}
