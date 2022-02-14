
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; } ;
struct perf_event {int cpu; int pmu; struct hw_perf_event hw; } ;
struct cluster_pmu {int ** events; } ;


 int VAR_0 ;
 struct cluster_pmu* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct cluster_pmu*,struct perf_event*) ;
 int FUNC_2 (struct perf_event*,int) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_1, int VAR_2)
{
 struct hw_perf_event *VAR_3 = &VAR_1->hw;
 struct cluster_pmu *VAR_4;
 int VAR_5 = VAR_3->idx;

 VAR_4 = FUNC_0(FUNC_4(VAR_1->pmu), VAR_1->cpu);

 FUNC_2(VAR_1, VAR_2 | VAR_0);
 VAR_4->events[VAR_5] = ((void*)0);
 FUNC_1(VAR_4, VAR_1);

 FUNC_3(VAR_1);
}
