
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct smmu_pmu {scalar_t__ counter_mask; } ;
struct hw_perf_event {int prev_count; int idx; } ;
struct perf_event {int count; int pmu; struct hw_perf_event hw; } ;


 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct smmu_pmu*,int ) ;
 struct smmu_pmu* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_0)
{
 struct hw_perf_event *VAR_1 = &VAR_0->hw;
 struct smmu_pmu *VAR_2 = FUNC_4(VAR_0->pmu);
 u64 VAR_3, VAR_4, VAR_5;
 u32 VAR_6 = VAR_1->idx;

 do {
  VAR_4 = FUNC_2(&VAR_1->prev_count);
  VAR_5 = FUNC_3(VAR_2, VAR_6);
 } while (FUNC_1(&VAR_1->prev_count, VAR_4, VAR_5) != VAR_4);


 VAR_3 = VAR_5 - VAR_4;
 VAR_3 &= VAR_2->counter_mask;

 FUNC_0(VAR_3, &VAR_0->count);
}
