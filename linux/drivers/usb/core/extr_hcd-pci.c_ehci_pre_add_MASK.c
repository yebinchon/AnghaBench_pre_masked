
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct usb_device* root_hub; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct usb_device {int dummy; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct usb_device*) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0, struct usb_hcd *VAR_1,
  struct pci_dev *VAR_2, struct usb_hcd *VAR_3)
{
 struct usb_device *VAR_4;

 if (FUNC_0(VAR_2)) {
  VAR_4 = VAR_3->self.root_hub;
  FUNC_1(VAR_4);
  FUNC_2(VAR_4, 0);
 }
}
