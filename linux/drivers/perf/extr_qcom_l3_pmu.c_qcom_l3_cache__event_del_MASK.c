
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {size_t idx; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct l3cache_pmu {int used_mask; int ** events; } ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t,int) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*,int) ;
 struct l3cache_pmu* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_1, int VAR_2)
{
 struct l3cache_pmu *VAR_3 = FUNC_4(VAR_1->pmu);
 struct hw_perf_event *VAR_4 = &VAR_1->hw;
 int VAR_5 = FUNC_1(VAR_1) ? 1 : 0;


 FUNC_3(VAR_1, VAR_2 | VAR_0);
 VAR_3->events[VAR_4->idx] = ((void*)0);
 FUNC_0(VAR_3->used_mask, VAR_4->idx, VAR_5);


 FUNC_2(VAR_1);
}
