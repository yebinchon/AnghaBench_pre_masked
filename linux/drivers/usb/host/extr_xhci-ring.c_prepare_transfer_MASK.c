
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_device {int out_ctx; } ;
struct xhci_td {int first_trb; int start_seg; int td_list; struct urb* urb; int cancelled_td_list; } ;
struct xhci_ring {int enqueue; int enq_seg; int td_list; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_ep_ctx {int dummy; } ;
struct urb_priv {struct xhci_td* td; } ;
struct urb {TYPE_1__* dev; struct urb_priv* hcpriv; } ;
typedef int gfp_t ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_ep_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct xhci_hcd*,struct xhci_ring*,int ,unsigned int,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,struct urb*) ;
 int FUNC_7 (struct xhci_hcd*,char*,unsigned int) ;
 struct xhci_ep_ctx* FUNC_8 (struct xhci_hcd*,int ,unsigned int) ;
 struct xhci_ring* FUNC_9 (struct xhci_virt_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct xhci_hcd *VAR_1,
  struct xhci_virt_device *VAR_2,
  unsigned int VAR_3,
  unsigned int VAR_4,
  unsigned int VAR_5,
  struct urb *VAR_6,
  unsigned int VAR_7,
  gfp_t VAR_8)
{
 int VAR_9;
 struct urb_priv *VAR_10;
 struct xhci_td *VAR_11;
 struct xhci_ring *VAR_12;
 struct xhci_ep_ctx *VAR_13 = FUNC_8(VAR_1, VAR_2->out_ctx, VAR_3);

 VAR_12 = FUNC_9(VAR_2, VAR_3, VAR_4);
 if (!VAR_12) {
  FUNC_7(VAR_1, "Can't prepare ring for bad stream ID %u\n",
    VAR_4);
  return -VAR_0;
 }

 VAR_9 = FUNC_4(VAR_1, VAR_12, FUNC_0(VAR_13),
      VAR_5, VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_10 = VAR_6->hcpriv;
 VAR_11 = &VAR_10->td[VAR_7];

 FUNC_1(&VAR_11->td_list);
 FUNC_1(&VAR_11->cancelled_td_list);

 if (VAR_7 == 0) {
  VAR_9 = FUNC_6(FUNC_2(VAR_6->dev->bus), VAR_6);
  if (FUNC_5(VAR_9))
   return VAR_9;
 }

 VAR_11->urb = VAR_6;

 FUNC_3(&VAR_11->td_list, &VAR_12->td_list);
 VAR_11->start_seg = VAR_12->enq_seg;
 VAR_11->first_trb = VAR_12->enqueue;

 return 0;
}
