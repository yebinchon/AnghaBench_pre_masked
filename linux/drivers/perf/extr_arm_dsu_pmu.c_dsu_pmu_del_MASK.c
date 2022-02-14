
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct dsu_hw_events {int used_mask; int ** events; } ;
struct dsu_pmu {struct dsu_hw_events hw_events; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct perf_event*,int ) ;
 int FUNC_2 (struct perf_event*) ;
 struct dsu_pmu* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_1, int VAR_2)
{
 struct dsu_pmu *VAR_3 = FUNC_3(VAR_1->pmu);
 struct dsu_hw_events *VAR_4 = &VAR_3->hw_events;
 struct hw_perf_event *VAR_5 = &VAR_1->hw;
 int VAR_6 = VAR_5->idx;

 FUNC_1(VAR_1, VAR_0);
 VAR_4->events[VAR_6] = ((void*)0);
 FUNC_0(VAR_6, VAR_4->used_mask);
 FUNC_2(VAR_1);
}
