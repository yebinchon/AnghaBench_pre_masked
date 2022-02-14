
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_usb_phy {scalar_t__ is_ulpi_phy; } ;


 int FUNC_0 (struct tegra_usb_phy*) ;
 int FUNC_1 (struct tegra_usb_phy*) ;

__attribute__((used)) static int FUNC_2(struct tegra_usb_phy *VAR_0)
{
 if (VAR_0->is_ulpi_phy)
  return FUNC_0(VAR_0);
 else
  return FUNC_1(VAR_0);
}
