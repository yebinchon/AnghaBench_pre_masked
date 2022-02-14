
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; } ;
struct ohci_hcd {int hc_control; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct ohci_hcd* FUNC_1 (struct usb_hcd*) ;
 int VAR_1 ;
 int FUNC_2 (struct usb_hcd*) ;
 struct pci_device_id* FUNC_3 (int ,struct pci_dev*) ;
 struct pci_dev* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5 (struct usb_hcd *VAR_2)
{
 struct ohci_hcd *VAR_3 = FUNC_1 (VAR_2);
 struct pci_dev *VAR_4 = FUNC_4(VAR_2->self.controller);
 int VAR_5 = 0;

 if (VAR_2->self.controller) {
  const struct pci_device_id *VAR_6;

  VAR_6 = FUNC_3(VAR_1, VAR_4);
  if (VAR_6 != ((void*)0)) {
   int (*VAR_7)(struct usb_hcd *VAR_8);
   VAR_7 = (void *)VAR_6->driver_data;
   VAR_5 = VAR_7(VAR_2);
  }
 }

 if (VAR_5 == 0)
  VAR_5 = FUNC_2(VAR_2);




 if (FUNC_0(&VAR_4->dev))
  VAR_3->hc_control |= VAR_0;
 return VAR_5;
}
