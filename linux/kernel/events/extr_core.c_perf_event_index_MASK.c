
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct perf_event {scalar_t__ state; TYPE_2__* pmu; TYPE_1__ hw; } ;
struct TYPE_4__ {int (* event_idx ) (struct perf_event*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event*) ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_2)
{
 if (VAR_2->hw.state & VAR_1)
  return 0;

 if (VAR_2->state != VAR_0)
  return 0;

 return VAR_2->pmu->event_idx(VAR_2);
}
