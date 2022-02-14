
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_pcie_soc {scalar_t__ has_pex_clkreq_en; } ;
struct tegra_pcie_port {TYPE_1__* pcie; int index; } ;
struct TYPE_3__ {struct tegra_pcie_soc* soc; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (TYPE_1__*,unsigned long) ;
 int FUNC_3 (TYPE_1__*,unsigned long,unsigned long) ;
 unsigned long FUNC_4 (struct tegra_pcie_port*) ;

__attribute__((used)) static void FUNC_5(struct tegra_pcie_port *VAR_4)
{
 unsigned long VAR_5 = FUNC_4(VAR_4);
 const struct tegra_pcie_soc *VAR_6 = VAR_4->pcie->soc;
 unsigned long VAR_7;


 VAR_7 = FUNC_2(VAR_4->pcie, VAR_5);
 VAR_7 &= ~VAR_3;
 FUNC_3(VAR_4->pcie, VAR_7, VAR_5);


 VAR_7 = FUNC_2(VAR_4->pcie, VAR_5);

 if (VAR_6->has_pex_clkreq_en)
  VAR_7 &= ~VAR_1;

 VAR_7 &= ~VAR_2;
 FUNC_3(VAR_4->pcie, VAR_7, VAR_5);


 VAR_7 = FUNC_2(VAR_4->pcie, VAR_0);
 VAR_7 |= FUNC_1(VAR_4->index);
 VAR_7 |= FUNC_0(VAR_4->index);
 FUNC_3(VAR_4->pcie, VAR_7, VAR_0);
}
