
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port {int dummy; } ;
struct ls_pcie {int dummy; } ;
struct dw_pcie {int dummy; } ;


 int FUNC_0 (struct dw_pcie*) ;
 int FUNC_1 (struct dw_pcie*) ;
 int FUNC_2 (struct pcie_port*) ;
 int FUNC_3 (struct ls_pcie*) ;
 int FUNC_4 (struct ls_pcie*) ;
 int FUNC_5 (struct ls_pcie*) ;
 int FUNC_6 (struct ls_pcie*) ;
 struct dw_pcie* FUNC_7 (struct pcie_port*) ;
 struct ls_pcie* FUNC_8 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_9(struct pcie_port *VAR_0)
{
 struct dw_pcie *VAR_1 = FUNC_7(VAR_0);
 struct ls_pcie *VAR_2 = FUNC_8(VAR_1);






 FUNC_4(VAR_2);
 FUNC_6(VAR_2);

 FUNC_1(VAR_1);
 FUNC_3(VAR_2);
 FUNC_0(VAR_1);

 FUNC_5(VAR_2);

 FUNC_2(VAR_0);

 return 0;
}
