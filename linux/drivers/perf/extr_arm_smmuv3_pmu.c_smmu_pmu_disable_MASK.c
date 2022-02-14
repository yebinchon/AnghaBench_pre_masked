
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smmu_pmu {scalar_t__ reg_base; } ;
struct pmu {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct smmu_pmu* FUNC_0 (struct pmu*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct pmu *VAR_2)
{
 struct smmu_pmu *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(0, VAR_3->reg_base + VAR_0);
 FUNC_1(0, VAR_3->reg_base + VAR_1);
}
