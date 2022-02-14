
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int config; } ;
struct hw_perf_event {size_t idx; int config_base; int event_base; } ;
struct perf_event {TYPE_3__ attr; struct hw_perf_event hw; int pmu; } ;
struct arm_ccn_component {scalar_t__ base; } ;
struct TYPE_5__ {TYPE_1__* pmu_counters; } ;
struct arm_ccn {TYPE_2__ dt; } ;
struct TYPE_4__ {struct arm_ccn_component* source; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 struct arm_ccn* FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct perf_event *VAR_2)
{
 struct arm_ccn *VAR_3 = FUNC_5(VAR_2->pmu);
 struct hw_perf_event *VAR_4 = &VAR_2->hw;
 struct arm_ccn_component *VAR_5 =
   VAR_3->dt.pmu_counters[VAR_4->idx].source;
 u32 VAR_6, VAR_7;

 VAR_4->event_base = FUNC_3(VAR_4->config_base);

 VAR_7 = (FUNC_2(VAR_2->attr.config) << 4) |
   (FUNC_0(VAR_2->attr.config) << 3) |
   (FUNC_1(VAR_2->attr.config) << 0);

 VAR_6 = FUNC_6(VAR_5->base + VAR_0);
 VAR_6 &= ~(VAR_1 <<
   FUNC_4(VAR_4->config_base));
 VAR_6 |= VAR_7 << FUNC_4(VAR_4->config_base);
 FUNC_7(VAR_6, VAR_5->base + VAR_0);
}
