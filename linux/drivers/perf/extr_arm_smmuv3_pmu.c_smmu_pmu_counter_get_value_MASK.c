
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct smmu_pmu {int counter_mask; scalar_t__ reloc_base; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline u64 FUNC_4(struct smmu_pmu *VAR_0, u32 VAR_1)
{
 u64 VAR_2;

 if (VAR_0->counter_mask & FUNC_0(32))
  VAR_2 = FUNC_3(VAR_0->reloc_base + FUNC_1(VAR_1, 8));
 else
  VAR_2 = FUNC_2(VAR_0->reloc_base + FUNC_1(VAR_1, 4));

 return VAR_2;
}
