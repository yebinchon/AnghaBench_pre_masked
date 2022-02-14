
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bEndpointAddress; } ;
struct usb_host_endpoint {struct ed* hcpriv; TYPE_1__ desc; } ;
struct usb_hcd {int dummy; } ;
struct ohci_hcd {scalar_t__ rh_state; int lock; } ;
struct ed {int state; int dummy; int td_list; } ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ohci_hcd*,struct ed*) ;
 struct ohci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ohci_hcd*,char*,struct ed*,int ,int,char*) ;
 int FUNC_4 (struct ohci_hcd*,char*) ;
 int FUNC_5 (struct ohci_hcd*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct ohci_hcd*,int ) ;

__attribute__((used)) static void
FUNC_10 (struct usb_hcd *VAR_1, struct usb_host_endpoint *VAR_2)
{
 struct ohci_hcd *VAR_3 = FUNC_1 (VAR_1);
 unsigned long VAR_4;
 struct ed *VAR_5 = VAR_2->hcpriv;
 unsigned VAR_6 = 1000;




 if (!VAR_5)
  return;

rescan:
 FUNC_7 (&VAR_3->lock, VAR_4);

 if (VAR_3->rh_state != VAR_0) {
sanitize:
  VAR_5->state = 129;
  FUNC_5(VAR_3);
 }

 switch (VAR_5->state) {
 case 128:

  if (VAR_6-- == 0) {
   FUNC_4(VAR_3, "ED unlink timeout\n");
   goto sanitize;
  }
  FUNC_8 (&VAR_3->lock, VAR_4);
  FUNC_6(1);
  goto rescan;
 case 129:
  if (FUNC_2 (&VAR_5->td_list)) {
   FUNC_9 (VAR_3, VAR_5->dummy);
   FUNC_0 (VAR_3, VAR_5);
   break;
  }

 default:



  FUNC_3 (VAR_3, "leak ed %p (#%02x) state %d%s\n",
   VAR_5, VAR_2->desc.bEndpointAddress, VAR_5->state,
   FUNC_2 (&VAR_5->td_list) ? "" : " (has tds)");
  FUNC_9 (VAR_3, VAR_5->dummy);
  break;
 }
 VAR_2->hcpriv = ((void*)0);
 FUNC_8 (&VAR_3->lock, VAR_4);
}
