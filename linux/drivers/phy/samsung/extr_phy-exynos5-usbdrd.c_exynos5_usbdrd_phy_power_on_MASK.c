
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_usb_instance {TYPE_1__* phy_cfg; } ;
struct phy {int dummy; } ;
struct exynos5_usbdrd_phy {int pipeclk; int utmiclk; int itpclk; TYPE_2__* drv_data; int ref_clk; scalar_t__ vbus_boost; int dev; scalar_t__ vbus; } ;
struct TYPE_4__ {int has_common_clk_gate; } ;
struct TYPE_3__ {int (* phy_isol ) (struct phy_usb_instance*,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 struct phy_usb_instance* FUNC_4 (struct phy*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct phy_usb_instance*,int ) ;
 struct exynos5_usbdrd_phy* FUNC_8 (struct phy_usb_instance*) ;

__attribute__((used)) static int FUNC_9(struct phy *VAR_0)
{
 int VAR_1;
 struct phy_usb_instance *VAR_2 = FUNC_4(VAR_0);
 struct exynos5_usbdrd_phy *VAR_3 = FUNC_8(VAR_2);

 FUNC_2(VAR_3->dev, "Request to power_on usbdrd_phy phy\n");

 FUNC_1(VAR_3->ref_clk);
 if (!VAR_3->drv_data->has_common_clk_gate) {
  FUNC_1(VAR_3->pipeclk);
  FUNC_1(VAR_3->utmiclk);
  FUNC_1(VAR_3->itpclk);
 }


 if (VAR_3->vbus_boost) {
  VAR_1 = FUNC_6(VAR_3->vbus_boost);
  if (VAR_1) {
   FUNC_3(VAR_3->dev,
    "Failed to enable VBUS boost supply\n");
   goto fail_vbus;
  }
 }

 if (VAR_3->vbus) {
  VAR_1 = FUNC_6(VAR_3->vbus);
  if (VAR_1) {
   FUNC_3(VAR_3->dev, "Failed to enable VBUS supply\n");
   goto fail_vbus_boost;
  }
 }


 VAR_2->phy_cfg->phy_isol(VAR_2, 0);

 return 0;

fail_vbus_boost:
 if (VAR_3->vbus_boost)
  FUNC_5(VAR_3->vbus_boost);

fail_vbus:
 FUNC_0(VAR_3->ref_clk);
 if (!VAR_3->drv_data->has_common_clk_gate) {
  FUNC_0(VAR_3->itpclk);
  FUNC_0(VAR_3->utmiclk);
  FUNC_0(VAR_3->pipeclk);
 }

 return VAR_1;
}
