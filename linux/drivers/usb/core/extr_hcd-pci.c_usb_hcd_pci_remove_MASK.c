
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * hs_companion; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct pci_dev {scalar_t__ class; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct pci_dev*,struct usb_hcd*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 struct usb_hcd* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,struct usb_hcd*) ;
 int FUNC_13 (struct usb_hcd*) ;
 int FUNC_14 (struct usb_hcd*) ;

void FUNC_15(struct pci_dev *VAR_3)
{
 struct usb_hcd *VAR_4;

 VAR_4 = FUNC_8(VAR_3);
 if (!VAR_4)
  return;

 if (FUNC_6(VAR_3))
  FUNC_9(&VAR_3->dev);





 FUNC_4();
 FUNC_12(0, VAR_4);
 FUNC_5();


 if (VAR_3->class == VAR_0) {
  FUNC_2(&VAR_1);
  FUNC_3(VAR_3, VAR_4, VAR_2);
  FUNC_14(VAR_4);
  FUNC_0(&VAR_3->dev, ((void*)0));
  FUNC_11(&VAR_1);
 } else {

  FUNC_1(&VAR_1);
  VAR_4->self.hs_companion = ((void*)0);
  FUNC_14(VAR_4);
  FUNC_0(&VAR_3->dev, ((void*)0));
  FUNC_10(&VAR_1);
 }
 FUNC_13(VAR_4);
 FUNC_7(VAR_3);
}
