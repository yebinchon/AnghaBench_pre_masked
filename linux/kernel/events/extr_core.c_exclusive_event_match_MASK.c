
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {scalar_t__ pmu; int cpu; } ;



__attribute__((used)) static bool FUNC_0(struct perf_event *VAR_0, struct perf_event *VAR_1)
{
 if ((VAR_0->pmu == VAR_1->pmu) &&
     (VAR_0->cpu == VAR_1->cpu ||
      VAR_0->cpu == -1 ||
      VAR_1->cpu == -1))
  return 1;
 return 0;
}
