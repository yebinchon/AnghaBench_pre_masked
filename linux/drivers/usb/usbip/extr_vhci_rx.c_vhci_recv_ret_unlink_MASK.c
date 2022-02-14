
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vhci_unlink {int unlink_seqnum; } ;
struct vhci_hcd {struct vhci* vhci; } ;
struct vhci_device {int priv_lock; } ;
struct vhci {int lock; } ;
struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_2__ ret_unlink; } ;
struct TYPE_4__ {int seqnum; } ;
struct usbip_header {TYPE_3__ u; TYPE_1__ base; } ;
struct urb {int status; } ;


 struct vhci_unlink* FUNC_0 (struct vhci_device*,struct usbip_header*) ;
 int FUNC_1 (struct vhci_unlink*) ;
 struct urb* FUNC_2 (struct vhci_device*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,struct urb*,int ) ;
 int FUNC_7 (int ,struct urb*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct usbip_header*) ;
 struct vhci_hcd* FUNC_10 (struct vhci_device*) ;
 int FUNC_11 (struct vhci_hcd*) ;

__attribute__((used)) static void FUNC_12(struct vhci_device *VAR_0,
     struct usbip_header *VAR_1)
{
 struct vhci_hcd *VAR_2 = FUNC_10(VAR_0);
 struct vhci *VAR_3 = VAR_2->vhci;
 struct vhci_unlink *VAR_4;
 struct urb *VAR_5;
 unsigned long VAR_6;

 FUNC_9(VAR_1);

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_4) {
  FUNC_3("cannot find the pending unlink %u\n",
   VAR_1->base.seqnum);
  return;
 }

 FUNC_4(&VAR_0->priv_lock, VAR_6);
 VAR_5 = FUNC_2(VAR_0, VAR_4->unlink_seqnum);
 FUNC_5(&VAR_0->priv_lock, VAR_6);

 if (!VAR_5) {





  FUNC_3("the urb (seqnum %d) was already given back\n",
   VAR_1->base.seqnum);
 } else {
  FUNC_8("now giveback urb %d\n", VAR_1->base.seqnum);


  VAR_5->status = VAR_1->u.ret_unlink.status;
  FUNC_3("urb->status %d\n", VAR_5->status);

  FUNC_4(&VAR_3->lock, VAR_6);
  FUNC_7(FUNC_11(VAR_2), VAR_5);
  FUNC_5(&VAR_3->lock, VAR_6);

  FUNC_6(FUNC_11(VAR_2), VAR_5, VAR_5->status);
 }

 FUNC_1(VAR_4);
}
