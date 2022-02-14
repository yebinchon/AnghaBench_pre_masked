
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct xhci_hcd {int imod_interval; int quirks; TYPE_2__* ir_set; TYPE_1__* op_regs; } ;
struct xhci_command {int dummy; } ;
struct usb_hcd {int uses_new_polling; } ;
struct TYPE_4__ {int irq_pending; int irq_control; int erst_dequeue; } ;
struct TYPE_3__ {int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 struct xhci_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (int,int *) ;
 struct xhci_command* FUNC_6 (struct xhci_hcd*,int,int ) ;
 int FUNC_7 (struct xhci_hcd*) ;
 int FUNC_8 (struct xhci_hcd*,int ,char*,...) ;
 int FUNC_9 (struct xhci_hcd*) ;
 int FUNC_10 (struct xhci_hcd*,struct xhci_command*) ;
 int FUNC_11 (struct xhci_hcd*,struct xhci_command*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_12 (struct xhci_hcd*,int *) ;
 int FUNC_13 (struct xhci_hcd*) ;
 int FUNC_14 (struct usb_hcd*) ;

int FUNC_15(struct usb_hcd *VAR_8)
{
 u32 VAR_9;
 u64 VAR_10;
 int VAR_11;
 struct xhci_hcd *VAR_12 = FUNC_2(VAR_8);





 VAR_8->uses_new_polling = 1;
 if (!FUNC_4(VAR_8))
  return FUNC_13(VAR_12);

 FUNC_8(VAR_12, VAR_7, "xhci_run");

 VAR_11 = FUNC_14(VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_12(VAR_12, &VAR_12->ir_set->erst_dequeue);
 VAR_10 &= ~VAR_2;
 FUNC_8(VAR_12, VAR_7,
   "ERST deq = 64'h%0lx", (long unsigned int) VAR_10);

 FUNC_8(VAR_12, VAR_7,
   "// Set the interrupt modulation register");
 VAR_9 = FUNC_3(&VAR_12->ir_set->irq_control);
 VAR_9 &= ~VAR_3;
 VAR_9 |= (VAR_12->imod_interval / 250) & VAR_3;
 FUNC_5(VAR_9, &VAR_12->ir_set->irq_control);


 VAR_9 = FUNC_3(&VAR_12->op_regs->command);
 VAR_9 |= (VAR_0);
 FUNC_8(VAR_12, VAR_7,
   "// Enable interrupts, cmd = 0x%x.", VAR_9);
 FUNC_5(VAR_9, &VAR_12->op_regs->command);

 VAR_9 = FUNC_3(&VAR_12->ir_set->irq_pending);
 FUNC_8(VAR_12, VAR_7,
   "// Enabling event ring interrupter %p by writing 0x%x to irq_pending",
   VAR_12->ir_set, (unsigned int) FUNC_0(VAR_9));
 FUNC_5(FUNC_0(VAR_9), &VAR_12->ir_set->irq_pending);

 if (VAR_12->quirks & VAR_6) {
  struct xhci_command *VAR_13;

  VAR_13 = FUNC_6(VAR_12, 0, VAR_4);
  if (!VAR_13)
   return -VAR_1;

  VAR_11 = FUNC_11(VAR_12, VAR_13, 0, 0, 0,
    FUNC_1(VAR_5));
  if (VAR_11)
   FUNC_10(VAR_12, VAR_13);
 }
 FUNC_8(VAR_12, VAR_7,
   "Finished xhci_run for USB2 roothub");

 FUNC_7(VAR_12);

 FUNC_9(VAR_12);

 return 0;
}
