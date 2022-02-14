
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int config; } ;
struct hw_perf_event {size_t idx; int config_base; int event_base; } ;
struct perf_event {TYPE_3__ attr; struct hw_perf_event hw; int pmu; } ;
struct arm_ccn_component {scalar_t__ base; } ;
struct TYPE_5__ {TYPE_1__* pmu_counters; } ;
struct arm_ccn {TYPE_2__ dt; } ;
struct TYPE_4__ {struct arm_ccn_component* source; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 struct arm_ccn* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct perf_event *VAR_9)
{
 struct arm_ccn *VAR_10 = FUNC_11(VAR_9->pmu);
 struct hw_perf_event *VAR_11 = &VAR_9->hw;
 struct arm_ccn_component *VAR_12 =
   VAR_10->dt.pmu_counters[VAR_11->idx].source;
 u32 VAR_13 = FUNC_3(VAR_9->attr.config);
 u32 VAR_14, VAR_15;

 VAR_15 = FUNC_9(FUNC_2(VAR_9->attr.config));
 VAR_11->event_base = FUNC_7(VAR_15,
   VAR_11->config_base);


 FUNC_0(VAR_0 != VAR_4);
 FUNC_0(VAR_4 != VAR_2);
 FUNC_0(FUNC_4(1) !=
   FUNC_6(1));
 FUNC_0(FUNC_6(1) !=
   FUNC_5(1));
 FUNC_0(VAR_1 !=
   VAR_5);
 FUNC_0(VAR_5 !=
   VAR_3);
 if (FUNC_8(VAR_13 != VAR_6 && VAR_13 != VAR_8 &&
   !FUNC_10(VAR_13, VAR_7)))
  return;


 VAR_14 = FUNC_12(VAR_12->base + VAR_0);
 VAR_14 &= ~(VAR_1 <<
  FUNC_4(VAR_11->config_base));
 VAR_14 |= FUNC_1(VAR_9->attr.config) <<
  FUNC_4(VAR_11->config_base);
 FUNC_13(VAR_14, VAR_12->base + VAR_0);
}
