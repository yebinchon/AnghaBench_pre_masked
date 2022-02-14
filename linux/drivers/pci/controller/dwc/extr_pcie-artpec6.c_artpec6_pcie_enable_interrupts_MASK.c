
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port {int dummy; } ;
struct dw_pcie {struct pcie_port pp; } ;
struct artpec6_pcie {struct dw_pcie* pci; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pcie_port*) ;

__attribute__((used)) static void FUNC_2(struct artpec6_pcie *VAR_1)
{
 struct dw_pcie *VAR_2 = VAR_1->pci;
 struct pcie_port *VAR_3 = &VAR_2->pp;

 if (FUNC_0(VAR_0))
  FUNC_1(VAR_3);
}
