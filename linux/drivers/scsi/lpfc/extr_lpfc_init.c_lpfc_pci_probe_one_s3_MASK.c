
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct lpfc_vport {int dummy; } ;
struct TYPE_3__ {scalar_t__ sli_intr; } ;
struct TYPE_4__ {TYPE_1__ slistat; } ;
struct lpfc_hba {int intr_mode; TYPE_2__ sli; int cfg_use_msi; struct lpfc_vport* pport; int ModelDesc; int ModelName; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_hba*,int ) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_vport*) ;
 int FUNC_9 (struct lpfc_hba*,int ,int ) ;
 struct lpfc_hba* FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct lpfc_hba*) ;
 int FUNC_12 (struct lpfc_hba*,int ) ;
 int FUNC_13 (struct lpfc_hba*,int ) ;
 int FUNC_14 (struct lpfc_hba*) ;
 int FUNC_15 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_16 (struct lpfc_hba*) ;
 struct Scsi_Host* FUNC_17 (struct lpfc_vport*) ;
 int FUNC_18 (struct lpfc_hba*) ;
 int FUNC_19 (struct lpfc_hba*) ;
 int FUNC_20 (struct lpfc_hba*) ;
 int FUNC_21 (struct lpfc_hba*,int ) ;
 scalar_t__ FUNC_22 (struct lpfc_hba*) ;
 int FUNC_23 (struct lpfc_hba*) ;
 int FUNC_24 (struct lpfc_hba*) ;
 int FUNC_25 (struct lpfc_hba*) ;
 int FUNC_26 (struct lpfc_hba*) ;
 int FUNC_27 (struct lpfc_hba*) ;
 int FUNC_28 (int) ;
 int FUNC_29 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_30(struct pci_dev *VAR_9, const struct pci_device_id *VAR_10)
{
 struct lpfc_hba *VAR_11;
 struct lpfc_vport *VAR_12 = ((void*)0);
 struct Scsi_Host *VAR_13 = ((void*)0);
 int VAR_14;
 uint32_t VAR_15, VAR_16;


 VAR_11 = FUNC_10(VAR_9);
 if (!VAR_11)
  return -VAR_1;


 VAR_14 = FUNC_6(VAR_11);
 if (VAR_14)
  goto out_free_phba;


 VAR_14 = FUNC_1(VAR_11, VAR_8);
 if (VAR_14)
  goto out_disable_pci_dev;


 VAR_14 = FUNC_23(VAR_11);
 if (VAR_14) {
  FUNC_15(VAR_11, VAR_2, VAR_4,
    "1402 Failed to set up pci memory space.\n");
  goto out_disable_pci_dev;
 }


 VAR_14 = FUNC_19(VAR_11);
 if (VAR_14) {
  FUNC_15(VAR_11, VAR_2, VAR_4,
    "1404 Failed to set up driver resource.\n");
  goto out_unset_pci_mem_s3;
 }



 VAR_14 = FUNC_12(VAR_11, VAR_6);
 if (VAR_14) {
  FUNC_15(VAR_11, VAR_2, VAR_4,
    "1405 Failed to initialize iocb list.\n");
  goto out_unset_driver_resource_s3;
 }


 VAR_14 = FUNC_16(VAR_11);
 if (VAR_14) {
  FUNC_15(VAR_11, VAR_2, VAR_4,
    "1406 Failed to set up driver resource.\n");
  goto out_free_iocb_list;
 }


 FUNC_9(VAR_11, VAR_11->ModelName, VAR_11->ModelDesc);


 VAR_14 = FUNC_2(VAR_11);
 if (VAR_14) {
  FUNC_15(VAR_11, VAR_2, VAR_4,
    "1407 Failed to create scsi host.\n");
  goto out_unset_driver_resource;
 }


 VAR_12 = VAR_11->pport;
 VAR_14 = FUNC_0(VAR_12);
 if (VAR_14) {
  FUNC_15(VAR_11, VAR_2, VAR_4,
    "1476 Failed to allocate sysfs attr\n");
  goto out_destroy_shost;
 }

 VAR_13 = FUNC_17(VAR_12);

 VAR_15 = VAR_11->cfg_use_msi;
 while (1) {

  FUNC_25(VAR_11);

  VAR_16 = FUNC_21(VAR_11, VAR_15);
  if (VAR_16 == VAR_5) {
   FUNC_15(VAR_11, VAR_2, VAR_4,
     "0431 Failed to enable interrupt.\n");
   VAR_14 = -VAR_0;
   goto out_free_sysfs_attr;
  }

  if (FUNC_22(VAR_11)) {
   FUNC_15(VAR_11, VAR_2, VAR_4,
     "1477 Failed to set up hba\n");
   VAR_14 = -VAR_0;
   goto out_remove_device;
  }


  FUNC_28(50);

  if (VAR_16 == 0 ||
      VAR_11->sli.slistat.sli_intr > VAR_7) {

   VAR_11->intr_mode = VAR_16;
   FUNC_13(VAR_11, VAR_16);
   break;
  } else {
   FUNC_15(VAR_11, VAR_3, VAR_4,
     "0447 Configure interrupt mode (%d) "
     "failed active interrupt test.\n",
     VAR_16);

   FUNC_18(VAR_11);

   VAR_15 = --VAR_16;
  }
 }


 FUNC_14(VAR_11);


 FUNC_3(VAR_11);

 return 0;

out_remove_device:
 FUNC_27(VAR_11);
out_free_sysfs_attr:
 FUNC_8(VAR_12);
out_destroy_shost:
 FUNC_4(VAR_11);
out_unset_driver_resource:
 FUNC_26(VAR_11);
out_free_iocb_list:
 FUNC_7(VAR_11);
out_unset_driver_resource_s3:
 FUNC_20(VAR_11);
out_unset_pci_mem_s3:
 FUNC_24(VAR_11);
out_disable_pci_dev:
 FUNC_5(VAR_11);
 if (VAR_13)
  FUNC_29(VAR_13);
out_free_phba:
 FUNC_11(VAR_11);
 return VAR_14;
}
