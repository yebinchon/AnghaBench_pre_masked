
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xhci_hcd {int dummy; } ;
struct TYPE_3__ {struct device* controller; } ;
struct usb_hcd {scalar_t__ rsrc_start; TYPE_1__ self; } ;
struct resource {int flags; int name; scalar_t__ start; scalar_t__ end; int member_0; } ;
struct TYPE_4__ {struct device* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct pci_dev {scalar_t__ device; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int ,struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (struct platform_device*,struct resource*,int) ;
 struct platform_device* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct platform_device*) ;
 int VAR_6 ;
 struct pci_dev* FUNC_7 (struct device*) ;
 int FUNC_8 (struct xhci_hcd*,char*,int ) ;
 int VAR_7 ;
 struct usb_hcd* FUNC_9 (struct xhci_hcd*) ;

__attribute__((used)) static int FUNC_10(struct xhci_hcd *VAR_8, u32 VAR_9)
{
 struct usb_hcd *VAR_10 = FUNC_9(VAR_8);
 struct device *VAR_11 = VAR_10->self.controller;
 struct platform_device *VAR_12;
 struct pci_dev *VAR_13 = FUNC_7(VAR_11);
 struct resource VAR_14 = { 0, };
 int VAR_15;

 VAR_12 = FUNC_5(VAR_4, VAR_3);
 if (!VAR_12) {
  FUNC_8(VAR_8, "couldn't allocate %s platform device\n",
    VAR_4);
  return -VAR_0;
 }

 VAR_14.start = VAR_10->rsrc_start + VAR_9;
 VAR_14.end = VAR_14.start + VAR_5 - 1;
 VAR_14.name = VAR_4;
 VAR_14.flags = VAR_1;

 VAR_15 = FUNC_4(VAR_12, &VAR_14, 1);
 if (VAR_15) {
  FUNC_0(VAR_11, "couldn't add resources to intel_xhci_usb_sw pdev\n");
  FUNC_6(VAR_12);
  return VAR_15;
 }

 if (VAR_13->device == VAR_2) {
  VAR_15 = FUNC_3(VAR_12, VAR_6);
  if (VAR_15) {
   FUNC_0(VAR_11, "failed to register device properties\n");
   FUNC_6(VAR_12);
   return VAR_15;
  }
 }

 VAR_12->dev.parent = VAR_11;

 VAR_15 = FUNC_2(VAR_12);
 if (VAR_15) {
  FUNC_0(VAR_11, "couldn't register intel_xhci_usb_sw pdev\n");
  FUNC_6(VAR_12);
  return VAR_15;
 }

 VAR_15 = FUNC_1(VAR_11, VAR_7, VAR_12);
 if (VAR_15) {
  FUNC_0(VAR_11, "couldn't add unregister action for intel_xhci_usb_sw pdev\n");
  return VAR_15;
 }

 return 0;
}
