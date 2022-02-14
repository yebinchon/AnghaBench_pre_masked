
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_8__ {int config1; int config2; int config; } ;
struct hw_perf_event {size_t idx; unsigned long config_base; int event_base; } ;
struct perf_event {TYPE_4__ attr; struct hw_perf_event hw; int pmu; } ;
struct arm_ccn_component {scalar_t__ base; } ;
struct TYPE_7__ {TYPE_2__* cmp_mask; TYPE_1__* pmu_counters; } ;
struct arm_ccn {TYPE_3__ dt; } ;
struct TYPE_6__ {int l; int h; } ;
struct TYPE_5__ {struct arm_ccn_component* source; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (unsigned long) ;
 int VAR_2 ;
 int FUNC_10 (unsigned long) ;
 int VAR_3 ;
 int FUNC_11 (unsigned long) ;
 struct arm_ccn* FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct perf_event *VAR_4)
{
 struct arm_ccn *VAR_5 = FUNC_12(VAR_4->pmu);
 struct hw_perf_event *VAR_6 = &VAR_4->hw;
 struct arm_ccn_component *VAR_7 =
   VAR_5->dt.pmu_counters[VAR_6->idx].source;
 unsigned long VAR_8 = VAR_6->config_base;
 u32 VAR_9;
 u64 VAR_10 = VAR_4->attr.config1;
 u64 VAR_11 = VAR_4->attr.config2;
 u64 VAR_12 = VAR_5->dt.cmp_mask[FUNC_1(VAR_4->attr.config)].l;
 u64 VAR_13 = VAR_5->dt.cmp_mask[FUNC_1(VAR_4->attr.config)].h;

 VAR_6->event_base = FUNC_8(VAR_8);


 VAR_9 = FUNC_13(VAR_7->base + VAR_0);
 VAR_9 &= ~(VAR_2 <<
   FUNC_10(VAR_8));
 VAR_9 |= FUNC_0(VAR_4->attr.config) <<
   FUNC_10(VAR_8);
 VAR_9 &= ~(VAR_1 <<
   FUNC_9(VAR_8));
 VAR_9 |= FUNC_2(VAR_4->attr.config) <<
   FUNC_9(VAR_8);
 VAR_9 &= ~(VAR_3 <<
   FUNC_11(VAR_8));
 VAR_9 |= FUNC_3(VAR_4->attr.config) <<
   FUNC_11(VAR_8);
 FUNC_14(VAR_9, VAR_7->base + VAR_0);


 FUNC_14(VAR_10 & 0xffffffff, VAR_7->base + FUNC_7(VAR_8));
 FUNC_14((VAR_10 >> 32) & 0x7fffffff,
   VAR_7->base + FUNC_7(VAR_8) + 4);
 FUNC_14(VAR_11 & 0xffffffff, VAR_7->base + FUNC_6(VAR_8));
 FUNC_14((VAR_11 >> 32) & 0x0fffffff,
   VAR_7->base + FUNC_6(VAR_8) + 4);


 FUNC_14(VAR_12 & 0xffffffff, VAR_7->base + FUNC_5(VAR_8));
 FUNC_14((VAR_12 >> 32) & 0x7fffffff,
   VAR_7->base + FUNC_5(VAR_8) + 4);
 FUNC_14(VAR_13 & 0xffffffff, VAR_7->base + FUNC_4(VAR_8));
 FUNC_14((VAR_13 >> 32) & 0x0fffffff,
   VAR_7->base + FUNC_4(VAR_8) + 4);
}
