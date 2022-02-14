
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prev_count; } ;
struct perf_event {TYPE_2__* ctx; TYPE_1__ hw; } ;
struct TYPE_4__ {int time; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct perf_event*) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->hw.prev_count, VAR_0->ctx->time);
 FUNC_1(VAR_0);
}
