
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct lpfc_vport {int dummy; } ;
struct TYPE_2__ {int fcf_pri_list; } ;
struct lpfc_hba {scalar_t__ cfg_use_msi; scalar_t__ intr_type; int cfg_irq_chann; int cfg_enable_fc4_type; scalar_t__ nvmet_support; int cfg_nvmet_mrq; scalar_t__ cfg_request_firmware_upgrade; scalar_t__ intr_mode; struct lpfc_vport* pport; int ModelDesc; int ModelName; TYPE_1__ fcf; int active_rrq_list; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (struct lpfc_hba*,int) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (struct lpfc_vport*) ;
 int FUNC_10 (struct lpfc_hba*,int ,int ) ;
 struct lpfc_hba* FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct lpfc_hba*) ;
 int FUNC_13 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_14 (struct lpfc_vport*) ;
 int FUNC_15 (struct lpfc_hba*) ;
 int FUNC_16 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_17 (struct lpfc_hba*) ;
 struct Scsi_Host* FUNC_18 (struct lpfc_vport*) ;
 int FUNC_19 (struct lpfc_hba*) ;
 int FUNC_20 (struct lpfc_hba*) ;
 int FUNC_21 (struct lpfc_hba*) ;
 scalar_t__ FUNC_22 (struct lpfc_hba*,scalar_t__) ;
 scalar_t__ FUNC_23 (struct lpfc_hba*) ;
 int FUNC_24 (struct lpfc_hba*) ;
 int FUNC_25 (struct lpfc_hba*) ;
 int FUNC_26 (struct lpfc_hba*) ;
 int FUNC_27 (struct lpfc_hba*,int ) ;
 int FUNC_28 (struct lpfc_hba*) ;
 int FUNC_29 (struct lpfc_hba*) ;
 int FUNC_30 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_31(struct pci_dev *VAR_9, const struct pci_device_id *VAR_10)
{
 struct lpfc_hba *VAR_11;
 struct lpfc_vport *VAR_12 = ((void*)0);
 struct Scsi_Host *VAR_13 = ((void*)0);
 int VAR_14;
 uint32_t VAR_15, VAR_16;


 VAR_11 = FUNC_11(VAR_9);
 if (!VAR_11)
  return -VAR_1;


 VAR_14 = FUNC_8(VAR_11);
 if (VAR_14)
  goto out_free_phba;


 VAR_14 = FUNC_2(VAR_11, VAR_7);
 if (VAR_14)
  goto out_disable_pci_dev;


 VAR_14 = FUNC_24(VAR_11);
 if (VAR_14) {
  FUNC_16(VAR_11, VAR_3, VAR_4,
    "1410 Failed to set up pci memory space.\n");
  goto out_disable_pci_dev;
 }


 VAR_14 = FUNC_20(VAR_11);
 if (VAR_14) {
  FUNC_16(VAR_11, VAR_3, VAR_4,
    "1412 Failed to set up driver resource.\n");
  goto out_unset_pci_mem_s4;
 }

 FUNC_0(&VAR_11->active_rrq_list);
 FUNC_0(&VAR_11->fcf.fcf_pri_list);


 VAR_14 = FUNC_17(VAR_11);
 if (VAR_14) {
  FUNC_16(VAR_11, VAR_3, VAR_4,
    "1414 Failed to set up driver resource.\n");
  goto out_unset_driver_resource_s4;
 }


 FUNC_10(VAR_11, VAR_11->ModelName, VAR_11->ModelDesc);


 VAR_15 = VAR_11->cfg_use_msi;


 VAR_11->pport = ((void*)0);
 FUNC_28(VAR_11);


 VAR_16 = FUNC_22(VAR_11, VAR_15);
 if (VAR_16 == VAR_6) {
  FUNC_16(VAR_11, VAR_3, VAR_4,
    "0426 Failed to enable interrupt.\n");
  VAR_14 = -VAR_0;
  goto out_unset_driver_resource;
 }

 if (VAR_11->intr_type != VAR_8) {
  VAR_11->cfg_irq_chann = 1;
  if (VAR_11->cfg_enable_fc4_type & VAR_5) {
   if (VAR_11->nvmet_support)
    VAR_11->cfg_nvmet_mrq = 1;
  }
 }
 FUNC_3(VAR_11, VAR_11->cfg_irq_chann);


 VAR_14 = FUNC_4(VAR_11);
 if (VAR_14) {
  FUNC_16(VAR_11, VAR_3, VAR_4,
    "1415 Failed to create scsi host.\n");
  goto out_disable_intr;
 }
 VAR_12 = VAR_11->pport;
 VAR_13 = FUNC_18(VAR_12);


 VAR_14 = FUNC_1(VAR_12);
 if (VAR_14) {
  FUNC_16(VAR_11, VAR_3, VAR_4,
    "1416 Failed to allocate sysfs attr\n");
  goto out_destroy_shost;
 }


 if (FUNC_23(VAR_11)) {
  FUNC_16(VAR_11, VAR_3, VAR_4,
    "1421 Failed to set up hba\n");
  VAR_14 = -VAR_0;
  goto out_free_sysfs_attr;
 }


 VAR_11->intr_mode = VAR_16;
 FUNC_13(VAR_11, VAR_16);


 FUNC_15(VAR_11);




 if (VAR_11->nvmet_support == 0) {
  if (VAR_11->cfg_enable_fc4_type & VAR_5) {





   VAR_14 = FUNC_14(VAR_12);
   if (VAR_14) {
    FUNC_16(VAR_11, VAR_3, VAR_4,
      "6004 NVME registration "
      "failed, error x%x\n",
      VAR_14);
   }
  }
 }


 if (VAR_11->cfg_request_firmware_upgrade)
  FUNC_27(VAR_11, VAR_2);


 FUNC_5(VAR_11);


 FUNC_26(VAR_11);

 return 0;

out_free_sysfs_attr:
 FUNC_9(VAR_12);
out_destroy_shost:
 FUNC_6(VAR_11);
out_disable_intr:
 FUNC_19(VAR_11);
out_unset_driver_resource:
 FUNC_29(VAR_11);
out_unset_driver_resource_s4:
 FUNC_21(VAR_11);
out_unset_pci_mem_s4:
 FUNC_25(VAR_11);
out_disable_pci_dev:
 FUNC_7(VAR_11);
 if (VAR_13)
  FUNC_30(VAR_13);
out_free_phba:
 FUNC_12(VAR_11);
 return VAR_14;
}
