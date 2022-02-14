
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_pmc {TYPE_1__* soc; } ;
struct tegra_io_pad_soc {int id; } ;
typedef enum tegra_io_pad { ____Placeholder_tegra_io_pad } tegra_io_pad ;
struct TYPE_2__ {unsigned int num_io_pads; struct tegra_io_pad_soc const* io_pads; } ;



__attribute__((used)) static const struct tegra_io_pad_soc *
FUNC_0(struct tegra_pmc *VAR_0, enum tegra_io_pad VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->soc->num_io_pads; VAR_2++)
  if (VAR_0->soc->io_pads[VAR_2].id == VAR_1)
   return &VAR_0->soc->io_pads[VAR_2];

 return ((void*)0);
}
