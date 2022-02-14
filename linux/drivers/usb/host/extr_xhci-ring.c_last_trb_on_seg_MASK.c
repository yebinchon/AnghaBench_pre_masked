
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union xhci_trb {int dummy; } xhci_trb ;
struct xhci_segment {union xhci_trb* trbs; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct xhci_segment *VAR_1, union xhci_trb *VAR_2)
{
 return VAR_2 == &VAR_1->trbs[VAR_0 - 1];
}
