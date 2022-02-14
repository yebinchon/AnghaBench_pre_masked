
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xhci_port {int hcd_portnum; TYPE_1__* rhub; } ;
struct xhci_bus_state {int suspended_ports; int port_c_suspend; int resuming_ports; scalar_t__* resume_done; } ;
struct TYPE_2__ {struct xhci_bus_state bus_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct xhci_port*,int*,int,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct xhci_port *VAR_9, u32 *VAR_10,
          u32 VAR_11, unsigned long VAR_12)
{
 struct xhci_bus_state *VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_13 = &VAR_9->rhub->bus_state;
 VAR_14 = VAR_11 & VAR_0;
 VAR_15 = VAR_9->hcd_portnum;


 if (VAR_11 & VAR_1) {
  *VAR_10 |= VAR_3;


  if (VAR_14 == VAR_8)
   *VAR_10 |= VAR_4;
  if (VAR_14 == VAR_7)
   *VAR_10 |= VAR_2;
  if (VAR_14 == VAR_6) {
   VAR_13->resume_done[VAR_15] = 0;
   FUNC_0(VAR_15, &VAR_13->resuming_ports);
   if (VAR_13->suspended_ports & (1 << VAR_15)) {
    VAR_13->suspended_ports &= ~(1 << VAR_15);
    VAR_13->port_c_suspend |= 1 << VAR_15;
   }
  }
  if (VAR_14 == VAR_5) {
   VAR_16 = FUNC_1(VAR_9, VAR_10,
        VAR_11, VAR_12);
   if (VAR_16)
    return;
  }
 }
}
