
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vhci {TYPE_2__* vhci_hcd_ss; TYPE_1__* vhci_hcd_hs; } ;
struct TYPE_8__ {int sg_tablesize; int no_sg_constraint; TYPE_3__* root_hub; int controller; } ;
struct usb_hcd {TYPE_4__ self; int speed; } ;
struct TYPE_7__ {int speed; } ;
struct TYPE_6__ {struct vhci* vhci; } ;
struct TYPE_5__ {struct vhci* vhci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (struct usb_hcd*) ;
 scalar_t__ FUNC_2 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_4)
{
 struct vhci *VAR_5 = *((void **)FUNC_0(VAR_4->self.controller));
 if (FUNC_2(VAR_4)) {
  VAR_5->vhci_hcd_hs = FUNC_1(VAR_4);
  VAR_5->vhci_hcd_hs->vhci = VAR_5;





  VAR_4->speed = VAR_0;
  VAR_4->self.root_hub->speed = VAR_2;
 } else {
  VAR_5->vhci_hcd_ss = FUNC_1(VAR_4);
  VAR_5->vhci_hcd_ss->vhci = VAR_5;
  VAR_4->speed = VAR_1;
  VAR_4->self.root_hub->speed = VAR_3;
 }






 VAR_4->self.sg_tablesize = 32;
 VAR_4->self.no_sg_constraint = 1;

 return 0;
}
