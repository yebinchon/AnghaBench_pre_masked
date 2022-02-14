
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int control; } ;
struct TYPE_4__ {int * field; } ;
union xhci_trb {TYPE_2__ link; TYPE_1__ generic; } ;
typedef int u32 ;
struct xhci_ring {scalar_t__ type; int cycle_state; union xhci_trb* enqueue; TYPE_3__* enq_seg; int num_trbs_free; } ;
struct xhci_hcd {int quirks; } ;
struct TYPE_6__ {union xhci_trb* trbs; struct TYPE_6__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (union xhci_trb*) ;
 int FUNC_3 (struct xhci_ring*) ;
 scalar_t__ FUNC_4 (union xhci_trb*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_7(struct xhci_hcd *VAR_4, struct xhci_ring *VAR_5,
   bool VAR_6)
{
 u32 VAR_7;
 union xhci_trb *VAR_8;

 VAR_7 = FUNC_1(VAR_5->enqueue->generic.field[3]) & VAR_0;

 if (!FUNC_4(VAR_5->enqueue))
  VAR_5->num_trbs_free--;
 VAR_8 = ++(VAR_5->enqueue);


 while (FUNC_4(VAR_8)) {
  if (!VAR_7 && !VAR_6)
   break;





  if (!(VAR_5->type == VAR_2 &&
        (VAR_4->quirks & VAR_3)) &&
      !FUNC_6(VAR_4)) {
   VAR_8->link.control &= FUNC_0(~VAR_0);
   VAR_8->link.control |= FUNC_0(VAR_7);
  }

  FUNC_5();
  VAR_8->link.control ^= FUNC_0(VAR_1);


  if (FUNC_2(VAR_8))
   VAR_5->cycle_state ^= 1;

  VAR_5->enq_seg = VAR_5->enq_seg->next;
  VAR_5->enqueue = VAR_5->enq_seg->trbs;
  VAR_8 = VAR_5->enqueue;
 }

 FUNC_3(VAR_5);
}
