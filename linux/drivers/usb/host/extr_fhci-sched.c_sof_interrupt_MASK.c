
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fhci_usb {scalar_t__ port_status; TYPE_5__* actual_frame; int max_frame_usage; int saved_msk; TYPE_4__* fhci; TYPE_2__* vroot_hub; } ;
struct fhci_hcd {int timer; struct fhci_usb* usb_lld; } ;
struct TYPE_10__ {int frame_status; } ;
struct TYPE_9__ {TYPE_3__* regs; } ;
struct TYPE_8__ {int usb_usbmr; } ;
struct TYPE_6__ {int wPortStatus; int wPortChange; } ;
struct TYPE_7__ {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fhci_usb*) ;
 int FUNC_1 (struct fhci_usb*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct fhci_hcd *VAR_8)
{
 struct fhci_usb *VAR_9 = VAR_8->usb_lld;

 if ((VAR_9->port_status == VAR_0) &&
     (VAR_9->vroot_hub->port.wPortStatus & VAR_5) &&
     !(VAR_9->vroot_hub->port.wPortChange & VAR_6)) {
  if (VAR_9->vroot_hub->port.wPortStatus & VAR_7)
   VAR_9->port_status = VAR_2;
  else
   VAR_9->port_status = VAR_1;

  VAR_9->saved_msk &= ~VAR_4;
  FUNC_3(&VAR_9->fhci->regs->usb_usbmr, VAR_9->saved_msk);
 }

 FUNC_2(VAR_8->timer, VAR_9->max_frame_usage, 0);

 FUNC_0(VAR_9);
 VAR_9->actual_frame->frame_status = VAR_3;

 FUNC_1(VAR_9);
}
