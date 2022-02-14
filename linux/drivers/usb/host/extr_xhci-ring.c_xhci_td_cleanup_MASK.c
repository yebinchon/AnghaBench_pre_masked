
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_td {int cancelled_td_list; int td_list; struct urb* urb; } ;
struct xhci_ring {int dummy; } ;
struct xhci_hcd {int dummy; } ;
struct urb {scalar_t__ actual_length; scalar_t__ transfer_buffer_length; int transfer_flags; int pipe; TYPE_1__* ep; } ;
struct TYPE_2__ {int desc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct urb*) ;
 scalar_t__ FUNC_1 (struct xhci_td*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct xhci_hcd*,char*,struct urb*,scalar_t__,scalar_t__,int) ;
 int FUNC_7 (struct xhci_hcd*,struct xhci_td*,int) ;
 int FUNC_8 (struct xhci_hcd*,struct xhci_ring*,struct xhci_td*) ;
 int FUNC_9 (struct xhci_hcd*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct xhci_hcd *VAR_2, struct xhci_td *VAR_3,
  struct xhci_ring *VAR_4, int *VAR_5)
{
 struct urb *VAR_6 = ((void*)0);


 VAR_6 = VAR_3->urb;


 FUNC_8(VAR_2, VAR_4, VAR_3);






 if (VAR_6->actual_length > VAR_6->transfer_buffer_length) {
  FUNC_9(VAR_2, "URB req %u and actual %u transfer length mismatch\n",
     VAR_6->transfer_buffer_length, VAR_6->actual_length);
  VAR_6->actual_length = 0;
  *VAR_5 = 0;
 }
 FUNC_2(&VAR_3->td_list);

 if (!FUNC_3(&VAR_3->cancelled_td_list))
  FUNC_2(&VAR_3->cancelled_td_list);

 FUNC_0(VAR_6);

 if (FUNC_1(VAR_3)) {
  if ((VAR_6->actual_length != VAR_6->transfer_buffer_length &&
       (VAR_6->transfer_flags & VAR_1)) ||
      (*VAR_5 != 0 && !FUNC_4(&VAR_6->ep->desc)))
   FUNC_6(VAR_2, "Giveback URB %p, len = %d, expected = %d, status = %d\n",
     VAR_6, VAR_6->actual_length,
     VAR_6->transfer_buffer_length, *VAR_5);


  if (FUNC_5(VAR_6->pipe) == VAR_0)
   *VAR_5 = 0;
  FUNC_7(VAR_2, VAR_3, *VAR_5);
 }

 return 0;
}
