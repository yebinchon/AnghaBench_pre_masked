
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sysdev; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct usb_ctrlrequest {int dummy; } ;
struct urb {int transfer_flags; int setup_packet; int setup_dma; TYPE_2__* dev; } ;
struct TYPE_4__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int *,void**,int,int ) ;

void FUNC_3(struct usb_hcd *VAR_4, struct urb *VAR_5)
{
 if (FUNC_0(VAR_0) &&
     (VAR_5->transfer_flags & VAR_3))
  FUNC_1(VAR_4->self.sysdev,
    VAR_5->setup_dma,
    sizeof(struct usb_ctrlrequest),
    VAR_1);
 else if (VAR_5->transfer_flags & VAR_2)
  FUNC_2(VAR_5->dev->bus,
    &VAR_5->setup_dma,
    (void **) &VAR_5->setup_packet,
    sizeof(struct usb_ctrlrequest),
    VAR_1);


 VAR_5->transfer_flags &= ~(VAR_3 | VAR_2);
}
