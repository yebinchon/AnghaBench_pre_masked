
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct smmu_pmu {int options; int counter_mask; } ;
struct hw_perf_event {int prev_count; int idx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct smmu_pmu*,int ) ;
 int FUNC_2 (struct smmu_pmu*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct smmu_pmu *VAR_1,
    struct hw_perf_event *VAR_2)
{
 u32 VAR_3 = VAR_2->idx;
 u64 VAR_4;

 if (VAR_1->options & VAR_0) {







  VAR_4 = FUNC_1(VAR_1, VAR_3);
 } else {






  VAR_4 = VAR_1->counter_mask >> 1;
  FUNC_2(VAR_1, VAR_3, VAR_4);
 }

 FUNC_0(&VAR_2->prev_count, VAR_4);
}
