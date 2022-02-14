
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port {int dummy; } ;
struct dw_pcie {int dummy; } ;
struct armada8k_pcie {int dummy; } ;


 int FUNC_0 (struct armada8k_pcie*) ;
 int FUNC_1 (struct pcie_port*) ;
 struct armada8k_pcie* FUNC_2 (struct dw_pcie*) ;
 struct dw_pcie* FUNC_3 (struct pcie_port*) ;

__attribute__((used)) static int FUNC_4(struct pcie_port *VAR_0)
{
 struct dw_pcie *VAR_1 = FUNC_3(VAR_0);
 struct armada8k_pcie *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_0);
 FUNC_0(VAR_2);

 return 0;
}
