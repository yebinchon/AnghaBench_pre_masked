
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct usb_hcd {int dummy; } ;
struct fhci_usb {scalar_t__ port_status; int saved_msk; TYPE_2__* fhci; } ;
struct fhci_hcd {int lock; struct fhci_usb* usb_lld; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {int usb_usbmr; int usb_usber; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct fhci_usb*) ;
 int FUNC_1 (struct fhci_hcd*,int) ;
 int FUNC_2 (struct fhci_hcd*) ;
 int FUNC_3 (struct fhci_hcd*) ;
 int FUNC_4 (struct fhci_hcd*) ;
 int FUNC_5 (struct fhci_usb*) ;
 struct fhci_hcd* FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct fhci_hcd*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

irqreturn_t FUNC_12(struct usb_hcd *VAR_13)
{
 struct fhci_hcd *VAR_14 = FUNC_6(VAR_13);
 struct fhci_usb *VAR_15;
 u16 VAR_16 = 0;
 unsigned long VAR_17;

 FUNC_10(&VAR_14->lock, VAR_17);

 VAR_15 = VAR_14->usb_lld;

 VAR_16 |= FUNC_7(&VAR_15->fhci->regs->usb_usber) &
    FUNC_7(&VAR_15->fhci->regs->usb_usbmr);


 FUNC_8(&VAR_15->fhci->regs->usb_usber, VAR_16);

 FUNC_1(VAR_14, VAR_16);

 if (VAR_16 & VAR_8) {
  if ((VAR_15->port_status == VAR_2) ||
    (VAR_15->port_status == VAR_3)) {
   FUNC_3(VAR_14);
   VAR_16 &= ~VAR_6;
  } else if (VAR_15->port_status == VAR_4) {
   VAR_15->port_status = VAR_1;


   VAR_15->saved_msk |= VAR_6;
   FUNC_8(&VAR_15->fhci->regs->usb_usber,
     VAR_15->saved_msk);
  } else if (VAR_15->port_status == VAR_0) {
   if (FUNC_4(VAR_14) == 1)
    FUNC_2(VAR_14);
  }
  VAR_16 &= ~VAR_8;
 }

 if (VAR_16 & VAR_7) {
  FUNC_0(VAR_14->usb_lld);
  VAR_16 &= ~VAR_7;
 }

 if (VAR_16 & (VAR_10 | VAR_9)) {
  FUNC_9(VAR_14);
  VAR_16 &= ~(VAR_10 | VAR_9);
 }

 if (VAR_16 & VAR_11) {
  FUNC_5(VAR_14->usb_lld);
  VAR_16 &= ~VAR_11;
 }

 if (VAR_16 & VAR_12) {
  FUNC_5(VAR_14->usb_lld);
  VAR_16 &= ~VAR_12;
 }

 if (VAR_16 & VAR_6) {
  if (VAR_15->port_status == VAR_0) {
   VAR_16 &= ~VAR_8;
   FUNC_2(VAR_14);
  } else if (VAR_15->port_status ==
    VAR_1) {


   VAR_15->saved_msk &= ~VAR_6;
   FUNC_8(&VAR_15->fhci->regs->usb_usbmr,
     VAR_15->saved_msk);
  } else {
   FUNC_1(VAR_14, -1);
  }

  VAR_16 &= ~VAR_6;
 }

 FUNC_11(&VAR_14->lock, VAR_17);

 return VAR_5;
}
