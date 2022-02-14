
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int config; } ;
struct hw_perf_event {size_t idx; int config_base; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; int pmu; } ;
struct TYPE_6__ {int dt_cmp_mask; } ;
struct arm_ccn_component {int pmu_events_mask; TYPE_2__ xp; } ;
struct TYPE_8__ {TYPE_3__* pmu_counters; int pmu_counters_mask; } ;
struct arm_ccn {TYPE_4__ dt; int dev; struct arm_ccn_component* node; struct arm_ccn_component* xp; } ;
struct TYPE_7__ {struct perf_event* event; struct arm_ccn_component* source; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (size_t,int ) ;
 int FUNC_5 (int ,char*,...) ;
 struct arm_ccn* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (size_t,int ) ;

__attribute__((used)) static int FUNC_8(struct perf_event *VAR_8)
{
 struct arm_ccn *VAR_9 = FUNC_6(VAR_8->pmu);
 struct hw_perf_event *VAR_10 = &VAR_8->hw;
 u32 VAR_11, VAR_12, VAR_13;
 struct arm_ccn_component *VAR_14;
 int VAR_15;

 VAR_11 = FUNC_1(VAR_8->attr.config);
 VAR_12 = FUNC_2(VAR_8->attr.config);
 VAR_13 = FUNC_0(VAR_8->attr.config);


 if (VAR_12 == VAR_5) {
  if (FUNC_7(VAR_1,
    VAR_9->dt.pmu_counters_mask))
   return -VAR_7;

  VAR_10->idx = VAR_1;
  VAR_9->dt.pmu_counters[VAR_1].event = VAR_8;

  return 0;
 }


 VAR_10->idx = FUNC_3(VAR_9->dt.pmu_counters_mask,
   VAR_3);
 if (VAR_10->idx < 0) {
  FUNC_5(VAR_9->dev, "No more counters available!\n");
  return -VAR_7;
 }

 if (VAR_12 == VAR_6)
  VAR_14 = &VAR_9->xp[VAR_11];
 else
  VAR_14 = &VAR_9->node[VAR_11];
 VAR_9->dt.pmu_counters[VAR_10->idx].source = VAR_14;


 if (VAR_12 == VAR_6 && VAR_13 == VAR_0)
  VAR_15 = FUNC_3(VAR_14->xp.dt_cmp_mask,
    VAR_4);
 else
  VAR_15 = FUNC_3(VAR_14->pmu_events_mask,
    VAR_2);
 if (VAR_15 < 0) {
  FUNC_5(VAR_9->dev, "No more event sources/watchpoints on node/XP %d!\n",
    VAR_11);
  FUNC_4(VAR_10->idx, VAR_9->dt.pmu_counters_mask);
  return -VAR_7;
 }
 VAR_10->config_base = VAR_15;

 VAR_9->dt.pmu_counters[VAR_10->idx].event = VAR_8;

 return 0;
}
