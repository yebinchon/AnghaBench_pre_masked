
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pcie_port {int dummy; } ;
struct exynos_pcie {TYPE_1__* mem_res; struct dw_pcie* pci; } ;
struct dw_pcie {struct pcie_port pp; } ;
struct TYPE_2__ {int elbi_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcie_port*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct exynos_pcie *VAR_2)
{
 struct dw_pcie *VAR_3 = VAR_2->pci;
 struct pcie_port *VAR_4 = &VAR_3->pp;
 u32 VAR_5;

 FUNC_0(VAR_4);


 VAR_5 = FUNC_1(VAR_2->mem_res->elbi_base, VAR_1);
 VAR_5 |= VAR_0;
 FUNC_2(VAR_2->mem_res->elbi_base, VAR_5, VAR_1);
}
