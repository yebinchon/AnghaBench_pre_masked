
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_hw_events {struct perf_event** events; } ;
struct hw_perf_event {int idx; int state; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct arm_pmu {int (* get_event_idx ) (struct pmu_hw_events*,struct perf_event*) ;int (* disable ) (struct perf_event*) ;int supported_cpus; int hw_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pmu_hw_events*,struct perf_event*) ;
 int FUNC_5 (struct perf_event*) ;
 struct pmu_hw_events* FUNC_6 (int ) ;
 struct arm_pmu* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct perf_event *VAR_5, int VAR_6)
{
 struct arm_pmu *VAR_7 = FUNC_7(VAR_5->pmu);
 struct pmu_hw_events *VAR_8 = FUNC_6(VAR_7->hw_events);
 struct hw_perf_event *VAR_9 = &VAR_5->hw;
 int VAR_10;


 if (!FUNC_1(FUNC_3(), &VAR_7->supported_cpus))
  return -VAR_0;


 VAR_10 = VAR_7->get_event_idx(VAR_8, VAR_5);
 if (VAR_10 < 0)
  return VAR_10;





 VAR_5->hw.idx = VAR_10;
 VAR_7->disable(VAR_5);
 VAR_8->events[VAR_10] = VAR_5;

 VAR_9->state = VAR_3 | VAR_4;
 if (VAR_6 & VAR_2)
  FUNC_0(VAR_5, VAR_1);


 FUNC_2(VAR_5);

 return 0;
}
