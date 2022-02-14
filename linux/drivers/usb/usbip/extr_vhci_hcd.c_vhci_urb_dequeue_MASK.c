
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhci_unlink {int seqnum; int list; int unlink_seqnum; } ;
struct vhci_priv {int seqnum; int list; struct vhci_device* vdev; } ;
struct vhci_hcd {int seqnum; struct vhci* vhci; } ;
struct TYPE_2__ {int tcp_socket; } ;
struct vhci_device {int priv_lock; int waitq_tx; int unlink_tx; TYPE_1__ ud; } ;
struct vhci {int lock; } ;
struct usb_hcd {int dummy; } ;
struct urb {int status; struct vhci_priv* hcpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct vhci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct vhci_priv*) ;
 struct vhci_unlink* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_12 (struct usb_hcd*,struct urb*,int ) ;
 int FUNC_13 (struct usb_hcd*,struct urb*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct usb_hcd *VAR_4, struct urb *VAR_5, int VAR_6)
{
 struct vhci_hcd *VAR_7 = FUNC_1(VAR_4);
 struct vhci *VAR_8 = VAR_7->vhci;
 struct vhci_priv *VAR_9;
 struct vhci_device *VAR_10;
 unsigned long VAR_11;

 FUNC_8(&VAR_8->lock, VAR_11);

 VAR_9 = VAR_5->hcpriv;
 if (!VAR_9) {


  FUNC_10(&VAR_8->lock, VAR_11);
  return -VAR_0;
 }

 {
  int VAR_12 = 0;

  VAR_12 = FUNC_11(VAR_4, VAR_5, VAR_6);
  if (VAR_12) {
   FUNC_10(&VAR_8->lock, VAR_11);
   return VAR_12;
  }
 }


 VAR_10 = VAR_9->vdev;

 if (!VAR_10->ud.tcp_socket) {

  FUNC_7(&VAR_10->priv_lock);

  FUNC_5(&VAR_9->list);
  FUNC_2(VAR_9);
  VAR_5->hcpriv = ((void*)0);

  FUNC_9(&VAR_10->priv_lock);






  FUNC_13(VAR_4, VAR_5);

  FUNC_10(&VAR_8->lock, VAR_11);
  FUNC_12(VAR_4, VAR_5, VAR_5->status);
  FUNC_8(&VAR_8->lock, VAR_11);

 } else {

  struct vhci_unlink *VAR_13;

  FUNC_7(&VAR_10->priv_lock);


  VAR_13 = FUNC_3(sizeof(struct vhci_unlink), VAR_2);
  if (!VAR_13) {
   FUNC_9(&VAR_10->priv_lock);
   FUNC_10(&VAR_8->lock, VAR_11);
   FUNC_15(&VAR_10->ud, VAR_3);
   return -VAR_1;
  }

  VAR_13->seqnum = FUNC_0(&VAR_7->seqnum);
  if (VAR_13->seqnum == 0xffff)
   FUNC_6("seqnum max\n");

  VAR_13->unlink_seqnum = VAR_9->seqnum;



  FUNC_4(&VAR_13->list, &VAR_10->unlink_tx);
  FUNC_16(&VAR_10->waitq_tx);

  FUNC_9(&VAR_10->priv_lock);
 }

 FUNC_10(&VAR_8->lock, VAR_11);

 FUNC_14("leave\n");
 return 0;
}
