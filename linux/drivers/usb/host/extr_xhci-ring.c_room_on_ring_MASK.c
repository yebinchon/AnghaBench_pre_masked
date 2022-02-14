
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_ring {unsigned int num_trbs_free; scalar_t__ type; int dequeue; TYPE_1__* deq_seg; } ;
struct xhci_hcd {int dummy; } ;
struct TYPE_2__ {int trbs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct xhci_hcd *VAR_2, struct xhci_ring *VAR_3,
  unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_3->num_trbs_free < VAR_4)
  return 0;

 if (VAR_3->type != VAR_0 && VAR_3->type != VAR_1) {
  VAR_5 = VAR_3->dequeue - VAR_3->deq_seg->trbs;
  if (VAR_3->num_trbs_free < VAR_4 + VAR_5)
   return 0;
 }

 return 1;
}
