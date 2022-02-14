
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {scalar_t__ expires; } ;
struct xhci_virt_ep {int ep_state; TYPE_5__ stop_cmd_timer; int cancelled_td_list; } ;
struct xhci_virt_device {struct xhci_virt_ep* eps; } ;
struct xhci_td {int cancelled_td_list; int first_trb; int start_seg; int td_list; } ;
struct xhci_ring {int dummy; } ;
struct xhci_hcd {int xhc_state; int lock; TYPE_1__* op_regs; struct xhci_virt_device** devs; } ;
struct xhci_command {int dummy; } ;
struct usb_hcd {int dummy; } ;
struct urb_priv {int num_tds_done; int num_tds; struct xhci_td* td; } ;
struct urb {TYPE_3__* dev; TYPE_2__* ep; struct urb_priv* hcpriv; } ;
struct TYPE_9__ {int bEndpointAddress; } ;
struct TYPE_8__ {size_t slot_id; int devpath; } ;
struct TYPE_7__ {TYPE_4__ desc; } ;
struct TYPE_6__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_5__*) ;
 struct xhci_hcd* FUNC_1 (struct usb_hcd*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct xhci_td*,struct xhci_ring*) ;
 int VAR_9 ;
 int FUNC_9 (struct urb*) ;
 int FUNC_10 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_11 (struct usb_hcd*,struct urb*,int ) ;
 int FUNC_12 (struct usb_hcd*,struct urb*) ;
 struct xhci_command* FUNC_13 (struct xhci_hcd*,int,int ) ;
 int FUNC_14 (struct xhci_hcd*,int ,char*,...) ;
 int FUNC_15 (struct xhci_hcd*,char*) ;
 unsigned int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (struct xhci_hcd*) ;
 int FUNC_18 (struct xhci_hcd*,struct xhci_command*,size_t,unsigned int,int ) ;
 int FUNC_19 (struct xhci_hcd*) ;
 scalar_t__ FUNC_20 (int ,int ) ;
 int FUNC_21 (struct urb_priv*) ;
 struct xhci_ring* FUNC_22 (struct xhci_hcd*,struct urb*) ;

__attribute__((used)) static int FUNC_23(struct usb_hcd *VAR_10, struct urb *VAR_11, int VAR_12)
{
 unsigned long VAR_13;
 int VAR_14, VAR_15;
 u32 VAR_16;
 struct xhci_hcd *VAR_17;
 struct urb_priv *VAR_18;
 struct xhci_td *VAR_19;
 unsigned int VAR_20;
 struct xhci_ring *VAR_21;
 struct xhci_virt_ep *VAR_22;
 struct xhci_command *VAR_23;
 struct xhci_virt_device *VAR_24;

 VAR_17 = FUNC_1(VAR_10);
 FUNC_6(&VAR_17->lock, VAR_13);

 FUNC_9(VAR_11);


 VAR_14 = FUNC_10(VAR_10, VAR_11, VAR_12);
 if (VAR_14)
  goto done;


 VAR_24 = VAR_17->devs[VAR_11->dev->slot_id];
 VAR_18 = VAR_11->hcpriv;
 if (!VAR_24 || !VAR_18)
  goto err_giveback;

 VAR_20 = FUNC_16(&VAR_11->ep->desc);
 VAR_22 = &VAR_24->eps[VAR_20];
 VAR_21 = FUNC_22(VAR_17, VAR_11);
 if (!VAR_22 || !VAR_21)
  goto err_giveback;


 VAR_16 = FUNC_5(&VAR_17->op_regs->status);
 if (VAR_16 == ~(u32)0 || VAR_17->xhc_state & VAR_5) {
  FUNC_17(VAR_17);
  goto done;
 }






 if (!FUNC_8(&VAR_18->td[0], VAR_21)) {
  FUNC_15(VAR_17, "Canceled URB td not found on endpoint ring");
  for (VAR_15 = VAR_18->num_tds_done; VAR_15 < VAR_18->num_tds; VAR_15++) {
   VAR_19 = &VAR_18->td[VAR_15];
   if (!FUNC_4(&VAR_19->cancelled_td_list))
    FUNC_3(&VAR_19->cancelled_td_list);
  }
  goto err_giveback;
 }

 if (VAR_17->xhc_state & VAR_6) {
  FUNC_14(VAR_17, VAR_9,
    "HC halted, freeing TD manually.");
  for (VAR_15 = VAR_18->num_tds_done;
       VAR_15 < VAR_18->num_tds;
       VAR_15++) {
   VAR_19 = &VAR_18->td[VAR_15];
   if (!FUNC_4(&VAR_19->td_list))
    FUNC_3(&VAR_19->td_list);
   if (!FUNC_4(&VAR_19->cancelled_td_list))
    FUNC_3(&VAR_19->cancelled_td_list);
  }
  goto err_giveback;
 }

 VAR_15 = VAR_18->num_tds_done;
 if (VAR_15 < VAR_18->num_tds)
  FUNC_14(VAR_17, VAR_9,
    "Cancel URB %p, dev %s, ep 0x%x, "
    "starting at offset 0x%llx",
    VAR_11, VAR_11->dev->devpath,
    VAR_11->ep->desc.bEndpointAddress,
    (unsigned long long) FUNC_20(
     VAR_18->td[VAR_15].start_seg,
     VAR_18->td[VAR_15].first_trb));

 for (; VAR_15 < VAR_18->num_tds; VAR_15++) {
  VAR_19 = &VAR_18->td[VAR_15];
  FUNC_2(&VAR_19->cancelled_td_list, &VAR_22->cancelled_td_list);
 }




 if (!(VAR_22->ep_state & VAR_1)) {
  VAR_23 = FUNC_13(VAR_17, 0, VAR_3);
  if (!VAR_23) {
   VAR_14 = -VAR_0;
   goto done;
  }
  VAR_22->ep_state |= VAR_1;
  VAR_22->stop_cmd_timer.expires = VAR_8 +
   VAR_7 * VAR_4;
  FUNC_0(&VAR_22->stop_cmd_timer);
  FUNC_18(VAR_17, VAR_23, VAR_11->dev->slot_id,
      VAR_20, 0);
  FUNC_19(VAR_17);
 }
done:
 FUNC_7(&VAR_17->lock, VAR_13);
 return VAR_14;

err_giveback:
 if (VAR_18)
  FUNC_21(VAR_18);
 FUNC_12(VAR_10, VAR_11);
 FUNC_7(&VAR_17->lock, VAR_13);
 FUNC_11(VAR_10, VAR_11, -VAR_2);
 return VAR_14;
}
