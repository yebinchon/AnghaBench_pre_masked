
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_mc_timing {unsigned long rate; int * emem_data; } ;
struct tegra_mc {unsigned int num_timings; TYPE_1__* soc; int dev; struct tegra_mc_timing* timings; } ;
struct TYPE_2__ {unsigned int num_emem_regs; int * emem_regs; } ;


 int FUNC_0 (int ,char*,unsigned long) ;
 int FUNC_1 (struct tegra_mc*,int ,int ) ;

void FUNC_2(struct tegra_mc *VAR_0, unsigned long VAR_1)
{
 unsigned int VAR_2;
 struct tegra_mc_timing *VAR_3 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_0->num_timings; VAR_2++) {
  if (VAR_0->timings[VAR_2].rate == VAR_1) {
   VAR_3 = &VAR_0->timings[VAR_2];
   break;
  }
 }

 if (!VAR_3) {
  FUNC_0(VAR_0->dev, "no memory timing registered for rate %lu\n",
   VAR_1);
  return;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->soc->num_emem_regs; ++VAR_2)
  FUNC_1(VAR_0, VAR_3->emem_data[VAR_2], VAR_0->soc->emem_regs[VAR_2]);
}
