
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smmu_pmu {int dummy; } ;
struct hw_perf_event {int idx; scalar_t__ state; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;


 int FUNC_0 (struct smmu_pmu*,int) ;
 int FUNC_1 (struct smmu_pmu*,struct hw_perf_event*) ;
 struct smmu_pmu* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_0, int VAR_1)
{
 struct smmu_pmu *VAR_2 = FUNC_2(VAR_0->pmu);
 struct hw_perf_event *VAR_3 = &VAR_0->hw;
 int VAR_4 = VAR_3->idx;

 VAR_3->state = 0;

 FUNC_1(VAR_2, VAR_3);

 FUNC_0(VAR_2, VAR_4);
}
