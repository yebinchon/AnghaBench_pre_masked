
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int name; int flags; } ;
struct property_entry {char* name; } ;
struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct dwc3 {scalar_t__ revision; int dev; scalar_t__ usb2_lpm_disable; scalar_t__ usb3_lpm_capable; TYPE_2__* xhci_resources; struct platform_device* xhci; } ;
struct TYPE_4__ {int start; int end; int name; int flags; } ;


 int FUNC_0 (struct property_entry*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dwc3*) ;
 int FUNC_3 (struct property_entry*,int ,int) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,struct property_entry*) ;
 int FUNC_6 (struct platform_device*,TYPE_2__*,int ) ;
 struct platform_device* FUNC_7 (char*,int ) ;
 int FUNC_8 (struct platform_device*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,char*) ;
 struct platform_device* FUNC_11 (int ) ;

int FUNC_12(struct dwc3 *VAR_5)
{
 struct property_entry VAR_6[4];
 struct platform_device *VAR_7;
 int VAR_8, VAR_9;
 struct resource *VAR_10;
 struct platform_device *VAR_11 = FUNC_11(VAR_5->dev);
 int VAR_12 = 0;

 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_10 = FUNC_10(VAR_11, VAR_3, "host");
 if (!VAR_10)
  VAR_10 = FUNC_10(VAR_11, VAR_3,
    "dwc_usb3");
 if (!VAR_10)
  VAR_10 = FUNC_9(VAR_11, VAR_3, 0);
 if (!VAR_10)
  return -VAR_2;

 VAR_5->xhci_resources[1].start = VAR_9;
 VAR_5->xhci_resources[1].end = VAR_9;
 VAR_5->xhci_resources[1].flags = VAR_10->flags;
 VAR_5->xhci_resources[1].name = VAR_10->name;

 VAR_7 = FUNC_7("xhci-hcd", VAR_4);
 if (!VAR_7) {
  FUNC_1(VAR_5->dev, "couldn't allocate xHCI device\n");
  return -VAR_2;
 }

 VAR_7->dev.parent = VAR_5->dev;

 VAR_5->xhci = VAR_7;

 VAR_8 = FUNC_6(VAR_7, VAR_5->xhci_resources,
      VAR_1);
 if (VAR_8) {
  FUNC_1(VAR_5->dev, "couldn't add resources to xHCI device\n");
  goto err;
 }

 FUNC_3(VAR_6, 0, sizeof(struct property_entry) * FUNC_0(VAR_6));

 if (VAR_5->usb3_lpm_capable)
  VAR_6[VAR_12++].name = "usb3-lpm-capable";

 if (VAR_5->usb2_lpm_disable)
  VAR_6[VAR_12++].name = "usb2-lpm-disable";
 if (VAR_5->revision <= VAR_0)
  VAR_6[VAR_12++].name = "quirk-broken-port-ped";

 if (VAR_12) {
  VAR_8 = FUNC_5(VAR_7, VAR_6);
  if (VAR_8) {
   FUNC_1(VAR_5->dev, "failed to add properties to xHCI\n");
   goto err;
  }
 }

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_5->dev, "failed to register xHCI device\n");
  goto err;
 }

 return 0;
err:
 FUNC_8(VAR_7);
 return VAR_8;
}
