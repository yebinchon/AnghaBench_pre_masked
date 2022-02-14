
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xhci_ring {TYPE_1__* enqueue; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_generic_trb {void** field; } ;
struct TYPE_2__ {struct xhci_generic_trb generic; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct xhci_hcd*,struct xhci_ring*,int) ;
 int FUNC_2 (struct xhci_ring*,struct xhci_generic_trb*) ;

__attribute__((used)) static void FUNC_3(struct xhci_hcd *VAR_0, struct xhci_ring *VAR_1,
  bool VAR_2,
  u32 VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct xhci_generic_trb *VAR_7;

 VAR_7 = &VAR_1->enqueue->generic;
 VAR_7->field[0] = FUNC_0(VAR_3);
 VAR_7->field[1] = FUNC_0(VAR_4);
 VAR_7->field[2] = FUNC_0(VAR_5);
 VAR_7->field[3] = FUNC_0(VAR_6);

 FUNC_2(VAR_1, VAR_7);

 FUNC_1(VAR_0, VAR_1, VAR_2);
}
