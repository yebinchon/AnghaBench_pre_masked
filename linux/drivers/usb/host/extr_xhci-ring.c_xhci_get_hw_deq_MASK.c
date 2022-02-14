
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xhci_virt_ep {int ep_state; TYPE_1__* stream_info; } ;
struct xhci_virt_device {int out_ctx; struct xhci_virt_ep* eps; } ;
struct xhci_stream_ctx {int stream_ring; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_ep_ctx {int deq; } ;
struct TYPE_2__ {struct xhci_stream_ctx* stream_ctx_array; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct xhci_ep_ctx* FUNC_1 (struct xhci_hcd*,int ,unsigned int) ;

__attribute__((used)) static u64 FUNC_2(struct xhci_hcd *VAR_1, struct xhci_virt_device *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 struct xhci_ep_ctx *VAR_5;
 struct xhci_stream_ctx *VAR_6;
 struct xhci_virt_ep *VAR_7;

 VAR_7 = &VAR_2->eps[VAR_3];

 if (VAR_7->ep_state & VAR_0) {
  VAR_6 = &VAR_7->stream_info->stream_ctx_array[VAR_4];
  return FUNC_0(VAR_6->stream_ring);
 }
 VAR_5 = FUNC_1(VAR_1, VAR_2->out_ctx, VAR_3);
 return FUNC_0(VAR_5->deq);
}
