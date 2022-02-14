
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx2_uncore_pmu {int ** events; } ;
struct hw_perf_event {size_t idx; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;


 int FUNC_0 (struct perf_event*) ;
 int VAR_0 ;
 int FUNC_1 (struct tx2_uncore_pmu*,int ) ;
 int FUNC_2 (struct perf_event*) ;
 struct tx2_uncore_pmu* FUNC_3 (int ) ;
 int FUNC_4 (struct perf_event*,int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_1, int VAR_2)
{
 struct tx2_uncore_pmu *VAR_3 = FUNC_3(VAR_1->pmu);
 struct hw_perf_event *VAR_4 = &VAR_1->hw;

 FUNC_4(VAR_1, VAR_0);


 FUNC_1(VAR_3, FUNC_0(VAR_1));

 FUNC_2(VAR_1);
 VAR_3->events[VAR_4->idx] = ((void*)0);
 VAR_4->idx = -1;
}
