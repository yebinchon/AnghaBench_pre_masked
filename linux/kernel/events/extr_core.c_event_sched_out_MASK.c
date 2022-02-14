
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_event_context {int nr_freq; int nr_active; int lock; } ;
struct TYPE_4__ {scalar_t__ exclusive; scalar_t__ sample_freq; scalar_t__ freq; } ;
struct perf_event {scalar_t__ state; int oncpu; TYPE_2__* pmu; TYPE_1__ attr; int pending_disable; int active_list; struct perf_event_context* ctx; } ;
struct perf_cpu_context {scalar_t__ exclusive; int active_oncpu; } ;
typedef enum perf_event_state { ____Placeholder_perf_event_state } perf_event_state ;
struct TYPE_5__ {int (* del ) (struct perf_event*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct perf_event_context*) ;
 int FUNC_7 (struct perf_event*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct perf_event*,int ) ;

__attribute__((used)) static void
FUNC_11(struct perf_event *VAR_3,
    struct perf_cpu_context *VAR_4,
    struct perf_event_context *VAR_5)
{
 enum perf_event_state VAR_6 = VAR_1;

 FUNC_1(VAR_3->ctx != VAR_5);
 FUNC_5(&VAR_5->lock);

 if (VAR_3->state != VAR_0)
  return;






 FUNC_4(&VAR_3->active_list);

 FUNC_8(VAR_3->pmu);

 VAR_3->pmu->del(VAR_3, 0);
 VAR_3->oncpu = -1;

 if (FUNC_0(VAR_3->pending_disable) >= 0) {
  FUNC_2(VAR_3->pending_disable, -1);
  VAR_6 = VAR_2;
 }
 FUNC_7(VAR_3, VAR_6);

 if (!FUNC_3(VAR_3))
  VAR_4->active_oncpu--;
 if (!--VAR_5->nr_active)
  FUNC_6(VAR_5);
 if (VAR_3->attr.freq && VAR_3->attr.sample_freq)
  VAR_5->nr_freq--;
 if (VAR_3->attr.exclusive || !VAR_4->active_oncpu)
  VAR_4->exclusive = 0;

 FUNC_9(VAR_3->pmu);
}
