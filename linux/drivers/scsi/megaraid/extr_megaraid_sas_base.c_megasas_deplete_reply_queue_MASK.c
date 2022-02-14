
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct megasas_instance {int mfiStatus; scalar_t__ disableOnlineCtrlReset; int isr_tasklet; TYPE_2__* pdev; int work_init; int adprecovery; int fw_outstanding; scalar_t__ issuepend_done; TYPE_1__* instancet; int * consumer; int msix_vectors; int reg_set; } ;
struct TYPE_4__ {scalar_t__ device; int dev; } ;
struct TYPE_3__ {int (* check_reset ) (struct megasas_instance*,int ) ;int (* clear_intr ) (struct megasas_instance*) ;int (* read_fw_status_reg ) (struct megasas_instance*) ;int (* disable_intr ) (struct megasas_instance*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct megasas_instance*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct megasas_instance*,int ) ;
 int FUNC_7 (struct megasas_instance*) ;
 int FUNC_8 (struct megasas_instance*) ;
 int FUNC_9 (struct megasas_instance*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct megasas_instance *VAR_10,
     u8 VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;

 if ((VAR_12 = VAR_10->instancet->check_reset(VAR_10,
     VAR_10->reg_set)) == 1) {
  return VAR_0;
 }

 VAR_12 = VAR_10->instancet->clear_intr(VAR_10);
 if (VAR_12 == 0) {

  if (!VAR_10->msix_vectors)
   return VAR_1;
 }

 VAR_10->mfiStatus = VAR_12;

 if ((VAR_12 & VAR_4)) {
  VAR_13 = VAR_10->instancet->read_fw_status_reg(
    VAR_10) & VAR_6;

  if (VAR_13 != VAR_5) {
   FUNC_3(&VAR_10->pdev->dev, "fw state:%x\n",
      VAR_13);
  }

  if ((VAR_13 == VAR_5) &&
    (VAR_10->disableOnlineCtrlReset == 0)) {
   FUNC_3(&VAR_10->pdev->dev, "wait adp restart\n");

   if ((VAR_10->pdev->device ==
     VAR_8) ||
    (VAR_10->pdev->device ==
     VAR_7) ||
    (VAR_10->pdev->device ==
     VAR_9)) {

    *VAR_10->consumer =
     FUNC_2(VAR_2);
   }


   VAR_10->instancet->disable_intr(VAR_10);
   FUNC_1(&VAR_10->adprecovery, VAR_3);
   VAR_10->issuepend_done = 0;

   FUNC_1(&VAR_10->fw_outstanding, 0);
   FUNC_4(VAR_10);

   FUNC_3(&VAR_10->pdev->dev, "fwState=%x, stage:%d\n",
     VAR_13, FUNC_0(&VAR_10->adprecovery));

   FUNC_5(&VAR_10->work_init);
   return VAR_0;

  } else {
   FUNC_3(&VAR_10->pdev->dev, "fwstate:%x, dis_OCR=%x\n",
    VAR_13, VAR_10->disableOnlineCtrlReset);
  }
 }

 FUNC_10(&VAR_10->isr_tasklet);
 return VAR_0;
}
