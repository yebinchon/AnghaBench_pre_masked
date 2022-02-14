
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct xhci_virt_ep {int ep_state; int queued_deq_ptr; TYPE_2__* queued_deq_seg; } ;
struct xhci_hcd {TYPE_1__** devs; } ;
struct xhci_dequeue_state {int new_cycle_state; scalar_t__ stream_id; int new_deq_ptr; TYPE_2__* new_deq_seg; } ;
struct xhci_command {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_5__ {scalar_t__ dma; } ;
struct TYPE_4__ {struct xhci_virt_ep* eps; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct xhci_hcd*,struct xhci_command*,int,int ,int,int,int) ;
 int VAR_4 ;
 int FUNC_7 (scalar_t__) ;
 struct xhci_command* FUNC_8 (struct xhci_hcd*,int,int ) ;
 int FUNC_9 (struct xhci_hcd*,int ,char*,TYPE_2__*,unsigned long long,int ,unsigned long long,int) ;
 int FUNC_10 (struct xhci_hcd*,struct xhci_command*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (struct xhci_hcd*,char*,...) ;

void FUNC_13(struct xhci_hcd *VAR_5,
  unsigned int VAR_6, unsigned int VAR_7,
  struct xhci_dequeue_state *VAR_8)
{
 dma_addr_t VAR_9;
 u32 VAR_10 = FUNC_2(VAR_6);
 u32 VAR_11 = FUNC_0(VAR_7);
 u32 VAR_12 = FUNC_3(VAR_8->stream_id);
 u32 VAR_13 = 0;
 u32 VAR_14 = FUNC_4(VAR_3);
 struct xhci_virt_ep *VAR_15;
 struct xhci_command *VAR_16;
 int VAR_17;

 FUNC_9(VAR_5, VAR_4,
  "Set TR Deq Ptr cmd, new deq seg = %p (0x%llx dma), new deq ptr = %p (0x%llx dma), new cycle = %u",
  VAR_8->new_deq_seg,
  (unsigned long long)VAR_8->new_deq_seg->dma,
  VAR_8->new_deq_ptr,
  (unsigned long long)FUNC_11(
   VAR_8->new_deq_seg, VAR_8->new_deq_ptr),
  VAR_8->new_cycle_state);

 VAR_9 = FUNC_11(VAR_8->new_deq_seg,
        VAR_8->new_deq_ptr);
 if (VAR_9 == 0) {
  FUNC_12(VAR_5, "WARN Cannot submit Set TR Deq Ptr\n");
  FUNC_12(VAR_5, "WARN deq seg = %p, deq pt = %p\n",
     VAR_8->new_deq_seg, VAR_8->new_deq_ptr);
  return;
 }
 VAR_15 = &VAR_5->devs[VAR_6]->eps[VAR_7];
 if ((VAR_15->ep_state & VAR_2)) {
  FUNC_12(VAR_5, "WARN Cannot submit Set TR Deq Ptr\n");
  FUNC_12(VAR_5, "A Set TR Deq Ptr command is pending.\n");
  return;
 }


 VAR_16 = FUNC_8(VAR_5, 0, VAR_0);
 if (!VAR_16)
  return;

 VAR_15->queued_deq_seg = VAR_8->new_deq_seg;
 VAR_15->queued_deq_ptr = VAR_8->new_deq_ptr;
 if (VAR_8->stream_id)
  VAR_13 = FUNC_1(VAR_1);
 VAR_17 = FUNC_6(VAR_5, VAR_16,
  FUNC_5(VAR_9) | VAR_13 | VAR_8->new_cycle_state,
  FUNC_7(VAR_9), VAR_12,
  VAR_10 | VAR_11 | VAR_14, 0);
 if (VAR_17 < 0) {
  FUNC_10(VAR_5, VAR_16);
  return;
 }






 VAR_15->ep_state |= VAR_2;
}
