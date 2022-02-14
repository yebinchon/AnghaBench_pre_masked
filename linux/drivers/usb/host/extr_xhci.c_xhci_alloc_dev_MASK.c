
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_virt_device {int out_ctx; } ;
struct xhci_slot_ctx {int dummy; } ;
struct xhci_hcd {int quirks; struct xhci_virt_device** devs; int lock; int num_active_eps; TYPE_1__* cap_regs; } ;
struct xhci_command {int slot_id; scalar_t__ status; int completion; } ;
struct TYPE_4__ {int controller; } ;
struct usb_hcd {TYPE_2__ self; } ;
struct usb_device {int slot_id; } ;
struct TYPE_3__ {int hcs_params1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct xhci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct xhci_slot_ctx*) ;
 int FUNC_7 (int ) ;
 struct xhci_command* FUNC_8 (struct xhci_hcd*,int,int ) ;
 int FUNC_9 (struct xhci_hcd*,int,struct usb_device*,int ) ;
 int FUNC_10 (struct xhci_hcd*,char*) ;
 int FUNC_11 (struct xhci_hcd*,int) ;
 int FUNC_12 (struct xhci_hcd*,int) ;
 int FUNC_13 (struct xhci_hcd*,char*,...) ;
 int FUNC_14 (struct xhci_hcd*,struct xhci_command*) ;
 int FUNC_15 (struct xhci_hcd*,int) ;
 struct xhci_slot_ctx* FUNC_16 (struct xhci_hcd*,int ) ;
 int FUNC_17 (struct xhci_hcd*,struct xhci_command*,int ,int ) ;
 int FUNC_18 (struct xhci_hcd*) ;
 int FUNC_19 (struct xhci_hcd*) ;
 int FUNC_20 (struct xhci_hcd*,char*,...) ;

int FUNC_21(struct usb_hcd *VAR_6, struct usb_device *VAR_7)
{
 struct xhci_hcd *VAR_8 = FUNC_1(VAR_6);
 struct xhci_virt_device *VAR_9;
 struct xhci_slot_ctx *VAR_10;
 unsigned long VAR_11;
 int VAR_12, VAR_13;
 struct xhci_command *VAR_14;

 VAR_14 = FUNC_8(VAR_8, 1, VAR_1);
 if (!VAR_14)
  return 0;

 FUNC_4(&VAR_8->lock, VAR_11);
 VAR_12 = FUNC_17(VAR_8, VAR_14, VAR_3, 0);
 if (VAR_12) {
  FUNC_5(&VAR_8->lock, VAR_11);
  FUNC_10(VAR_8, "FIXME: allocate a command ring segment\n");
  FUNC_14(VAR_8, VAR_14);
  return 0;
 }
 FUNC_19(VAR_8);
 FUNC_5(&VAR_8->lock, VAR_11);

 FUNC_7(VAR_14->completion);
 VAR_13 = VAR_14->slot_id;

 if (!VAR_13 || VAR_14->status != VAR_0) {
  FUNC_13(VAR_8, "Error while assigning device slot ID\n");
  FUNC_13(VAR_8, "Max number of devices this xHCI host supports is %u.\n",
    FUNC_0(
     FUNC_3(&VAR_8->cap_regs->hcs_params1)));
  FUNC_14(VAR_8, VAR_14);
  return 0;
 }

 FUNC_14(VAR_8, VAR_14);

 if ((VAR_8->quirks & VAR_4)) {
  FUNC_4(&VAR_8->lock, VAR_11);
  VAR_12 = FUNC_18(VAR_8);
  if (VAR_12) {
   FUNC_5(&VAR_8->lock, VAR_11);
   FUNC_20(VAR_8, "Not enough host resources, "
     "active endpoint contexts = %u\n",
     VAR_8->num_active_eps);
   goto disable_slot;
  }
  FUNC_5(&VAR_8->lock, VAR_11);
 }




 if (!FUNC_9(VAR_8, VAR_13, VAR_7, VAR_2)) {
  FUNC_20(VAR_8, "Could not allocate xHCI USB device data structures\n");
  goto disable_slot;
 }
 VAR_9 = VAR_8->devs[VAR_13];
 VAR_10 = FUNC_16(VAR_8, VAR_9->out_ctx);
 FUNC_6(VAR_10);

 VAR_7->slot_id = VAR_13;

 FUNC_11(VAR_8, VAR_13);






 if (VAR_8->quirks & VAR_5)
  FUNC_2(VAR_6->self.controller);




 return 1;

disable_slot:
 VAR_12 = FUNC_12(VAR_8, VAR_7->slot_id);
 if (VAR_12)
  FUNC_15(VAR_8, VAR_7->slot_id);

 return 0;
}
