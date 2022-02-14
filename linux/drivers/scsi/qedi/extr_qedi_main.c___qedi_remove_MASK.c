
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qedi_ctx {scalar_t__ boot_kset; int * ll2_recv_thread; int shost; int udev; int cdev; int flags; int dbg_ctx; int * offload_thread; int * tmf_thread; } ;
struct pci_dev {int dummy; } ;
struct TYPE_6__ {TYPE_2__* common; TYPE_1__* ll2; int (* stop ) (int ) ;} ;
struct TYPE_5__ {int (* update_drv_state ) (int ,int) ;int (* remove ) (int ) ;int (* slowpath_stop ) (int ) ;int (* set_power_state ) (int ,int ) ;} ;
struct TYPE_4__ {int (* stop ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 struct qedi_ctx* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct qedi_ctx*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct qedi_ctx*) ;
 int FUNC_11 (struct qedi_ctx*) ;
 int FUNC_12 (struct qedi_ctx*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct qedi_ctx*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_15 (struct qedi_ctx*) ;
 int FUNC_16 (struct qedi_ctx*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int *) ;

__attribute__((used)) static void FUNC_24(struct pci_dev *VAR_4, int VAR_5)
{
 struct qedi_ctx *VAR_6 = FUNC_7(VAR_4);
 int VAR_7;

 if (VAR_6->tmf_thread) {
  FUNC_2(VAR_6->tmf_thread);
  FUNC_1(VAR_6->tmf_thread);
  VAR_6->tmf_thread = ((void*)0);
 }

 if (VAR_6->offload_thread) {
  FUNC_2(VAR_6->offload_thread);
  FUNC_1(VAR_6->offload_thread);
  VAR_6->offload_thread = ((void*)0);
 }




 if (!FUNC_23(VAR_1, &VAR_6->flags))
  VAR_3->common->set_power_state(VAR_6->cdev, VAR_0);

 FUNC_16(VAR_6);

 if (!FUNC_23(VAR_1, &VAR_6->flags)) {
  VAR_3->stop(VAR_6->cdev);
  VAR_3->ll2->stop(VAR_6->cdev);
 }

 if (VAR_5 == VAR_2)
  FUNC_11(VAR_6);

 VAR_7 = VAR_3->common->update_drv_state(VAR_6->cdev, 0);
 if (VAR_7)
  FUNC_0(&VAR_6->dbg_ctx, "Failed to send drv state to MFW\n");

 if (!FUNC_23(VAR_1, &VAR_6->flags)) {
  VAR_3->common->slowpath_stop(VAR_6->cdev);
  VAR_3->common->remove(VAR_6->cdev);
 }

 FUNC_10(VAR_6);

 if (VAR_5 == VAR_2) {
  FUNC_15(VAR_6);
  FUNC_8(VAR_6);
  FUNC_13(VAR_6->udev);
  FUNC_12(VAR_6);

  FUNC_5(VAR_6->shost);
  FUNC_4(VAR_6->shost);

  if (VAR_6->ll2_recv_thread) {
   FUNC_6(VAR_6->ll2_recv_thread);
   VAR_6->ll2_recv_thread = ((void*)0);
  }
  FUNC_14(VAR_6);

  if (VAR_6->boot_kset)
   FUNC_3(VAR_6->boot_kset);
 }
}
