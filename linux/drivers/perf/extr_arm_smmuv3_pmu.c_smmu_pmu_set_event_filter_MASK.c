
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smmu_pmu {int dummy; } ;
struct perf_event {int pmu; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct smmu_pmu*,int,int) ;
 int FUNC_2 (struct smmu_pmu*,int,int) ;
 struct smmu_pmu* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_1,
          int VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct smmu_pmu *VAR_5 = FUNC_3(VAR_1->pmu);
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_1) | VAR_3 << VAR_0;
 FUNC_1(VAR_5, VAR_2, VAR_6);
 FUNC_2(VAR_5, VAR_2, VAR_4);
}
