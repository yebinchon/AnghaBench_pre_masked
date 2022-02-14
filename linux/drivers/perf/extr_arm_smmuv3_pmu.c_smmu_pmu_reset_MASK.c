
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct smmu_pmu {scalar_t__ reloc_base; scalar_t__ reg_base; int pmu; scalar_t__ num_counters; } ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct smmu_pmu *VAR_3)
{
 u64 VAR_4 = FUNC_0(VAR_3->num_counters - 1, 0);

 FUNC_1(&VAR_3->pmu);


 FUNC_2(VAR_4,
         VAR_3->reg_base + VAR_0);
 FUNC_2(VAR_4,
         VAR_3->reg_base + VAR_1);
 FUNC_2(VAR_4,
         VAR_3->reloc_base + VAR_2);
}
