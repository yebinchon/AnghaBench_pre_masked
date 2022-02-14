
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx2_uncore_pmu {int (* init_cntr_base ) (struct perf_event*,struct tx2_uncore_pmu*) ;struct perf_event** events; } ;
struct hw_perf_event {size_t idx; int state; } ;
struct perf_event {int pmu; struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct tx2_uncore_pmu*) ;
 struct tx2_uncore_pmu* FUNC_1 (int ) ;
 int FUNC_2 (struct perf_event*,struct tx2_uncore_pmu*) ;
 int FUNC_3 (struct perf_event*,int) ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_4, int VAR_5)
{
 struct hw_perf_event *VAR_6 = &VAR_4->hw;
 struct tx2_uncore_pmu *VAR_7;

 VAR_7 = FUNC_1(VAR_4->pmu);


 VAR_6->idx = FUNC_0(VAR_7);
 if (VAR_6->idx < 0)
  return -VAR_0;

 VAR_7->events[VAR_6->idx] = VAR_4;

 VAR_7->init_cntr_base(VAR_4, VAR_7);

 VAR_6->state = VAR_3 | VAR_2;
 if (VAR_5 & VAR_1)
  FUNC_3(VAR_4, VAR_5);

 return 0;
}
