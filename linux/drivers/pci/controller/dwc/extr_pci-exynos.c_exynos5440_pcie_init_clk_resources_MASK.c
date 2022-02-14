
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_pcie {TYPE_1__* clk_res; struct dw_pcie* pci; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int clk; int bus_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;

__attribute__((used)) static int FUNC_3(struct exynos_pcie *VAR_0)
{
 struct dw_pcie *VAR_1 = VAR_0->pci;
 struct device *VAR_2 = VAR_1->dev;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->clk_res->clk);
 if (VAR_3) {
  FUNC_2(VAR_2, "cannot enable pcie rc clock");
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_0->clk_res->bus_clk);
 if (VAR_3) {
  FUNC_2(VAR_2, "cannot enable pcie bus clock");
  goto err_bus_clk;
 }

 return 0;

err_bus_clk:
 FUNC_0(VAR_0->clk_res->clk);

 return VAR_3;
}
