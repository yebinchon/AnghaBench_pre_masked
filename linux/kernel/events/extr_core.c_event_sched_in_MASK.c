
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct perf_event_context {int nr_freq; int nr_active; int lock; } ;
struct TYPE_6__ {scalar_t__ exclusive; scalar_t__ sample_freq; scalar_t__ freq; } ;
struct TYPE_5__ {scalar_t__ interrupts; } ;
struct perf_event {scalar_t__ state; int oncpu; TYPE_3__* pmu; TYPE_2__ attr; TYPE_1__ hw; } ;
struct perf_cpu_context {int exclusive; int active_oncpu; } ;
struct TYPE_7__ {scalar_t__ (* add ) (struct perf_event*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct perf_event_context*) ;
 int FUNC_4 (struct perf_event*,int ) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (struct perf_event*,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (struct perf_event*,int ) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int
FUNC_14(struct perf_event *VAR_6,
   struct perf_cpu_context *VAR_7,
   struct perf_event_context *VAR_8)
{
 int VAR_9 = 0;

 FUNC_2(&VAR_8->lock);

 if (VAR_6->state <= VAR_5)
  return 0;

 FUNC_0(VAR_6->oncpu, FUNC_10());





 FUNC_11();
 FUNC_4(VAR_6, VAR_3);






 if (FUNC_13(VAR_6->hw.interrupts == VAR_1)) {
  FUNC_6(VAR_6, 1);
  VAR_6->hw.interrupts = 0;
 }

 FUNC_7(VAR_6->pmu);

 FUNC_9(VAR_6, VAR_8);

 FUNC_5(VAR_6);

 if (VAR_6->pmu->add(VAR_6, VAR_2)) {
  FUNC_4(VAR_6, VAR_4);
  VAR_6->oncpu = -1;
  VAR_9 = -VAR_0;
  goto out;
 }

 if (!FUNC_1(VAR_6))
  VAR_7->active_oncpu++;
 if (!VAR_8->nr_active++)
  FUNC_3(VAR_8);
 if (VAR_6->attr.freq && VAR_6->attr.sample_freq)
  VAR_8->nr_freq++;

 if (VAR_6->attr.exclusive)
  VAR_7->exclusive = 1;

out:
 FUNC_8(VAR_6->pmu);

 return VAR_9;
}
