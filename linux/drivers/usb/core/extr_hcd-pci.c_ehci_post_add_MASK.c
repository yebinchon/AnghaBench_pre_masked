
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct usb_device* root_hub; struct TYPE_2__* hs_companion; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct usb_device {int dummy; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct usb_device*,int) ;
 int FUNC_5 (struct usb_device*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0, struct usb_hcd *VAR_1,
  struct pci_dev *VAR_2, struct usb_hcd *VAR_3)
{
 struct usb_device *VAR_4;

 if (FUNC_3(VAR_2)) {
  if (FUNC_1(&VAR_0->dev)) {
   FUNC_0(&VAR_0->dev, "HS companion for %s\n",
     FUNC_2(&VAR_2->dev));
   VAR_3->self.hs_companion = &VAR_1->self;
  }
  VAR_4 = VAR_3->self.root_hub;
  FUNC_4(VAR_4, 1);
  FUNC_5(VAR_4);
 }
}
