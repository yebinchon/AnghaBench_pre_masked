
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {TYPE_1__* pmu; } ;
struct TYPE_2__ {int (* aux_output_match ) (struct perf_event*) ;} ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;

__attribute__((used)) static int
FUNC_2(struct perf_event *VAR_0, struct perf_event *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return 0;

 if (!VAR_0->pmu->aux_output_match)
  return 0;

 return VAR_0->pmu->aux_output_match(VAR_1);
}
