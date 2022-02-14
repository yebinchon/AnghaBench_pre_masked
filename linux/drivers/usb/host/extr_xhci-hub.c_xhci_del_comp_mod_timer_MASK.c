
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {int num_ports; } ;
struct xhci_hcd {int quirks; scalar_t__ port_status_u0; int comp_mode_recovery_timer; TYPE_1__ usb3_rhub; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct xhci_hcd*,int ,char*) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd *VAR_4, u32 VAR_5,
        u16 VAR_6)
{
 u32 VAR_7 = ((1 << VAR_4->usb3_rhub.num_ports) - 1);
 bool VAR_8 = ((VAR_5 & VAR_0) == VAR_1);

 if (!(VAR_4->quirks & VAR_2))
  return;

 if ((VAR_4->port_status_u0 != VAR_7) && VAR_8) {
  VAR_4->port_status_u0 |= 1 << VAR_6;
  if (VAR_4->port_status_u0 == VAR_7) {
   FUNC_0(&VAR_4->comp_mode_recovery_timer);
   FUNC_1(VAR_4, VAR_3,
    "All USB3 ports have entered U0 already!");
   FUNC_1(VAR_4, VAR_3,
    "Compliance Mode Recovery Timer Deleted.");
  }
 }
}
