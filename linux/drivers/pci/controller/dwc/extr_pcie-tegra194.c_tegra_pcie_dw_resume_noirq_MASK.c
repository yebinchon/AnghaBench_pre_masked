
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pp; } ;
struct tegra_pcie_dw {int msi_ctrl_int; TYPE_1__ pci; int link_state; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_pcie_dw*) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct tegra_pcie_dw* FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (struct tegra_pcie_dw*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1)
{
 struct tegra_pcie_dw *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 if (!VAR_2->link_state)
  return 0;

 VAR_3 = FUNC_4(VAR_2, 1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_5(&VAR_2->pci.pp);
 if (VAR_3 < 0) {
  FUNC_1(VAR_1, "Failed to init host: %d\n", VAR_3);
  goto fail_host_init;
 }


 FUNC_3(&VAR_2->pci, VAR_0,
      VAR_2->msi_ctrl_int);

 return 0;

fail_host_init:
 return FUNC_0(VAR_2);
}
