
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_virt_device {struct usb_device* udev; } ;
struct xhci_hcd {int xhc_state; struct xhci_virt_device** devs; } ;
struct usb_host_endpoint {int dummy; } ;
struct usb_hcd {int dummy; } ;
struct usb_device {size_t slot_id; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (struct xhci_hcd*,char*,char const*) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_3, struct usb_device *VAR_4,
  struct usb_host_endpoint *VAR_5, int VAR_6, bool VAR_7,
  const char *VAR_8) {
 struct xhci_hcd *VAR_9;
 struct xhci_virt_device *VAR_10;

 if (!VAR_3 || (VAR_6 && !VAR_5) || !VAR_4) {
  FUNC_1("xHCI %s called with invalid args\n", VAR_8);
  return -VAR_0;
 }
 if (!VAR_4->parent) {
  FUNC_1("xHCI %s called for root hub\n", VAR_8);
  return 0;
 }

 VAR_9 = FUNC_0(VAR_3);
 if (VAR_7) {
  if (!VAR_4->slot_id || !VAR_9->devs[VAR_4->slot_id]) {
   FUNC_2(VAR_9, "xHCI %s called with unaddressed device\n",
     VAR_8);
   return -VAR_0;
  }

  VAR_10 = VAR_9->devs[VAR_4->slot_id];
  if (VAR_10->udev != VAR_4) {
   FUNC_2(VAR_9, "xHCI %s called with udev and "
       "virt_dev does not match\n", VAR_8);
   return -VAR_0;
  }
 }

 if (VAR_9->xhc_state & VAR_2)
  return -VAR_1;

 return 1;
}
