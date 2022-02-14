
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_pcie_soc {unsigned long afi_pex2_ctrl; } ;
struct tegra_pcie_port {int index; TYPE_1__* pcie; } ;
struct TYPE_2__ {struct tegra_pcie_soc* soc; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static unsigned long FUNC_0(struct tegra_pcie_port *VAR_2)
{
 const struct tegra_pcie_soc *VAR_3 = VAR_2->pcie->soc;
 unsigned long VAR_4 = 0;

 switch (VAR_2->index) {
 case 0:
  VAR_4 = VAR_0;
  break;

 case 1:
  VAR_4 = VAR_1;
  break;

 case 2:
  VAR_4 = VAR_3->afi_pex2_ctrl;
  break;
 }

 return VAR_4;
}
