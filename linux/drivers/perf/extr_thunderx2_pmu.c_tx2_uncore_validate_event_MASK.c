
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct perf_event {struct pmu* pmu; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;

__attribute__((used)) static bool FUNC_1(struct pmu *VAR_0,
      struct perf_event *VAR_1, int *VAR_2)
{
 if (FUNC_0(VAR_1))
  return 1;

 if (VAR_1->pmu != VAR_0)
  return 0;

 *VAR_2 = *VAR_2 + 1;
 return 1;
}
