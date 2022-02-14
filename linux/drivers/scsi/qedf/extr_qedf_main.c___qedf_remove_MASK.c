
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct qedf_ctx {TYPE_4__* lport; int io_mempool; int cdev; int dbg_ctx; int * dpc_wq; int cmd_mgr; int ctlr; int grcdump; int * ll2_recv_wq; int flags; int * timer_work_queue; int * link_update_wq; int link_update; } ;
struct pci_dev {int dummy; } ;
struct TYPE_11__ {int host; } ;
struct TYPE_10__ {TYPE_2__* common; int (* stop ) (int ) ;TYPE_1__* ll2; } ;
struct TYPE_9__ {int (* update_drv_state ) (int ,int) ;int (* remove ) (int ) ;int (* slowpath_stop ) (int ) ;int (* set_power_state ) (int ,int ) ;} ;
struct TYPE_8__ {int (* stop ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 struct qedf_ctx* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,int *) ;
 TYPE_3__* VAR_4 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct qedf_ctx*) ;
 int FUNC_17 (struct qedf_ctx*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct qedf_ctx*) ;
 int FUNC_20 (struct qedf_ctx*) ;
 int FUNC_21 (struct qedf_ctx*) ;
 int FUNC_22 (struct qedf_ctx*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,int) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 scalar_t__ FUNC_32 (int ,int *) ;

__attribute__((used)) static void FUNC_33(struct pci_dev *VAR_5, int VAR_6)
{
 struct qedf_ctx *VAR_7;
 int VAR_8;

 if (!VAR_5) {
  FUNC_0(((void*)0), "pdev is NULL.\n");
  return;
 }

 VAR_7 = FUNC_12(VAR_5);





 if (FUNC_32(VAR_3, &VAR_7->flags)) {
  FUNC_0(&VAR_7->dbg_ctx, "Already removing PCI function.\n");
  return;
 }

 if (VAR_6 != VAR_2)
  FUNC_25(VAR_3, &VAR_7->flags);


 if (VAR_6 == VAR_2)
  FUNC_10(&VAR_7->ctlr);
 else
  FUNC_5(VAR_7->lport);

 if (FUNC_21(VAR_7) == 0)
  FUNC_0(&VAR_7->dbg_ctx, "Could not upload all sessions.\n");






 FUNC_1(&VAR_7->link_update);
 FUNC_3(VAR_7->link_update_wq);
 VAR_7->link_update_wq = ((void*)0);

 if (VAR_7->timer_work_queue)
  FUNC_3(VAR_7->timer_work_queue);


 FUNC_2(VAR_1, &VAR_7->flags);
 VAR_4->ll2->stop(VAR_7->cdev);
 if (VAR_7->ll2_recv_wq)
  FUNC_3(VAR_7->ll2_recv_wq);


 FUNC_20(VAR_7);
 FUNC_16(VAR_7);





 if (VAR_6 != VAR_2) {
  FUNC_18(&VAR_7->grcdump);
  FUNC_19(VAR_7);


  FUNC_9(&VAR_7->ctlr);
  FUNC_6(VAR_7->lport);
  FUNC_8(VAR_7->lport->host);
  FUNC_24(VAR_7->lport->host);
 }

 FUNC_14(VAR_7->cmd_mgr);

 if (VAR_6 != VAR_2) {
  FUNC_4(VAR_7->lport);
  FUNC_7(VAR_7->lport);


  FUNC_22(VAR_7);
 }





 VAR_4->stop(VAR_7->cdev);

 if (VAR_6 != VAR_2) {
  if (VAR_7->dpc_wq) {

   FUNC_3(VAR_7->dpc_wq);
   VAR_7->dpc_wq = ((void*)0);
  }
 }


 FUNC_17(VAR_7);
 if (VAR_6 != VAR_2) {
  VAR_4->common->set_power_state(VAR_7->cdev, VAR_0);
  FUNC_13(VAR_5, ((void*)0));
 }

 VAR_8 = VAR_4->common->update_drv_state(VAR_7->cdev, 0);
 if (VAR_8)
  FUNC_0(&(VAR_7->dbg_ctx),
   "Failed to send drv state to MFW.\n");

 VAR_4->common->slowpath_stop(VAR_7->cdev);
 VAR_4->common->remove(VAR_7->cdev);

 FUNC_11(VAR_7->io_mempool);


 if (VAR_6 != VAR_2)
  FUNC_23(VAR_7->lport->host);
}
