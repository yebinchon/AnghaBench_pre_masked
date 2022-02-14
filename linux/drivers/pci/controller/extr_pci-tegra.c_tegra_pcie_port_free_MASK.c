
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; } ;
struct tegra_pcie_port {int list; TYPE_1__ regs; int base; struct tegra_pcie* pcie; } ;
struct tegra_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (struct device*,struct tegra_pcie_port*) ;
 int FUNC_2 (struct device*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct tegra_pcie_port *VAR_0)
{
 struct tegra_pcie *VAR_1 = VAR_0->pcie;
 struct device *VAR_2 = VAR_1->dev;

 FUNC_0(VAR_2, VAR_0->base);
 FUNC_2(VAR_2, VAR_0->regs.start,
    FUNC_4(&VAR_0->regs));
 FUNC_3(&VAR_0->list);
 FUNC_1(VAR_2, VAR_0);
}
