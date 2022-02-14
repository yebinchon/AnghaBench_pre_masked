
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_pcie_port {unsigned int lanes; int * phys; TYPE_1__* pcie; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (struct device*,char*,unsigned int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct tegra_pcie_port *VAR_0)
{
 struct device *VAR_1 = VAR_0->pcie->dev;
 unsigned int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->lanes; VAR_2++) {
  VAR_3 = FUNC_1(VAR_0->phys[VAR_2]);
  if (VAR_3 < 0) {
   FUNC_0(VAR_1, "failed to power on PHY#%u: %d\n", VAR_2, VAR_3);
   return VAR_3;
  }
 }

 return 0;
}
