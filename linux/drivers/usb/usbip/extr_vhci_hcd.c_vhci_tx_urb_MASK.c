
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhci_priv {int seqnum; int list; struct urb* urb; struct vhci_device* vdev; } ;
struct vhci_hcd {int seqnum; } ;
struct vhci_device {int priv_lock; int waitq_tx; int priv_tx; int ud; } ;
struct urb {void* hcpriv; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct vhci_priv* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,int ) ;
 struct vhci_hcd* FUNC_7 (struct vhci_device*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct urb *VAR_2, struct vhci_device *VAR_3)
{
 struct vhci_priv *VAR_4;
 struct vhci_hcd *VAR_5 = FUNC_7(VAR_3);
 unsigned long VAR_6;

 VAR_4 = FUNC_2(sizeof(struct vhci_priv), VAR_0);
 if (!VAR_4) {
  FUNC_6(&VAR_3->ud, VAR_1);
  return;
 }

 FUNC_4(&VAR_3->priv_lock, VAR_6);

 VAR_4->seqnum = FUNC_0(&VAR_5->seqnum);
 if (VAR_4->seqnum == 0xffff)
  FUNC_1(&VAR_2->dev->dev, "seqnum max\n");

 VAR_4->vdev = VAR_3;
 VAR_4->urb = VAR_2;

 VAR_2->hcpriv = (void *) VAR_4;

 FUNC_3(&VAR_4->list, &VAR_3->priv_tx);

 FUNC_8(&VAR_3->waitq_tx);
 FUNC_5(&VAR_3->priv_lock, VAR_6);
}
