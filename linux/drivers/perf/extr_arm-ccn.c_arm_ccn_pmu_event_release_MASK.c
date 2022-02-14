
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int config; } ;
struct hw_perf_event {size_t idx; size_t config_base; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; int pmu; } ;
struct TYPE_6__ {int dt_cmp_mask; } ;
struct arm_ccn_component {int pmu_events_mask; TYPE_2__ xp; } ;
struct TYPE_8__ {TYPE_3__* pmu_counters; int pmu_counters_mask; } ;
struct arm_ccn {TYPE_4__ dt; } ;
struct TYPE_7__ {int * event; struct arm_ccn_component* source; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (size_t,int ) ;
 struct arm_ccn* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_3)
{
 struct arm_ccn *VAR_4 = FUNC_3(VAR_3->pmu);
 struct hw_perf_event *VAR_5 = &VAR_3->hw;

 if (VAR_5->idx == VAR_1) {
  FUNC_2(VAR_1, VAR_4->dt.pmu_counters_mask);
 } else {
  struct arm_ccn_component *VAR_6 =
    VAR_4->dt.pmu_counters[VAR_5->idx].source;

  if (FUNC_1(VAR_3->attr.config) == VAR_2 &&
    FUNC_0(VAR_3->attr.config) ==
    VAR_0)
   FUNC_2(VAR_5->config_base, VAR_6->xp.dt_cmp_mask);
  else
   FUNC_2(VAR_5->config_base, VAR_6->pmu_events_mask);
  FUNC_2(VAR_5->idx, VAR_4->dt.pmu_counters_mask);
 }

 VAR_4->dt.pmu_counters[VAR_5->idx].source = ((void*)0);
 VAR_4->dt.pmu_counters[VAR_5->idx].event = ((void*)0);
}
