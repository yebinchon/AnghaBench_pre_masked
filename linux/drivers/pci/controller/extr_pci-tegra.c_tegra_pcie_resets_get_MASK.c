
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie {void* pcie_xrst; void* afi_rst; void* pex_rst; struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct device*,char*) ;

__attribute__((used)) static int FUNC_3(struct tegra_pcie *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;

 VAR_0->pex_rst = FUNC_2(VAR_1, "pex");
 if (FUNC_0(VAR_0->pex_rst))
  return FUNC_1(VAR_0->pex_rst);

 VAR_0->afi_rst = FUNC_2(VAR_1, "afi");
 if (FUNC_0(VAR_0->afi_rst))
  return FUNC_1(VAR_0->afi_rst);

 VAR_0->pcie_xrst = FUNC_2(VAR_1, "pcie_x");
 if (FUNC_0(VAR_0->pcie_xrst))
  return FUNC_1(VAR_0->pcie_xrst);

 return 0;
}
