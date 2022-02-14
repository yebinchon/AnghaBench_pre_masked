
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port {int dummy; } ;
struct dw_pcie {int dummy; } ;
struct dra7xx_pcie {int dummy; } ;


 int FUNC_0 (struct dra7xx_pcie*) ;
 int FUNC_1 (struct dw_pcie*) ;
 int FUNC_2 (struct pcie_port*) ;
 int FUNC_3 (struct pcie_port*) ;
 int FUNC_4 (struct dw_pcie*) ;
 struct dra7xx_pcie* FUNC_5 (struct dw_pcie*) ;
 struct dw_pcie* FUNC_6 (struct pcie_port*) ;

__attribute__((used)) static int FUNC_7(struct pcie_port *VAR_0)
{
 struct dw_pcie *VAR_1 = FUNC_6(VAR_0);
 struct dra7xx_pcie *VAR_2 = FUNC_5(VAR_1);

 FUNC_3(VAR_0);

 FUNC_1(VAR_1);
 FUNC_4(VAR_1);
 FUNC_2(VAR_0);
 FUNC_0(VAR_2);

 return 0;
}
