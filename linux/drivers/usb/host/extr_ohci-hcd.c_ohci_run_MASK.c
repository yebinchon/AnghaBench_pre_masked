
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int controller; } ;
struct usb_hcd {int uses_new_polling; int flags; TYPE_2__ self; } ;
struct ohci_hcd {int fminterval; int hc_control; int flags; int lock; scalar_t__ next_statechange; TYPE_3__* regs; int rh_state; scalar_t__ hcca_dma; int hcca; } ;
struct ohci_hcca {int dummy; } ;
struct TYPE_4__ {int b; int status; int a; } ;
struct TYPE_6__ {int control; TYPE_1__ roothub; int intrenable; int intrstatus; int periodicstart; int fminterval; int hcca; int ed_bulkhead; int ed_controlhead; int cmdstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

 int VAR_14 ;


 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_24 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ohci_hcd*,char*,...) ;
 int FUNC_6 (struct ohci_hcd*) ;
 int FUNC_7 (struct ohci_hcd*,char*,...) ;
 int FUNC_8 (struct ohci_hcd*,int *) ;
 struct usb_hcd* FUNC_9 (struct ohci_hcd*) ;
 int FUNC_10 (struct ohci_hcd*,int,int *) ;
 int FUNC_11 (struct ohci_hcd*) ;
 int FUNC_12 (struct ohci_hcd*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17 (struct ohci_hcd *VAR_25)
{
 u32 VAR_26, VAR_27;
 int VAR_28 = VAR_25->fminterval == 0;
 struct usb_hcd *VAR_29 = FUNC_9(VAR_25);

 VAR_25->rh_state = VAR_12;


 if (VAR_28) {

  VAR_27 = FUNC_8 (VAR_25, &VAR_25->regs->fminterval);
  VAR_25->fminterval = VAR_27 & 0x3fff;
  if (VAR_25->fminterval != VAR_1)
   FUNC_5 (VAR_25, "fminterval delta %d\n",
    VAR_25->fminterval - VAR_1);
  VAR_25->fminterval |= FUNC_0 (VAR_25->fminterval) << 16;

 }







 if ((VAR_25->hc_control & VAR_5) != 0)
  FUNC_1(VAR_29->self.controller, 1);

 switch (VAR_25->hc_control & VAR_4) {
 case 130:
  VAR_27 = 0;
  break;
 case 128:
 case 129:
  VAR_25->hc_control &= VAR_5;
  VAR_25->hc_control |= 129;
  VAR_27 = 10 ;
  break;

 default:
  VAR_25->hc_control &= VAR_5;
  VAR_25->hc_control |= VAR_14;
  VAR_27 = 50 ;
  break;
 }
 FUNC_10 (VAR_25, VAR_25->hc_control, &VAR_25->regs->control);

 (void) FUNC_8 (VAR_25, &VAR_25->regs->control);
 FUNC_4(VAR_27);

 FUNC_3 (VAR_25->hcca, 0, sizeof (struct ohci_hcca));


 FUNC_14 (&VAR_25->lock);

retry:

 FUNC_10 (VAR_25, VAR_6, &VAR_25->regs->cmdstatus);
 VAR_27 = 30;
 while ((FUNC_8 (VAR_25, &VAR_25->regs->cmdstatus) & VAR_6) != 0) {
  if (--VAR_27 == 0) {
   FUNC_15 (&VAR_25->lock);
   FUNC_7 (VAR_25, "USB HC reset timed out!\n");
   return -1;
  }
  FUNC_16 (1);
 }
 if (VAR_25->flags & VAR_10) {
  FUNC_10 (VAR_25, VAR_25->hc_control, &VAR_25->regs->control);

  (void) FUNC_8 (VAR_25, &VAR_25->regs->control);
 }



 FUNC_10 (VAR_25, 0, &VAR_25->regs->ed_controlhead);
 FUNC_10 (VAR_25, 0, &VAR_25->regs->ed_bulkhead);


 FUNC_10 (VAR_25, (u32) VAR_25->hcca_dma, &VAR_25->regs->hcca);

 FUNC_11 (VAR_25);




 if ((FUNC_8 (VAR_25, &VAR_25->regs->fminterval) & 0x3fff0000) == 0
   || !FUNC_8 (VAR_25, &VAR_25->regs->periodicstart)) {
  if (!(VAR_25->flags & VAR_10)) {
   VAR_25->flags |= VAR_10;
   FUNC_5 (VAR_25, "enabling initreset quirk\n");
   goto retry;
  }
  FUNC_15 (&VAR_25->lock);
  FUNC_7 (VAR_25, "init err (%08x %04x)\n",
   FUNC_8 (VAR_25, &VAR_25->regs->fminterval),
   FUNC_8 (VAR_25, &VAR_25->regs->periodicstart));
  return -VAR_0;
 }


 FUNC_13(VAR_2, &VAR_29->flags);
 VAR_29->uses_new_polling = 1;


 VAR_25->hc_control &= VAR_5;
 VAR_25->hc_control |= VAR_3 | 130;
 FUNC_10 (VAR_25, VAR_25->hc_control, &VAR_25->regs->control);
 VAR_25->rh_state = VAR_13;


 FUNC_10 (VAR_25, VAR_21, &VAR_25->regs->roothub.status);


 VAR_26 = VAR_7;
 FUNC_10 (VAR_25, ~0, &VAR_25->regs->intrstatus);
 FUNC_10 (VAR_25, VAR_26, &VAR_25->regs->intrenable);


 VAR_27 = FUNC_12 (VAR_25);
 VAR_27 &= ~(VAR_19 | VAR_17);
 if (VAR_25->flags & VAR_11) {

  VAR_27 |= VAR_15;
  VAR_27 &= ~(VAR_18 | VAR_16);
  FUNC_10 (VAR_25, VAR_27, &VAR_25->regs->roothub.a);
 } else if ((VAR_25->flags & VAR_8) ||
   (VAR_25->flags & VAR_9)) {



  VAR_27 |= VAR_16;
  FUNC_10 (VAR_25, VAR_27, &VAR_25->regs->roothub.a);
 }
 FUNC_10 (VAR_25, VAR_22, &VAR_25->regs->roothub.status);
 FUNC_10 (VAR_25, (VAR_27 & VAR_16) ? 0 : VAR_20,
      &VAR_25->regs->roothub.b);

 (void) FUNC_8 (VAR_25, &VAR_25->regs->control);

 VAR_25->next_statechange = VAR_24 + VAR_23;
 FUNC_15 (&VAR_25->lock);


 FUNC_2 ((VAR_27 >> 23) & 0x1fe);

 FUNC_6(VAR_25);

 return 0;
}
