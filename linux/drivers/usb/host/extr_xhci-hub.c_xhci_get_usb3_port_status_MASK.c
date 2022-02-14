
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xhci_port {int hcd_portnum; TYPE_1__* rhub; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_bus_state {int suspended_ports; } ;
struct TYPE_2__ {int hcd; struct xhci_bus_state bus_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct xhci_hcd* FUNC_0 (int ) ;
 int FUNC_1 (struct xhci_hcd*,int,int) ;
 int FUNC_2 (struct xhci_hcd*,int*,int) ;

__attribute__((used)) static void FUNC_3(struct xhci_port *VAR_11, u32 *VAR_12,
          u32 VAR_13)
{
 struct xhci_bus_state *VAR_14;
 struct xhci_hcd *VAR_15;
 u32 VAR_16;
 u32 VAR_17;

 VAR_14 = &VAR_11->rhub->bus_state;
 VAR_15 = FUNC_0(VAR_11->rhub->hcd);
 VAR_16 = VAR_13 & VAR_2;
 VAR_17 = VAR_11->hcd_portnum;
 if (VAR_13 & VAR_1 && (VAR_16 != VAR_9))
  *VAR_12 |= VAR_7 << 16;
 if (VAR_13 & VAR_4)
  *VAR_12 |= VAR_5 << 16;
 if (VAR_13 & VAR_0)
  *VAR_12 |= VAR_6 << 16;


 if (VAR_13 & VAR_3) {
  *VAR_12 |= VAR_8;

  if (VAR_16 == VAR_10)
   VAR_14->suspended_ports &= ~(1 << VAR_17);
 }

 FUNC_2(VAR_15, VAR_12, VAR_13);
 FUNC_1(VAR_15, VAR_13, VAR_17);
}
