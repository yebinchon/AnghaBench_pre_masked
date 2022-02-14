
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {scalar_t__ resuming_ports; scalar_t__ suspended_ports; scalar_t__ port_c_suspend; } ;
struct TYPE_13__ {TYPE_5__ bus_state; } ;
struct TYPE_10__ {scalar_t__ resuming_ports; scalar_t__ suspended_ports; scalar_t__ port_c_suspend; } ;
struct TYPE_11__ {TYPE_3__ bus_state; } ;
struct xhci_hcd {int quirks; TYPE_6__ usb3_rhub; TYPE_4__ usb2_rhub; TYPE_2__* op_regs; } ;
struct TYPE_8__ {int controller; } ;
struct TYPE_14__ {TYPE_1__ self; } ;
struct TYPE_9__ {int status; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct xhci_hcd*,int ,char*) ;
 int FUNC_6 (int *,int,int ,int) ;
 TYPE_7__* FUNC_7 (struct xhci_hcd*) ;
 int FUNC_8 (struct xhci_hcd*,char*) ;

int FUNC_9(struct xhci_hcd *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(&VAR_7->op_regs->status);

 if (VAR_9 == ~(u32)0) {
  FUNC_8(VAR_7, "Host not accessible, reset failed.\n");
  return -VAR_1;
 }

 if ((VAR_9 & VAR_3) == 0) {
  FUNC_8(VAR_7, "Host controller not halted, aborting reset.\n");
  return 0;
 }

 FUNC_5(VAR_7, VAR_6, "// Reset the HC");
 VAR_8 = FUNC_0(&VAR_7->op_regs->command);
 VAR_8 |= VAR_0;
 FUNC_4(VAR_8, &VAR_7->op_regs->command);
 if (VAR_7->quirks & VAR_5)
  FUNC_2(1000);

 VAR_10 = FUNC_6(&VAR_7->op_regs->command,
   VAR_0, 0, 10 * 1000 * 1000);
 if (VAR_10)
  return VAR_10;

 if (VAR_7->quirks & VAR_4)
  FUNC_3(FUNC_1(FUNC_7(VAR_7)->self.controller));

 FUNC_5(VAR_7, VAR_6,
    "Wait for controller to be ready for doorbell rings");




 VAR_10 = FUNC_6(&VAR_7->op_regs->status,
   VAR_2, 0, 10 * 1000 * 1000);

 VAR_7->usb2_rhub.bus_state.port_c_suspend = 0;
 VAR_7->usb2_rhub.bus_state.suspended_ports = 0;
 VAR_7->usb2_rhub.bus_state.resuming_ports = 0;
 VAR_7->usb3_rhub.bus_state.port_c_suspend = 0;
 VAR_7->usb3_rhub.bus_state.suspended_ports = 0;
 VAR_7->usb3_rhub.bus_state.resuming_ports = 0;

 return VAR_10;
}
