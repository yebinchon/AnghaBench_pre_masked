
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tegra_pmx {size_t* regs; } ;


 size_t FUNC_0 (size_t) ;

__attribute__((used)) static inline u32 FUNC_1(struct tegra_pmx *VAR_0, u32 VAR_1, u32 VAR_2)
{
 return FUNC_0(VAR_0->regs[VAR_1] + VAR_2);
}
