
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xhci_virt_ep {int ep_state; TYPE_3__* ring; TYPE_2__* stream_info; } ;
struct xhci_hcd {TYPE_1__** devs; } ;
struct TYPE_6__ {scalar_t__ dequeue; } ;
struct TYPE_5__ {int num_streams; } ;
struct TYPE_4__ {struct xhci_virt_ep* eps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xhci_hcd*,int,int,int) ;

void FUNC_1(struct xhci_hcd *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct xhci_virt_ep *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_1 + 1; VAR_4++) {
  VAR_6 = &VAR_2->devs[VAR_3]->eps[VAR_4];

  if (VAR_6->ep_state & VAR_0) {
   for (VAR_5 = 1; VAR_5 < VAR_6->stream_info->num_streams; VAR_5++)
    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
  } else if (VAR_6->ring && VAR_6->ring->dequeue) {
   FUNC_0(VAR_2, VAR_3, VAR_4, 0);
  }
 }

 return;
}
