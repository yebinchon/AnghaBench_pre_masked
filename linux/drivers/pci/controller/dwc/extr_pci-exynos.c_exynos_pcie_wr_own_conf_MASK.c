
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_port {int dummy; } ;
struct exynos_pcie {int dummy; } ;
struct dw_pcie {scalar_t__ dbi_base; } ;


 int FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (struct exynos_pcie*,int) ;
 struct dw_pcie* FUNC_2 (struct pcie_port*) ;
 struct exynos_pcie* FUNC_3 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_4(struct pcie_port *VAR_0, int VAR_1, int VAR_2,
    u32 VAR_3)
{
 struct dw_pcie *VAR_4 = FUNC_2(VAR_0);
 struct exynos_pcie *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 FUNC_1(VAR_5, 1);
 VAR_6 = FUNC_0(VAR_4->dbi_base + VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_5, 0);
 return VAR_6;
}
