
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {scalar_t__ pmu; } ;
struct TYPE_2__ {scalar_t__ global_filter; } ;


 int FUNC_0 (struct perf_event*,struct perf_event*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct perf_event *VAR_0,
           struct perf_event *VAR_1)
{
 if (VAR_1->pmu != VAR_0->pmu)
  return 0;

 if (FUNC_1(VAR_1->pmu)->global_filter &&
     !FUNC_0(VAR_0, VAR_1))
  return 0;

 return 1;
}
