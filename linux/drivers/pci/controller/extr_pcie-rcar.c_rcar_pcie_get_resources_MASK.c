
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {int irq1; int irq2; } ;
struct rcar_pcie {TYPE_1__ msi; int bus_clk; int base; int phy; struct device* dev; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ,struct resource*) ;

__attribute__((used)) static int FUNC_9(struct rcar_pcie *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 struct resource VAR_3;
 int VAR_4, VAR_5;

 VAR_1->phy = FUNC_5(VAR_2, "pcie");
 if (FUNC_0(VAR_1->phy))
  return FUNC_1(VAR_1->phy);

 VAR_4 = FUNC_8(VAR_2->of_node, 0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_1->base = FUNC_4(VAR_2, &VAR_3);
 if (FUNC_0(VAR_1->base))
  return FUNC_1(VAR_1->base);

 VAR_1->bus_clk = FUNC_3(VAR_2, "pcie_bus");
 if (FUNC_0(VAR_1->bus_clk)) {
  FUNC_2(VAR_2, "cannot get pcie bus clock\n");
  return FUNC_1(VAR_1->bus_clk);
 }

 VAR_5 = FUNC_7(VAR_2->of_node, 0);
 if (!VAR_5) {
  FUNC_2(VAR_2, "cannot get platform resources for msi interrupt\n");
  VAR_4 = -VAR_0;
  goto err_irq1;
 }
 VAR_1->msi.irq1 = VAR_5;

 VAR_5 = FUNC_7(VAR_2->of_node, 1);
 if (!VAR_5) {
  FUNC_2(VAR_2, "cannot get platform resources for msi interrupt\n");
  VAR_4 = -VAR_0;
  goto err_irq2;
 }
 VAR_1->msi.irq2 = VAR_5;

 return 0;

err_irq2:
 FUNC_6(VAR_1->msi.irq1);
err_irq1:
 return VAR_4;
}
