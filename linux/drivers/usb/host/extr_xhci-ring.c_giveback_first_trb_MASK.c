
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int dummy; } ;
struct xhci_generic_trb {int * field; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct xhci_hcd*,int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct xhci_hcd *VAR_1, int VAR_2,
  unsigned int VAR_3, unsigned int VAR_4, int VAR_5,
  struct xhci_generic_trb *VAR_6)
{




 FUNC_1();
 if (VAR_5)
  VAR_6->field[3] |= FUNC_0(VAR_5);
 else
  VAR_6->field[3] &= FUNC_0(~VAR_0);
 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
}
