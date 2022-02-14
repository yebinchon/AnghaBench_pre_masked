
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct ddr_pmu {int active_events; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int FUNC_1 (struct ddr_pmu*,int) ;
 struct ddr_pmu* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_1, int VAR_2)
{
 struct ddr_pmu *VAR_3 = FUNC_2(VAR_1->pmu);
 struct hw_perf_event *VAR_4 = &VAR_1->hw;
 int VAR_5 = VAR_4->idx;

 FUNC_0(VAR_1, VAR_0);

 FUNC_1(VAR_3, VAR_5);
 VAR_3->active_events--;
 VAR_4->idx = -1;
}
