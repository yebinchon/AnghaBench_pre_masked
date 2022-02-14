
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_virt_ep {int ep_state; TYPE_1__* stream_info; struct xhci_ring* ring; } ;
struct xhci_ring {int dummy; } ;
struct xhci_hcd {TYPE_2__** devs; } ;
struct TYPE_4__ {struct xhci_virt_ep* eps; } ;
struct TYPE_3__ {unsigned int num_streams; struct xhci_ring** stream_rings; } ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_hcd*,char*,unsigned int,unsigned int,...) ;

struct xhci_ring *FUNC_1(struct xhci_hcd *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3,
  unsigned int VAR_4)
{
 struct xhci_virt_ep *VAR_5;

 VAR_5 = &VAR_1->devs[VAR_2]->eps[VAR_3];

 if (!(VAR_5->ep_state & VAR_0))
  return VAR_5->ring;

 if (VAR_4 == 0) {
  FUNC_0(VAR_1,
    "WARN: Slot ID %u, ep index %u has streams, "
    "but URB has no stream ID.\n",
    VAR_2, VAR_3);
  return ((void*)0);
 }

 if (VAR_4 < VAR_5->stream_info->num_streams)
  return VAR_5->stream_info->stream_rings[VAR_4];

 FUNC_0(VAR_1,
   "WARN: Slot ID %u, ep index %u has "
   "stream IDs 1 to %u allocated, "
   "but stream ID %u is requested.\n",
   VAR_2, VAR_3,
   VAR_5->stream_info->num_streams - 1,
   VAR_4);
 return ((void*)0);
}
