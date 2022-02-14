
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx2_uncore_pmu {scalar_t__ base; } ;
struct hw_perf_event {scalar_t__ event_base; scalar_t__ config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int FUNC_0 (struct perf_event*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct perf_event *VAR_2,
  struct tx2_uncore_pmu *VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_2->hw;


 VAR_4->config_base = (unsigned long)VAR_3->base
  + VAR_0 + (8 * FUNC_0(VAR_2));
 VAR_4->event_base = (unsigned long)VAR_3->base
  + VAR_1 + (8 * FUNC_0(VAR_2));
}
