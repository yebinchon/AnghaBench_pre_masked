
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx2_uncore_pmu {int (* stop_event ) (struct perf_event*) ;} ;
struct hw_perf_event {int state; } ;
struct perf_event {int pmu; struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct tx2_uncore_pmu* FUNC_1 (int ) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_3, int VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_3->hw;
 struct tx2_uncore_pmu *VAR_6;

 if (VAR_5->state & VAR_2)
  return;

 VAR_6 = FUNC_1(VAR_3->pmu);
 VAR_6->stop_event(VAR_3);
 FUNC_0(VAR_5->state & VAR_1);
 VAR_5->state |= VAR_1;
 if (VAR_4 & VAR_0) {
  FUNC_3(VAR_3);
  VAR_5->state |= VAR_2;
 }
}
