
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_is {scalar_t__ pmu_regs; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct fimc_is *VAR_0, unsigned int VAR_1)
{
 return FUNC_0(VAR_0->pmu_regs + VAR_1);
}
