
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_in_data {TYPE_1__* ctx; int cpuctx; int can_add_hw; } ;
struct perf_event {scalar_t__ state; int active_list; } ;
struct TYPE_2__ {int pinned_active; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (struct perf_event*,int ,int ) ;
 int FUNC_2 (struct perf_event*,int ,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct perf_event*,int ) ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_3, void *VAR_4)
{
 struct sched_in_data *VAR_5 = VAR_4;

 if (VAR_3->state <= VAR_2)
  return 0;

 if (!FUNC_0(VAR_3))
  return 0;

 if (FUNC_1(VAR_3, VAR_5->cpuctx, VAR_5->can_add_hw)) {
  if (!FUNC_2(VAR_3, VAR_5->cpuctx, VAR_5->ctx))
   FUNC_3(&VAR_3->active_list, &VAR_5->ctx->pinned_active);
 }





 if (VAR_3->state == VAR_1)
  FUNC_4(VAR_3, VAR_0);

 return 0;
}
