
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * field; } ;
union xhci_trb {TYPE_1__ generic; } ;
struct xhci_td {union xhci_trb* last_trb; union xhci_trb* first_trb; struct xhci_segment* start_seg; } ;
struct xhci_segment {int dummy; } ;
struct xhci_ring {int dummy; } ;
struct xhci_hcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xhci_hcd*,struct xhci_ring*,struct xhci_segment**,union xhci_trb**) ;
 int FUNC_2 (union xhci_trb*,int ) ;

__attribute__((used)) static void FUNC_3(struct xhci_hcd *VAR_2, struct xhci_ring *VAR_3,
         struct xhci_td *VAR_4, bool VAR_5)
{
 struct xhci_segment *VAR_6 = VAR_4->start_seg;
 union xhci_trb *VAR_7 = VAR_4->first_trb;

 while (1) {
  FUNC_2(VAR_7, VAR_1);


  if (VAR_5 && VAR_7 != VAR_4->first_trb && VAR_7 != VAR_4->last_trb)
   VAR_7->generic.field[3] ^= FUNC_0(VAR_0);

  if (VAR_7 == VAR_4->last_trb)
   break;

  FUNC_1(VAR_2, VAR_3, &VAR_6, &VAR_7);
 }
}
