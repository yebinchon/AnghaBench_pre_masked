
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union xhci_trb {int dummy; } xhci_trb ;
typedef int u64 ;
typedef int u32 ;
struct xhci_hcd {int xhc_state; int lock; TYPE_3__* ir_set; TYPE_2__* event_ring; TYPE_1__* op_regs; } ;
struct usb_hcd {int msi_enabled; } ;
typedef int irqreturn_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {int erst_dequeue; int irq_pending; } ;
struct TYPE_5__ {union xhci_trb* dequeue; int deq_seg; } ;
struct TYPE_4__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct xhci_hcd*,char*) ;
 int FUNC_6 (struct xhci_hcd*) ;
 scalar_t__ FUNC_7 (struct xhci_hcd*) ;
 int FUNC_8 (struct xhci_hcd*) ;
 int FUNC_9 (struct xhci_hcd*,int *) ;
 scalar_t__ FUNC_10 (int ,union xhci_trb*) ;
 int FUNC_11 (struct xhci_hcd*,char*) ;
 int FUNC_12 (struct xhci_hcd*,int,int *) ;

irqreturn_t FUNC_13(struct usb_hcd *VAR_9)
{
 struct xhci_hcd *VAR_10 = FUNC_0(VAR_9);
 union xhci_trb *VAR_11;
 irqreturn_t VAR_12 = VAR_4;
 unsigned long VAR_13;
 dma_addr_t VAR_14;
 u64 VAR_15;
 u32 VAR_16;

 FUNC_2(&VAR_10->lock, VAR_13);

 VAR_16 = FUNC_1(&VAR_10->op_regs->status);
 if (VAR_16 == ~(u32)0) {
  FUNC_8(VAR_10);
  VAR_12 = VAR_3;
  goto out;
 }

 if (!(VAR_16 & VAR_5))
  goto out;

 if (VAR_16 & VAR_6) {
  FUNC_11(VAR_10, "WARNING: Host System Error\n");
  FUNC_6(VAR_10);
  VAR_12 = VAR_3;
  goto out;
 }






 VAR_16 |= VAR_5;
 FUNC_4(VAR_16, &VAR_10->op_regs->status);

 if (!VAR_9->msi_enabled) {
  u32 VAR_17;
  VAR_17 = FUNC_1(&VAR_10->ir_set->irq_pending);
  VAR_17 |= VAR_2;
  FUNC_4(VAR_17, &VAR_10->ir_set->irq_pending);
 }

 if (VAR_10->xhc_state & VAR_7 ||
     VAR_10->xhc_state & VAR_8) {
  FUNC_5(VAR_10, "xHCI dying, ignoring interrupt. "
    "Shouldn't IRQs be disabled?\n");



  VAR_15 = FUNC_9(VAR_10, &VAR_10->ir_set->erst_dequeue);
  FUNC_12(VAR_10, VAR_15 | VAR_0,
    &VAR_10->ir_set->erst_dequeue);
  VAR_12 = VAR_3;
  goto out;
 }

 VAR_11 = VAR_10->event_ring->dequeue;



 while (FUNC_7(VAR_10) > 0) {}

 VAR_15 = FUNC_9(VAR_10, &VAR_10->ir_set->erst_dequeue);

 if (VAR_11 != VAR_10->event_ring->dequeue) {
  VAR_14 = FUNC_10(VAR_10->event_ring->deq_seg,
    VAR_10->event_ring->dequeue);
  if (VAR_14 == 0)
   FUNC_11(VAR_10, "WARN something wrong with SW event "
     "ring dequeue ptr.\n");

  VAR_15 &= VAR_1;
  VAR_15 |= ((u64) VAR_14 & (u64) ~VAR_1);
 }


 VAR_15 |= VAR_0;
 FUNC_12(VAR_10, VAR_15, &VAR_10->ir_set->erst_dequeue);
 VAR_12 = VAR_3;

out:
 FUNC_3(&VAR_10->lock, VAR_13);

 return VAR_12;
}
