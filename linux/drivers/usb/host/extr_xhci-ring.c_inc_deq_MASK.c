
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_ring {scalar_t__ type; int cycle_state; TYPE_1__* deq_seg; scalar_t__ dequeue; int num_trbs_free; } ;
struct xhci_hcd {int dummy; } ;
struct TYPE_3__ {scalar_t__ trbs; struct TYPE_3__* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct xhci_ring*,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (struct xhci_ring*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

void FUNC_4(struct xhci_hcd *VAR_1, struct xhci_ring *VAR_2)
{

 if (VAR_2->type == VAR_0) {
  if (!FUNC_1(VAR_2->deq_seg, VAR_2->dequeue)) {
   VAR_2->dequeue++;
   goto out;
  }
  if (FUNC_0(VAR_2, VAR_2->deq_seg, VAR_2->dequeue))
   VAR_2->cycle_state ^= 1;
  VAR_2->deq_seg = VAR_2->deq_seg->next;
  VAR_2->dequeue = VAR_2->deq_seg->trbs;
  goto out;
 }


 if (!FUNC_3(VAR_2->dequeue)) {
  VAR_2->dequeue++;
  VAR_2->num_trbs_free++;
 }
 while (FUNC_3(VAR_2->dequeue)) {
  VAR_2->deq_seg = VAR_2->deq_seg->next;
  VAR_2->dequeue = VAR_2->deq_seg->trbs;
 }

out:
 FUNC_2(VAR_2);

 return;
}
