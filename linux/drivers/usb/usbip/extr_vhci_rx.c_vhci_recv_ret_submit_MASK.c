
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhci_hcd {int seqnum; struct vhci* vhci; } ;
struct usbip_device {int dummy; } ;
struct vhci_device {int priv_lock; struct usbip_device ud; } ;
struct vhci {int lock; } ;
struct TYPE_2__ {int seqnum; } ;
struct usbip_header {TYPE_1__ base; } ;
struct urb {int status; int transfer_flags; scalar_t__ num_sgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct urb* FUNC_1 (struct vhci_device*,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,struct urb*,int ) ;
 int FUNC_6 (int ,struct urb*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct urb*) ;
 int FUNC_9 (struct usbip_device*,int ) ;
 int FUNC_10 (struct usbip_header*,struct urb*,int ,int ) ;
 int FUNC_11 (struct usbip_device*,struct urb*) ;
 scalar_t__ FUNC_12 (struct usbip_device*,struct urb*) ;
 scalar_t__ FUNC_13 (struct usbip_device*,struct urb*) ;
 struct vhci_hcd* FUNC_14 (struct vhci_device*) ;
 int FUNC_15 (struct vhci_hcd*) ;

__attribute__((used)) static void FUNC_16(struct vhci_device *VAR_4,
     struct usbip_header *VAR_5)
{
 struct vhci_hcd *VAR_6 = FUNC_14(VAR_4);
 struct vhci *VAR_7 = VAR_6->vhci;
 struct usbip_device *VAR_8 = &VAR_4->ud;
 struct urb *VAR_9;
 unsigned long VAR_10;

 FUNC_3(&VAR_4->priv_lock, VAR_10);
 VAR_9 = FUNC_1(VAR_4, VAR_5->base.seqnum);
 FUNC_4(&VAR_4->priv_lock, VAR_10);

 if (!VAR_9) {
  FUNC_2("cannot find a urb of seqnum %u max seqnum %d\n",
   VAR_5->base.seqnum,
   FUNC_0(&VAR_6->seqnum));
  FUNC_9(VAR_8, VAR_2);
  return;
 }


 FUNC_10(VAR_5, VAR_9, VAR_1, 0);


 if (FUNC_13(VAR_8, VAR_9) < 0)
  return;


 if (FUNC_12(VAR_8, VAR_9) < 0)
  return;


 FUNC_11(VAR_8, VAR_9);

 if (VAR_3)
  FUNC_8(VAR_9);

 if (VAR_9->num_sgs)
  VAR_9->transfer_flags &= ~VAR_0;

 FUNC_7("now giveback urb %u\n", VAR_5->base.seqnum);

 FUNC_3(&VAR_7->lock, VAR_10);
 FUNC_6(FUNC_15(VAR_6), VAR_9);
 FUNC_4(&VAR_7->lock, VAR_10);

 FUNC_5(FUNC_15(VAR_6), VAR_9, VAR_9->status);

 FUNC_7("Leave\n");
}
