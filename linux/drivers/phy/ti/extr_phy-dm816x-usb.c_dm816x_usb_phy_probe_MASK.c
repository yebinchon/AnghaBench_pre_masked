
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct usb_phy_data {int dummy; } ;
struct usb_otg {TYPE_1__* usb_phy; int set_peripheral; int set_host; } ;
struct resource {int start; } ;
struct TYPE_9__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct phy_provider {int dummy; } ;
typedef struct phy_provider phy ;
struct of_device_id {struct usb_phy_data* data; } ;
struct TYPE_8__ {char* label; int type; struct usb_otg* otg; TYPE_2__* dev; } ;
struct dm816x_usb_phy {int usb_ctrl; int usbphy_ctrl; int instance; TYPE_1__ phy; TYPE_2__* dev; struct phy_provider* refclk; struct phy_provider* syscon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 int VAR_5 ;
 int FUNC_2 (struct phy_provider*) ;
 struct phy_provider* FUNC_3 (TYPE_2__*,char*) ;
 void* FUNC_4 (TYPE_2__*,int,int ) ;
 struct phy_provider* FUNC_5 (TYPE_2__*,int ) ;
 struct phy_provider* FUNC_6 (TYPE_2__*,int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct of_device_id* FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct phy_provider*,struct dm816x_usb_phy*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct dm816x_usb_phy*) ;
 int FUNC_12 (TYPE_2__*) ;
 struct phy_provider* FUNC_13 (int ,char*) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_11)
{
 struct dm816x_usb_phy *VAR_12;
 struct resource *VAR_13;
 struct phy *VAR_14;
 struct phy_provider *VAR_15;
 struct usb_otg *VAR_16;
 const struct of_device_id *VAR_17;
 const struct usb_phy_data *VAR_18;
 int VAR_19;

 VAR_17 = FUNC_7(FUNC_8(VAR_6),
    &VAR_11->dev);
 if (!VAR_17)
  return -VAR_0;

 VAR_12 = FUNC_4(&VAR_11->dev, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_13 = FUNC_10(VAR_11, VAR_4, 0);
 if (!VAR_13)
  return -VAR_1;

 VAR_12->syscon = FUNC_13(VAR_11->dev.of_node,
            "syscon");
 if (FUNC_0(VAR_12->syscon))
  return FUNC_1(VAR_12->syscon);






 VAR_12->usb_ctrl = 0x20;
 VAR_12->usbphy_ctrl = (VAR_13->start & 0xff) + 4;
 if (VAR_12->usbphy_ctrl == 0x2c)
  VAR_12->instance = 1;

 VAR_18 = VAR_17->data;

 VAR_16 = FUNC_4(&VAR_11->dev, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_12->dev = &VAR_11->dev;
 VAR_12->phy.dev = VAR_12->dev;
 VAR_12->phy.label = "dm8168_usb_phy";
 VAR_12->phy.otg = VAR_16;
 VAR_12->phy.type = VAR_5;
 VAR_16->set_host = VAR_7;
 VAR_16->set_peripheral = VAR_8;
 VAR_16->usb_phy = &VAR_12->phy;

 FUNC_11(VAR_11, VAR_12);

 VAR_12->refclk = FUNC_3(VAR_12->dev, "refclk");
 if (FUNC_0(VAR_12->refclk))
  return FUNC_1(VAR_12->refclk);
 VAR_19 = FUNC_2(VAR_12->refclk);
 if (VAR_19)
  return VAR_19;

 FUNC_12(VAR_12->dev);
 VAR_14 = FUNC_6(VAR_12->dev, ((void*)0), &VAR_10);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 FUNC_9(VAR_14, VAR_12);

 VAR_15 = FUNC_5(VAR_12->dev,
           VAR_9);
 if (FUNC_0(VAR_15))
  return FUNC_1(VAR_15);

 FUNC_14(&VAR_12->phy);

 return 0;
}
