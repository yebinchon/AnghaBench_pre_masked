
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_pmx {TYPE_1__* soc; } ;
struct tegra_pingroup {int mux_reg; unsigned int mux_bank; unsigned int drv_bank; unsigned int drv_reg; int parked_bitmask; } ;
struct TYPE_2__ {int ngroups; struct tegra_pingroup* groups; } ;


 int FUNC_0 (struct tegra_pmx*,unsigned int,unsigned int) ;
 int FUNC_1 (struct tegra_pmx*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct tegra_pmx *VAR_0)
{
 int VAR_1 = 0;
 const struct tegra_pingroup *VAR_2;
 u32 VAR_3;

 for (VAR_1 = 0; VAR_1 < VAR_0->soc->ngroups; ++VAR_1) {
  VAR_2 = &VAR_0->soc->groups[VAR_1];
  if (VAR_2->parked_bitmask > 0) {
   unsigned int VAR_4, VAR_5;

   if (VAR_2->mux_reg != -1) {
    VAR_4 = VAR_2->mux_bank;
    VAR_5 = VAR_2->mux_reg;
   } else {
    VAR_4 = VAR_2->drv_bank;
    VAR_5 = VAR_2->drv_reg;
   }

   VAR_3 = FUNC_0(VAR_0, VAR_4, VAR_5);
   VAR_3 &= ~VAR_2->parked_bitmask;
   FUNC_1(VAR_0, VAR_3, VAR_4, VAR_5);
  }
 }
}
