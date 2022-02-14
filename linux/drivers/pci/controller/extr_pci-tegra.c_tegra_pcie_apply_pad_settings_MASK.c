
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_soc {int num_ports; int pads_refclk_cfg1; int pads_refclk_cfg0; } ;
struct tegra_pcie {struct tegra_pcie_soc* soc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_pcie*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct tegra_pcie *VAR_2)
{
 const struct tegra_pcie_soc *VAR_3 = VAR_2->soc;


 FUNC_0(VAR_2, VAR_3->pads_refclk_cfg0, VAR_0);

 if (VAR_3->num_ports > 2)
  FUNC_0(VAR_2, VAR_3->pads_refclk_cfg1, VAR_1);
}
