
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct xhci_port {scalar_t__ hcd_portnum; TYPE_2__* rhub; int addr; } ;
struct xhci_hcd {int dummy; } ;
struct TYPE_4__ {int busnum; } ;
struct TYPE_6__ {TYPE_1__ self; } ;
struct TYPE_5__ {TYPE_3__* hcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct xhci_hcd*,char*,int ,scalar_t__,int,int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct xhci_hcd *VAR_2, struct xhci_port *VAR_3,
    u32 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_3->addr);
 VAR_5 = FUNC_3(VAR_6);
 VAR_5 &= ~VAR_1;
 VAR_5 |= VAR_0 | VAR_4;
 FUNC_1(VAR_5, VAR_3->addr);

 FUNC_2(VAR_2, "Set port %d-%d link state, portsc: 0x%x, write 0x%x",
   VAR_3->rhub->hcd->self.busnum, VAR_3->hcd_portnum + 1,
   VAR_6, VAR_5);
}
