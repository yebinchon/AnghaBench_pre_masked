
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_event_attr {int dummy; } ;
struct TYPE_4__ {int disabled; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__* ctx; } ;
struct TYPE_3__ {scalar_t__ task; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct perf_event*,struct perf_event_attr*,int) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;

int FUNC_5(struct perf_event *VAR_1, struct perf_event_attr *VAR_2)
{
 int VAR_3;







 if (FUNC_0() && VAR_1->ctx && VAR_1->ctx->task == VAR_0)
  FUNC_3(VAR_1);
 else
  FUNC_2(VAR_1);

 VAR_3 = FUNC_1(VAR_1, VAR_2, 0);

 if (!VAR_1->attr.disabled)
  FUNC_4(VAR_1);

 return VAR_3;
}
