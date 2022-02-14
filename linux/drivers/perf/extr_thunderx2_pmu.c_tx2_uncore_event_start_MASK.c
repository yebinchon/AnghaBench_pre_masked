
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx2_uncore_pmu {int hrtimer_interval; int hrtimer; int max_counters; int active_counters; int (* start_event ) (struct perf_event*,int) ;} ;
struct hw_perf_event {scalar_t__ state; } ;
struct perf_event {int pmu; struct hw_perf_event hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct perf_event*) ;
 struct tx2_uncore_pmu* FUNC_4 (int ) ;
 int FUNC_5 (struct perf_event*,int) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_1, int VAR_2)
{
 struct hw_perf_event *VAR_3 = &VAR_1->hw;
 struct tx2_uncore_pmu *VAR_4;

 VAR_3->state = 0;
 VAR_4 = FUNC_4(VAR_1->pmu);

 VAR_4->start_event(VAR_1, VAR_2);
 FUNC_3(VAR_1);


 if (FUNC_0(VAR_4->active_counters,
    VAR_4->max_counters) == 1) {
  FUNC_1(&VAR_4->hrtimer,
   FUNC_2(VAR_4->hrtimer_interval),
   VAR_0);
 }
}
