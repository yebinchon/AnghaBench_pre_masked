
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_dw {scalar_t__ slot_ctl_3v3; scalar_t__ slot_ctl_12v; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct tegra_pcie_dw *VAR_0)
{
 if (VAR_0->slot_ctl_12v)
  FUNC_0(VAR_0->slot_ctl_12v);
 if (VAR_0->slot_ctl_3v3)
  FUNC_0(VAR_0->slot_ctl_3v3);
}
