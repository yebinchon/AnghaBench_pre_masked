
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_soc {scalar_t__ program_uphy; } ;
struct tegra_pcie {scalar_t__ irq; struct tegra_pcie_soc* soc; } ;


 int FUNC_0 (scalar_t__,struct tegra_pcie*) ;
 int FUNC_1 (struct tegra_pcie*) ;

__attribute__((used)) static int FUNC_2(struct tegra_pcie *VAR_0)
{
 const struct tegra_pcie_soc *VAR_1 = VAR_0->soc;

 if (VAR_0->irq > 0)
  FUNC_0(VAR_0->irq, VAR_0);

 if (VAR_1->program_uphy)
  FUNC_1(VAR_0);

 return 0;
}
