
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_usb_phy {int pll_u; int is_ulpi_phy; int vbus; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tegra_usb_phy*) ;

__attribute__((used)) static void FUNC_4(struct tegra_usb_phy *VAR_0)
{
 if (!FUNC_0(VAR_0->vbus))
  FUNC_2(VAR_0->vbus);

 if (!VAR_0->is_ulpi_phy)
  FUNC_3(VAR_0);

 FUNC_1(VAR_0->pll_u);
}
