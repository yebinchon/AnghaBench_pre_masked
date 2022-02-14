
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct tegra_ehci_hcd {int rst; } ;
struct reset_control {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 TYPE_1__* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ,char*,int ) ;
 struct reset_control* FUNC_5 (struct device_node*,char*) ;
 struct usb_hcd* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct reset_control*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_1)
{
 struct device_node *VAR_2;
 struct usb_hcd *VAR_3 = FUNC_6(VAR_1);
 struct tegra_ehci_hcd *VAR_4 =
  (struct tegra_ehci_hcd *)FUNC_2(VAR_3)->priv;
 struct reset_control *VAR_5;
 int VAR_6;

 VAR_2 = FUNC_4(VAR_1->dev.of_node, "nvidia,phy", 0);
 if (!VAR_2)
  return -VAR_0;






 VAR_5 = FUNC_5(VAR_2, "utmi-pads");
 if (FUNC_0(VAR_5)) {
  FUNC_1(&VAR_1->dev,
    "can't get utmi-pads reset from the PHY\n");
  FUNC_1(&VAR_1->dev,
    "continuing, but please update your DT\n");
 } else {




  FUNC_9(VAR_5);
 }

 FUNC_3(VAR_2);


 VAR_6 = FUNC_8(VAR_4->rst);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_7(VAR_4->rst);
 if (VAR_6)
  return VAR_6;

 FUNC_10(1);

 VAR_6 = FUNC_8(VAR_4->rst);
 if (VAR_6)
  return VAR_6;

 return 0;
}
