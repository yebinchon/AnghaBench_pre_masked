
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_pcie {TYPE_1__* clk_res; struct dw_pcie* pci; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {void* bus_clk; void* clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;
 TYPE_1__* FUNC_4 (struct device*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct exynos_pcie *VAR_2)
{
 struct dw_pcie *VAR_3 = VAR_2->pci;
 struct device *VAR_4 = VAR_3->dev;

 VAR_2->clk_res = FUNC_4(VAR_4, sizeof(*VAR_2->clk_res), VAR_1);
 if (!VAR_2->clk_res)
  return -VAR_0;

 VAR_2->clk_res->clk = FUNC_3(VAR_4, "pcie");
 if (FUNC_0(VAR_2->clk_res->clk)) {
  FUNC_2(VAR_4, "Failed to get pcie rc clock\n");
  return FUNC_1(VAR_2->clk_res->clk);
 }

 VAR_2->clk_res->bus_clk = FUNC_3(VAR_4, "pcie_bus");
 if (FUNC_0(VAR_2->clk_res->bus_clk)) {
  FUNC_2(VAR_4, "Failed to get pcie bus clock\n");
  return FUNC_1(VAR_2->clk_res->bus_clk);
 }

 return 0;
}
