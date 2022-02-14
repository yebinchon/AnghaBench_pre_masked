
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_context {TYPE_1__* pmu; } ;
struct perf_cpu_context {int dummy; } ;
struct TYPE_2__ {int pmu_cpu_context; } ;


 struct perf_cpu_context* FUNC_0 (int ) ;

__attribute__((used)) static inline struct perf_cpu_context *
FUNC_1(struct perf_event_context *VAR_0)
{
 return FUNC_0(VAR_0->pmu->pmu_cpu_context);
}
