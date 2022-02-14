
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_context {int lock; } ;
struct TYPE_2__ {int lock; } ;
struct perf_cpu_context {TYPE_1__ ctx; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct perf_cpu_context *VAR_0,
       struct perf_event_context *VAR_1)
{
 if (VAR_1)
  FUNC_0(&VAR_1->lock);
 FUNC_0(&VAR_0->ctx.lock);
}
