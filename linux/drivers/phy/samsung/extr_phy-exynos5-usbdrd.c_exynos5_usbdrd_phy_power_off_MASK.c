
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_usb_instance {TYPE_2__* phy_cfg; } ;
struct phy {int dummy; } ;
struct exynos5_usbdrd_phy {int utmiclk; int pipeclk; int itpclk; TYPE_1__* drv_data; int ref_clk; scalar_t__ vbus_boost; scalar_t__ vbus; int dev; } ;
struct TYPE_4__ {int (* phy_isol ) (struct phy_usb_instance*,int) ;} ;
struct TYPE_3__ {int has_common_clk_gate; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 struct phy_usb_instance* FUNC_2 (struct phy*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct phy_usb_instance*,int) ;
 struct exynos5_usbdrd_phy* FUNC_5 (struct phy_usb_instance*) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_0)
{
 struct phy_usb_instance *VAR_1 = FUNC_2(VAR_0);
 struct exynos5_usbdrd_phy *VAR_2 = FUNC_5(VAR_1);

 FUNC_1(VAR_2->dev, "Request to power_off usbdrd_phy phy\n");


 VAR_1->phy_cfg->phy_isol(VAR_1, 1);


 if (VAR_2->vbus)
  FUNC_3(VAR_2->vbus);
 if (VAR_2->vbus_boost)
  FUNC_3(VAR_2->vbus_boost);

 FUNC_0(VAR_2->ref_clk);
 if (!VAR_2->drv_data->has_common_clk_gate) {
  FUNC_0(VAR_2->itpclk);
  FUNC_0(VAR_2->pipeclk);
  FUNC_0(VAR_2->utmiclk);
 }

 return 0;
}
