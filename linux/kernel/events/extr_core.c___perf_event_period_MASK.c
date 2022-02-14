
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct perf_event_context {int pmu; } ;
struct TYPE_5__ {scalar_t__ interrupts; int period_left; void* sample_period; } ;
struct TYPE_4__ {void* sample_period; void* sample_freq; scalar_t__ freq; } ;
struct perf_event {scalar_t__ state; TYPE_3__* pmu; TYPE_2__ hw; TYPE_1__ attr; } ;
struct perf_cpu_context {int dummy; } ;
struct TYPE_6__ {int (* start ) (struct perf_event*,int ) ;int (* stop ) (struct perf_event*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct perf_event*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct perf_event*,int ) ;
 int FUNC_5 (struct perf_event*,int ) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_4,
    struct perf_cpu_context *VAR_5,
    struct perf_event_context *VAR_6,
    void *VAR_7)
{
 u64 VAR_8 = *((u64 *)VAR_7);
 bool VAR_9;

 if (VAR_4->attr.freq) {
  VAR_4->attr.sample_freq = VAR_8;
 } else {
  VAR_4->attr.sample_period = VAR_8;
  VAR_4->hw.sample_period = VAR_8;
 }

 VAR_9 = (VAR_4->state == VAR_3);
 if (VAR_9) {
  FUNC_2(VAR_6->pmu);




  if (VAR_4->hw.interrupts == VAR_0) {
   VAR_4->hw.interrupts = 0;
   FUNC_1(VAR_4, 1);
  }
  VAR_4->pmu->stop(VAR_4, VAR_2);
 }

 FUNC_0(&VAR_4->hw.period_left, 0);

 if (VAR_9) {
  VAR_4->pmu->start(VAR_4, VAR_1);
  FUNC_3(VAR_6->pmu);
 }
}
