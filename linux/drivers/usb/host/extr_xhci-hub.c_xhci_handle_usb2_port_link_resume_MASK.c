
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct xhci_port {size_t hcd_portnum; int addr; TYPE_1__* rhub; } ;
struct xhci_hcd {int lock; } ;
struct xhci_bus_state {unsigned long* resume_done; int port_c_suspend; int suspended_ports; int rexit_ports; int * rexit_done; int resuming_ports; } ;
struct TYPE_5__ {int busnum; } ;
struct usb_hcd {TYPE_2__ self; int rh_timer; } ;
struct TYPE_4__ {struct xhci_bus_state bus_state; struct usb_hcd* hcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (size_t,int *) ;
 struct xhci_hcd* FUNC_1 (struct usb_hcd*) ;
 unsigned long VAR_9 ;
 int FUNC_2 (int *,unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (size_t,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (size_t,int *) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;
 int FUNC_10 (TYPE_2__*,size_t) ;
 int FUNC_11 (TYPE_2__*,size_t) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (struct xhci_hcd*,char*,...) ;
 int FUNC_14 (struct usb_hcd*,struct xhci_hcd*,size_t) ;
 int FUNC_15 (struct xhci_hcd*,int) ;
 int FUNC_16 (struct xhci_hcd*,struct xhci_port*,int ) ;
 int FUNC_17 (struct xhci_hcd*,struct xhci_port*,int ) ;
 int FUNC_18 (struct xhci_hcd*,char*,int ,size_t,int) ;

__attribute__((used)) static int FUNC_19(struct xhci_port *VAR_10,
          u32 *VAR_11, u32 VAR_12,
          unsigned long VAR_13)
{
 struct xhci_bus_state *VAR_14;
 struct xhci_hcd *VAR_15;
 struct usb_hcd *VAR_16;
 int VAR_17;
 u32 VAR_18;

 VAR_16 = VAR_10->rhub->hcd;
 VAR_14 = &VAR_10->rhub->bus_state;
 VAR_15 = FUNC_1(VAR_16);
 VAR_18 = VAR_10->hcd_portnum;

 if ((VAR_12 & VAR_4) || !(VAR_12 & VAR_2)) {
  *VAR_11 = 0xffffffff;
  return -VAR_0;
 }

 if (!VAR_14->resume_done[VAR_18]) {

  if (FUNC_8(VAR_18, &VAR_14->resuming_ports)) {






  } else {



   unsigned long VAR_19 = VAR_9 +
    FUNC_3(VAR_6);

   FUNC_5(VAR_18, &VAR_14->resuming_ports);
   VAR_14->resume_done[VAR_18] = VAR_19;
   FUNC_2(&VAR_16->rh_timer, VAR_19);
   FUNC_11(&VAR_16->self, VAR_18);
  }

 } else if (FUNC_9(VAR_9, VAR_14->resume_done[VAR_18])) {
  int VAR_20;

  FUNC_13(VAR_15, "resume USB2 port %d-%d\n",
    VAR_16->self.busnum, VAR_18 + 1);

  VAR_14->resume_done[VAR_18] = 0;
  FUNC_0(VAR_18, &VAR_14->resuming_ports);

  FUNC_5(VAR_18, &VAR_14->rexit_ports);

  FUNC_17(VAR_15, VAR_10, VAR_3);
  FUNC_16(VAR_15, VAR_10, VAR_7);

  FUNC_7(&VAR_15->lock, VAR_13);
  VAR_20 = FUNC_12(
   &VAR_14->rexit_done[VAR_18],
   FUNC_3(VAR_8));
  FUNC_6(&VAR_15->lock, VAR_13);

  if (VAR_20) {
   VAR_17 = FUNC_14(VAR_16, VAR_15,
           VAR_18 + 1);
   if (!VAR_17) {
    FUNC_13(VAR_15, "slot_id is zero\n");
    *VAR_11 = 0xffffffff;
    return -VAR_1;
   }
   FUNC_15(VAR_15, VAR_17);
  } else {
   int VAR_21 = FUNC_4(VAR_10->addr);

   FUNC_18(VAR_15, "Port resume timed out, port %d-%d: 0x%x\n",
      VAR_16->self.busnum, VAR_18 + 1, VAR_21);
   *VAR_11 |= VAR_5;
   FUNC_0(VAR_18, &VAR_14->rexit_ports);
  }

  FUNC_10(&VAR_16->self, VAR_18);
  VAR_14->port_c_suspend |= 1 << VAR_18;
  VAR_14->suspended_ports &= ~(1 << VAR_18);
 } else {






  *VAR_11 |= VAR_5;
 }
 return 0;
}
