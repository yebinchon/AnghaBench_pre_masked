
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_hw_events {int ** events; } ;
struct hw_perf_event {int idx; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct arm_pmu {int (* clear_event_idx ) (struct pmu_hw_events*,struct perf_event*) ;int hw_events; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct pmu_hw_events*,struct perf_event*) ;
 struct pmu_hw_events* FUNC_3 (int ) ;
 struct arm_pmu* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct perf_event *VAR_1, int VAR_2)
{
 struct arm_pmu *VAR_3 = FUNC_4(VAR_1->pmu);
 struct pmu_hw_events *VAR_4 = FUNC_3(VAR_3->hw_events);
 struct hw_perf_event *VAR_5 = &VAR_1->hw;
 int VAR_6 = VAR_5->idx;

 FUNC_0(VAR_1, VAR_0);
 VAR_4->events[VAR_6] = ((void*)0);
 VAR_3->clear_event_idx(VAR_4, VAR_1);
 FUNC_1(VAR_1);

 VAR_5->idx = -1;
}
