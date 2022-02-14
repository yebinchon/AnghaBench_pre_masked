
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* hs_companion; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct pci_dev {scalar_t__ class; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1, struct usb_hcd *VAR_2,
  struct pci_dev *VAR_3, struct usb_hcd *VAR_4)
{
 if (FUNC_2(VAR_1) && VAR_3->class == VAR_0) {
  FUNC_0(&VAR_1->dev, "FS/LS companion for %s\n",
    FUNC_1(&VAR_3->dev));
  VAR_2->self.hs_companion = &VAR_4->self;
 }
}
