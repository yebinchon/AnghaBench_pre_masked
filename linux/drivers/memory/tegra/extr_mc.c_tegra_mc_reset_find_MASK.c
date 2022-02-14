
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_mc_reset {unsigned long id; } ;
struct tegra_mc {TYPE_1__* soc; } ;
struct TYPE_2__ {unsigned int num_resets; struct tegra_mc_reset const* resets; } ;



__attribute__((used)) static const struct tegra_mc_reset *FUNC_0(struct tegra_mc *VAR_0,
       unsigned long VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->soc->num_resets; VAR_2++)
  if (VAR_0->soc->resets[VAR_2].id == VAR_1)
   return &VAR_0->soc->resets[VAR_2];

 return ((void*)0);
}
