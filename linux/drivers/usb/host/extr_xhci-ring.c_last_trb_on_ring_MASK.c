
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union xhci_trb {int dummy; } xhci_trb ;
struct xhci_segment {scalar_t__ next; } ;
struct xhci_ring {scalar_t__ first_seg; } ;


 scalar_t__ FUNC_0 (struct xhci_segment*,union xhci_trb*) ;

__attribute__((used)) static bool FUNC_1(struct xhci_ring *VAR_0,
   struct xhci_segment *VAR_1, union xhci_trb *VAR_2)
{
 return FUNC_0(VAR_1, VAR_2) && (VAR_1->next == VAR_0->first_seg);
}
