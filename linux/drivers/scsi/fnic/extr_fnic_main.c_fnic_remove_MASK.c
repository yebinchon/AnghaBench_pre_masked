
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct fnic {int stop_rx_link_events; int in_remove; int vdev; struct fc_lport* lport; int list; int tx_queue; int frame_queue; int ctlr; int fnic_lock; int fip_frame_queue; int fip_timer; TYPE_1__ config; int notify_timer; } ;
struct fc_lport {int host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fc_lport*) ;
 int FUNC_3 (struct fc_lport*) ;
 int FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct fnic*) ;
 int FUNC_9 (struct fnic*) ;
 int VAR_2 ;
 int FUNC_10 (struct fnic*) ;
 int FUNC_11 (struct fnic*) ;
 int FUNC_12 (struct fnic*) ;
 int FUNC_13 (struct fnic*) ;
 int FUNC_14 (struct fnic*) ;
 int VAR_3 ;
 int FUNC_15 (struct fnic*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct pci_dev*) ;
 struct fnic* FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,unsigned long) ;
 int FUNC_25 (int *,unsigned long) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;

__attribute__((used)) static void FUNC_30(struct pci_dev *VAR_4)
{
 struct fnic *VAR_5 = FUNC_18(VAR_4);
 struct fc_lport *VAR_6 = VAR_5->lport;
 unsigned long VAR_7;







 FUNC_24(&VAR_5->fnic_lock, VAR_7);
 VAR_5->stop_rx_link_events = 1;
 FUNC_25(&VAR_5->fnic_lock, VAR_7);

 if (FUNC_27(VAR_5->vdev) == VAR_1)
  FUNC_1(&VAR_5->notify_timer);





 FUNC_7(VAR_2);
 FUNC_23(&VAR_5->frame_queue);
 FUNC_23(&VAR_5->tx_queue);

 if (VAR_5->config.flags & VAR_0) {
  FUNC_1(&VAR_5->fip_timer);
  FUNC_23(&VAR_5->fip_frame_queue);
  FUNC_11(VAR_5);
  FUNC_10(VAR_5);
 }






 FUNC_3(VAR_5->lport);

 FUNC_24(&VAR_5->fnic_lock, VAR_7);
 VAR_5->in_remove = 1;
 FUNC_25(&VAR_5->fnic_lock, VAR_7);

 FUNC_6(&VAR_5->ctlr);
 FUNC_4(VAR_6);
 FUNC_15(VAR_5);






 FUNC_8(VAR_5);

 FUNC_0(!FUNC_22(&VAR_5->frame_queue));
 FUNC_0(!FUNC_22(&VAR_5->tx_queue));

 FUNC_24(&VAR_3, VAR_7);
 FUNC_16(&VAR_5->list);
 FUNC_25(&VAR_3, VAR_7);

 FUNC_5(VAR_5->lport->host);
 FUNC_21(VAR_5->lport->host);
 FUNC_2(VAR_5->lport);
 FUNC_28(VAR_5->vdev);
 FUNC_12(VAR_5);
 FUNC_13(VAR_5);
 FUNC_9(VAR_5);
 FUNC_26(VAR_5->vdev);
 FUNC_29(VAR_5->vdev);
 FUNC_14(VAR_5);
 FUNC_19(VAR_4);
 FUNC_17(VAR_4);
 FUNC_20(VAR_6->host);
}
