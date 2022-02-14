
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct perf_event {struct pmu* pmu; } ;
struct dsu_hw_events {int dummy; } ;


 scalar_t__ FUNC_0 (struct dsu_hw_events*,struct perf_event*) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;

__attribute__((used)) static bool FUNC_2(struct pmu *VAR_0,
      struct dsu_hw_events *VAR_1,
      struct perf_event *VAR_2)
{
 if (FUNC_1(VAR_2))
  return 1;

 if (VAR_2->pmu != VAR_0)
  return 0;
 return FUNC_0(VAR_1, VAR_2) >= 0;
}
