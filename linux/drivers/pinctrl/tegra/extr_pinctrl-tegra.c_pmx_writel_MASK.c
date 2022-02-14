
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tegra_pmx {size_t* regs; } ;


 int FUNC_0 (struct tegra_pmx*,size_t,size_t) ;
 int FUNC_1 (size_t,size_t) ;

__attribute__((used)) static inline void FUNC_2(struct tegra_pmx *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 FUNC_1(VAR_1, VAR_0->regs[VAR_2] + VAR_3);

 FUNC_0(VAR_0, VAR_2, VAR_3);
}
