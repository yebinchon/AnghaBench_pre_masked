
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rsp_que {int dummy; } ;
struct TYPE_8__ {int msi_enabled; int mr_intr_valid; } ;
struct qla_hw_data {int hardware_lock; TYPE_2__ flags; TYPE_5__* pdev; TYPE_1__* isp_ops; int fw_attributes; int chip_revision; TYPE_4__* iobase; } ;
typedef int scsi_qla_host_t ;
struct TYPE_9__ {int semaphore; } ;
struct TYPE_10__ {TYPE_3__ isp; } ;
typedef TYPE_4__ device_reg_t ;
struct TYPE_11__ {int subsystem_device; int irq; int revision; int subsystem_vendor; } ;
struct TYPE_7__ {int intr_handler; } ;


 int VAR_0 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 int FUNC_6 (struct qla_hw_data*) ;
 int FUNC_7 (struct qla_hw_data*) ;
 int FUNC_8 (struct qla_hw_data*) ;
 int FUNC_9 (struct qla_hw_data*) ;
 scalar_t__ FUNC_10 (struct qla_hw_data*) ;
 int FUNC_11 (struct qla_hw_data*) ;
 scalar_t__ FUNC_12 (struct qla_hw_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (TYPE_5__*,int,int,int ) ;
 int * FUNC_15 (TYPE_5__*) ;
 int VAR_6 ;
 int FUNC_16 (int ,int *,int,char*,...) ;
 int VAR_7 ;
 int FUNC_17 (int ,int *,int,char*,int,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_18 (struct qla_hw_data*,struct rsp_que*) ;
 int FUNC_19 (int,int ,int ,int ,struct rsp_que*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

int
FUNC_22(struct qla_hw_data *VAR_10, struct rsp_que *VAR_11)
{
 int VAR_12 = VAR_4;
 device_reg_t *VAR_13 = VAR_10->iobase;
 scsi_qla_host_t *VAR_14 = FUNC_15(VAR_10->pdev);


 if (VAR_6 == 0 || (!FUNC_4(VAR_10) && !FUNC_6(VAR_10) &&
     !FUNC_11(VAR_10) && !FUNC_0(VAR_10) && !FUNC_3(VAR_10) &&
     !FUNC_12(VAR_10) && !FUNC_7(VAR_10) && !FUNC_8(VAR_10)))
  goto skip_msi;

 if (VAR_6 == 2)
  goto skip_msix;

 if (VAR_10->pdev->subsystem_vendor == VAR_2 &&
  (VAR_10->pdev->subsystem_device == 0x7040 ||
  VAR_10->pdev->subsystem_device == 0x7041 ||
  VAR_10->pdev->subsystem_device == 0x1705)) {
  FUNC_17(VAR_9, VAR_14, 0x0034,
      "MSI-X: Unsupported ISP 2432 SSVID/SSDID (0x%X,0x%X).\n",
   VAR_10->pdev->subsystem_vendor,
   VAR_10->pdev->subsystem_device);
  goto skip_msi;
 }

 if (FUNC_4(VAR_10) && (VAR_10->pdev->revision < VAR_5)) {
  FUNC_17(VAR_9, VAR_14, 0x0035,
      "MSI-X; Unsupported ISP2432 (0x%X, 0x%X).\n",
      VAR_10->pdev->revision, VAR_5);
  goto skip_msix;
 }

 VAR_12 = FUNC_18(VAR_10, VAR_11);
 if (!VAR_12) {
  FUNC_16(VAR_7, VAR_14, 0x0036,
      "MSI-X: Enabled (0x%X, 0x%X).\n",
      VAR_10->chip_revision, VAR_10->fw_attributes);
  goto clear_risc_ints;
 }

skip_msix:

 FUNC_17(VAR_8, VAR_14, 0x0037,
     "Falling back-to MSI mode -%d.\n", VAR_12);

 if (!FUNC_5(VAR_10) && !FUNC_6(VAR_10) && !FUNC_11(VAR_10) &&
     !FUNC_9(VAR_10) && !FUNC_2(VAR_10) && !FUNC_12(VAR_10) &&
     !FUNC_7(VAR_10) && !FUNC_8(VAR_10))
  goto skip_msi;

 VAR_12 = FUNC_14(VAR_10->pdev, 1, 1, VAR_1);
 if (!VAR_12) {
  FUNC_16(VAR_7, VAR_14, 0x0038,
      "MSI: Enabled.\n");
  VAR_10->flags.msi_enabled = 1;
 } else
  FUNC_17(VAR_9, VAR_14, 0x0039,
      "Falling back-to INTa mode -- %d.\n", VAR_12);
skip_msi:


 if (!VAR_10->flags.msi_enabled && FUNC_10(VAR_10))
  return VAR_4;

 VAR_12 = FUNC_19(VAR_10->pdev->irq, VAR_10->isp_ops->intr_handler,
     VAR_10->flags.msi_enabled ? 0 : VAR_0,
     VAR_3, VAR_11);
 if (VAR_12) {
  FUNC_17(VAR_9, VAR_14, 0x003a,
      "Failed to reserve interrupt %d already in use.\n",
      VAR_10->pdev->irq);
  goto fail;
 } else if (!VAR_10->flags.msi_enabled) {
  FUNC_16(VAR_7, VAR_14, 0x0125,
      "INTa mode: Enabled.\n");
  VAR_10->flags.mr_intr_valid = 1;
 }

clear_risc_ints:
 if (FUNC_1(VAR_10) || FUNC_12(VAR_10))
  goto fail;

 FUNC_20(&VAR_10->hardware_lock);
 FUNC_13(&VAR_13->isp.semaphore, 0);
 FUNC_21(&VAR_10->hardware_lock);

fail:
 return VAR_12;
}
