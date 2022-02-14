
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * field; } ;
union xhci_trb {TYPE_1__ generic; } ;
typedef int u32 ;
struct xhci_segment {int dummy; } ;
struct xhci_ring {struct xhci_segment* deq_seg; union xhci_trb* dequeue; } ;
struct xhci_hcd {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xhci_hcd*,struct xhci_ring*,struct xhci_segment**,union xhci_trb**) ;
 int FUNC_3 (union xhci_trb*) ;
 int FUNC_4 (union xhci_trb*) ;

__attribute__((used)) static int FUNC_5(struct xhci_hcd *VAR_0, struct xhci_ring *VAR_1,
      union xhci_trb *VAR_2)
{
 u32 VAR_3;
 union xhci_trb *VAR_4 = VAR_1->dequeue;
 struct xhci_segment *VAR_5 = VAR_1->deq_seg;

 for (VAR_3 = 0; VAR_4 != VAR_2; FUNC_2(VAR_0, VAR_1, &VAR_5, &VAR_4)) {
  if (!FUNC_4(VAR_4) && !FUNC_3(VAR_4))
   VAR_3 += FUNC_0(FUNC_1(VAR_4->generic.field[2]));
 }
 return VAR_3;
}
