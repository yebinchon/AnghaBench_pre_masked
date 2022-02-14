
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct fhci_hcd {int * pins; int * gpios; int pram; TYPE_1__* timer; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct usb_hcd* FUNC_2 (struct device*) ;
 int FUNC_3 (struct fhci_hcd*) ;
 int FUNC_4 (int ,struct usb_hcd*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 struct fhci_hcd* FUNC_8 (struct usb_hcd*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct usb_hcd*) ;
 int FUNC_11 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_2)
{
 struct usb_hcd *VAR_3 = FUNC_2(VAR_2);
 struct fhci_hcd *VAR_4 = FUNC_8(VAR_3);
 int VAR_5;
 int VAR_6;

 FUNC_11(VAR_3);
 FUNC_4(VAR_4->timer->irq, VAR_3);
 FUNC_7(VAR_4->timer);
 FUNC_0(FUNC_1(VAR_4->pram));
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!FUNC_6(VAR_4->gpios[VAR_5]))
   continue;
  FUNC_5(VAR_4->gpios[VAR_5]);
 }
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_9(VAR_4->pins[VAR_6]);
 FUNC_3(VAR_4);
 FUNC_10(VAR_3);
 return 0;
}
