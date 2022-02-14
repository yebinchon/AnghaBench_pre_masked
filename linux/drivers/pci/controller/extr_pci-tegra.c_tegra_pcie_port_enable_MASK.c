
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ enable; } ;
struct tegra_pcie_soc {TYPE_1__ ectl; scalar_t__ force_pca_enable; scalar_t__ has_pex_clkreq_en; } ;
struct tegra_pcie_port {scalar_t__ base; TYPE_2__* pcie; } ;
struct TYPE_5__ {struct tegra_pcie_soc* soc; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (TYPE_2__*,unsigned long) ;
 int FUNC_1 (TYPE_2__*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct tegra_pcie_port*) ;
 int FUNC_4 (struct tegra_pcie_port*) ;
 unsigned long FUNC_5 (struct tegra_pcie_port*) ;
 int FUNC_6 (struct tegra_pcie_port*) ;
 int FUNC_7 (struct tegra_pcie_port*) ;
 int FUNC_8 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct tegra_pcie_port *VAR_5)
{
 unsigned long VAR_6 = FUNC_5(VAR_5);
 const struct tegra_pcie_soc *VAR_7 = VAR_5->pcie->soc;
 unsigned long VAR_8;


 VAR_8 = FUNC_0(VAR_5->pcie, VAR_6);
 VAR_8 |= VAR_2;

 if (VAR_7->has_pex_clkreq_en)
  VAR_8 |= VAR_0;

 VAR_8 |= VAR_1;

 FUNC_1(VAR_5->pcie, VAR_8, VAR_6);

 FUNC_6(VAR_5);

 if (VAR_7->force_pca_enable) {
  VAR_8 = FUNC_2(VAR_5->base + VAR_3);
  VAR_8 |= VAR_4;
  FUNC_8(VAR_8, VAR_5->base + VAR_3);
 }

 FUNC_4(VAR_5);

 if (VAR_7->ectl.enable)
  FUNC_7(VAR_5);

 FUNC_3(VAR_5);
}
