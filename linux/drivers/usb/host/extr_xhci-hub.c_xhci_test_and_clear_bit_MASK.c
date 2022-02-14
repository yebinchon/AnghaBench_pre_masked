
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_port {int addr; } ;
struct xhci_hcd {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;

void FUNC_3(struct xhci_hcd *VAR_0, struct xhci_port *VAR_1,
        u32 VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1->addr);
 if (VAR_3 & VAR_2) {
  VAR_3 = FUNC_2(VAR_3);
  VAR_3 |= VAR_2;
  FUNC_1(VAR_3, VAR_1->addr);
 }
}
