
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_pcie_port {unsigned int lanes; struct phy** phys; int np; TYPE_1__* pcie; } ;
struct phy {int dummy; } ;
struct device {int dummy; } ;
typedef int phy ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct device*,char*,unsigned int,int) ;
 struct phy** FUNC_3 (struct device*,int,unsigned int,int ) ;
 struct phy* FUNC_4 (struct device*,int ,char*,unsigned int) ;
 int FUNC_5 (struct phy*) ;

__attribute__((used)) static int FUNC_6(struct tegra_pcie_port *VAR_2)
{
 struct device *VAR_3 = VAR_2->pcie->dev;
 struct phy *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_2->phys = FUNC_3(VAR_3, sizeof(VAR_4), VAR_2->lanes, VAR_1);
 if (!VAR_2->phys)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2->lanes; VAR_5++) {
  VAR_4 = FUNC_4(VAR_3, VAR_2->np, "pcie", VAR_5);
  if (FUNC_0(VAR_4)) {
   FUNC_2(VAR_3, "failed to get PHY#%u: %ld\n", VAR_5,
    FUNC_1(VAR_4));
   return FUNC_1(VAR_4);
  }

  VAR_6 = FUNC_5(VAR_4);
  if (VAR_6 < 0) {
   FUNC_2(VAR_3, "failed to initialize PHY#%u: %d\n", VAR_5,
    VAR_6);
   return VAR_6;
  }

  VAR_2->phys[VAR_5] = VAR_4;
 }

 return 0;
}
