
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xhci_hub {int num_ports; TYPE_1__** ports; } ;
struct xhci_hcd {int port_status_u0; int comp_mode_recovery_timer; struct usb_hcd* shared_hcd; struct xhci_hub usb3_rhub; } ;
struct usb_hcd {scalar_t__ state; } ;
struct timer_list {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct xhci_hcd* FUNC_0 (struct xhci_hcd*,struct timer_list*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct xhci_hcd*,int ,char*,...) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_7)
{
 struct xhci_hcd *VAR_8;
 struct usb_hcd *VAR_9;
 struct xhci_hub *VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_8 = FUNC_0(VAR_8, VAR_7, VAR_4);
 VAR_10 = &VAR_8->usb3_rhub;

 for (VAR_12 = 0; VAR_12 < VAR_10->num_ports; VAR_12++) {
  VAR_11 = FUNC_3(VAR_10->ports[VAR_12]->addr);
  if ((VAR_11 & VAR_2) == VAR_3) {




   FUNC_6(VAR_8, VAR_6,
     "Compliance mode detected->port %d",
     VAR_12 + 1);
   FUNC_6(VAR_8, VAR_6,
     "Attempting compliance mode recovery");
   VAR_9 = VAR_8->shared_hcd;

   if (VAR_9->state == VAR_1)
    FUNC_5(VAR_9);

   FUNC_4(VAR_9);
  }
 }

 if (VAR_8->port_status_u0 != ((1 << VAR_10->num_ports) - 1))
  FUNC_1(&VAR_8->comp_mode_recovery_timer,
   VAR_5 + FUNC_2(VAR_0));
}
