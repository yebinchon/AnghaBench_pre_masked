
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port {int dummy; } ;
struct exynos_pcie {int dummy; } ;
struct dw_pcie {int dummy; } ;


 int FUNC_0 (struct exynos_pcie*) ;
 int FUNC_1 (struct exynos_pcie*) ;
 struct dw_pcie* FUNC_2 (struct pcie_port*) ;
 struct exynos_pcie* FUNC_3 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_4(struct pcie_port *VAR_0)
{
 struct dw_pcie *VAR_1 = FUNC_2(VAR_0);
 struct exynos_pcie *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);

 return 0;
}
