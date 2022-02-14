
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int state; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct dsu_hw_events {struct perf_event** events; } ;
struct dsu_pmu {int associated_cpus; struct dsu_hw_events hw_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dsu_hw_events*,struct perf_event*) ;
 int FUNC_3 (struct perf_event*,int ) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 () ;
 struct dsu_pmu* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct perf_event *VAR_5, int VAR_6)
{
 struct dsu_pmu *VAR_7 = FUNC_6(VAR_5->pmu);
 struct dsu_hw_events *VAR_8 = &VAR_7->hw_events;
 struct hw_perf_event *VAR_9 = &VAR_5->hw;
 int VAR_10;

 if (FUNC_0(!FUNC_1(FUNC_5(),
        &VAR_7->associated_cpus)))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_8, VAR_5);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9->idx = VAR_10;
 VAR_8->events[VAR_10] = VAR_5;
 VAR_9->state = VAR_3 | VAR_4;

 if (VAR_6 & VAR_2)
  FUNC_3(VAR_5, VAR_1);

 FUNC_4(VAR_5);
 return 0;
}
