
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smmu_pmu {scalar_t__ reg_base; } ;
struct pmu {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct smmu_pmu* FUNC_0 (struct pmu*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct pmu *VAR_4)
{
 struct smmu_pmu *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_3,
        VAR_5->reg_base + VAR_2);
 FUNC_1(VAR_1, VAR_5->reg_base + VAR_0);
}
