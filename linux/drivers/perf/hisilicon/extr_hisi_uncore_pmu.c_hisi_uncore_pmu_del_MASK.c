
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {size_t idx; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct TYPE_2__ {int ** hw_events; } ;
struct hisi_pmu {TYPE_1__ pmu_events; } ;


 int VAR_0 ;
 int FUNC_0 (struct hisi_pmu*,size_t) ;
 int FUNC_1 (struct perf_event*,int ) ;
 int FUNC_2 (struct perf_event*) ;
 struct hisi_pmu* FUNC_3 (int ) ;

void FUNC_4(struct perf_event *VAR_1, int VAR_2)
{
 struct hisi_pmu *VAR_3 = FUNC_3(VAR_1->pmu);
 struct hw_perf_event *VAR_4 = &VAR_1->hw;

 FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_3, VAR_4->idx);
 FUNC_2(VAR_1);
 VAR_3->pmu_events.hw_events[VAR_4->idx] = ((void*)0);
}
