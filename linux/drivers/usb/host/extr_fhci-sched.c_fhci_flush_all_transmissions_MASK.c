
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct td {struct packet* pkt; } ;
struct packet {int status; } ;
struct fhci_usb {TYPE_2__* fhci; TYPE_3__* actual_frame; } ;
struct TYPE_6__ {int frame_status; } ;
struct TYPE_5__ {TYPE_1__* regs; } ;
struct TYPE_4__ {int usb_usmod; int usb_usber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct fhci_usb*) ;
 struct td* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct fhci_usb*,struct packet*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;

void FUNC_7(struct fhci_usb *VAR_3)
{
 u8 VAR_4;
 struct td *VAR_5;

 VAR_4 = FUNC_4(&VAR_3->fhci->regs->usb_usmod);
 FUNC_0(&VAR_3->fhci->regs->usb_usmod, VAR_1);

 FUNC_1(VAR_3);

 while ((VAR_5 = FUNC_2(VAR_3->actual_frame)) != ((void*)0)) {
  struct packet *VAR_6 = VAR_5->pkt;

  VAR_6->status = VAR_2;
  FUNC_3(VAR_3, VAR_6);
 }

 VAR_3->actual_frame->frame_status = VAR_0;


 FUNC_6(&VAR_3->fhci->regs->usb_usber, 0xffff);

 FUNC_5(&VAR_3->fhci->regs->usb_usmod, VAR_4 | VAR_1);
}
