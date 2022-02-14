
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xhci_virt_ep {int dummy; } ;
struct xhci_virt_device {int out_ctx; } ;
struct xhci_transfer_event {int transfer_len; int buffer; int flags; } ;
struct xhci_td {scalar_t__ last_trb; } ;
struct xhci_ring {scalar_t__ dequeue; int stream_id; } ;
struct xhci_hcd {struct xhci_virt_device** devs; } ;
struct xhci_ep_ctx {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct xhci_hcd*,struct xhci_ring*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct xhci_hcd*,unsigned int,int,int ,struct xhci_td*,int ) ;
 struct xhci_ring* FUNC_7 (struct xhci_virt_ep*,int ) ;
 struct xhci_ep_ctx* FUNC_8 (struct xhci_hcd*,int ,int) ;
 scalar_t__ FUNC_9 (struct xhci_hcd*,struct xhci_ep_ctx*,scalar_t__) ;
 int FUNC_10 (struct xhci_hcd*,struct xhci_td*,struct xhci_ring*,int*) ;

__attribute__((used)) static int FUNC_11(struct xhci_hcd *VAR_5, struct xhci_td *VAR_6,
 struct xhci_transfer_event *VAR_7,
 struct xhci_virt_ep *VAR_8, int *VAR_9)
{
 struct xhci_virt_device *VAR_10;
 struct xhci_ep_ctx *VAR_11;
 struct xhci_ring *VAR_12;
 unsigned int VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_13 = FUNC_2(FUNC_4(VAR_7->flags));
 VAR_10 = VAR_5->devs[VAR_13];
 VAR_15 = FUNC_1(FUNC_4(VAR_7->flags)) - 1;
 VAR_12 = FUNC_7(VAR_8, FUNC_5(VAR_7->buffer));
 VAR_11 = FUNC_8(VAR_5, VAR_10->out_ctx, VAR_15);
 VAR_14 = FUNC_0(FUNC_4(VAR_7->transfer_len));

 if (VAR_14 == VAR_2 ||
   VAR_14 == VAR_1 ||
   VAR_14 == VAR_3) {




  return 0;
 }
 if (VAR_14 == VAR_0 ||
  FUNC_9(VAR_5, VAR_11,
      VAR_14)) {





  FUNC_6(VAR_5, VAR_13, VAR_15,
     VAR_12->stream_id, VAR_6, VAR_4);
 } else {

  while (VAR_12->dequeue != VAR_6->last_trb)
   FUNC_3(VAR_5, VAR_12);
  FUNC_3(VAR_5, VAR_12);
 }

 return FUNC_10(VAR_5, VAR_6, VAR_12, VAR_9);
}
