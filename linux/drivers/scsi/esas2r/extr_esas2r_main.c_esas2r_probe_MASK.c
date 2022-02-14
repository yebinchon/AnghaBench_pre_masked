
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct TYPE_4__ {int counter; } ;
struct pci_dev {int dev; int devfn; TYPE_2__* bus; TYPE_1__ enable_cnt; int subsystem_device; int subsystem_vendor; int device; int vendor; } ;
struct esas2r_request {int dummy; } ;
struct esas2r_adapter {int sysfs_fw_created; int sysfs_fs_created; int sysfs_vda_created; int sysfs_hw_created; int sysfs_live_nvram_created; int sysfs_default_nvram_created; } ;
struct TYPE_6__ {int kobj; } ;
struct Scsi_Host {int max_lun; int max_cmd_len; int shost_gendev; TYPE_3__ shost_dev; scalar_t__ hostdata; int max_sectors; int sg_tablesize; int unique_id; scalar_t__ max_channel; scalar_t__ max_id; scalar_t__ this_id; int cmd_per_lun; int can_queue; } ;
typedef int num_requests ;
struct TYPE_5__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct esas2r_adapter*) ;
 int FUNC_1 (struct Scsi_Host*,struct pci_dev*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int *,char*,...) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (scalar_t__,int ,size_t) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,struct Scsi_Host*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_9 (int *,size_t) ;
 int FUNC_10 (struct Scsi_Host*) ;
 int FUNC_11 (struct Scsi_Host*) ;
 int VAR_17 ;
 scalar_t__ FUNC_12 (int *,int *) ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_18,
   const struct pci_device_id *VAR_19)
{
 struct Scsi_Host *VAR_20 = ((void*)0);
 struct esas2r_adapter *VAR_21;
 int VAR_22;

 size_t VAR_23 = sizeof(struct esas2r_adapter)
     + ((num_requests) +
        1) * sizeof(struct esas2r_request);

 FUNC_3(VAR_2, &(VAR_18->dev),
         "esas2r_probe() 0x%02x 0x%02x 0x%02x 0x%02x",
         VAR_18->vendor,
         VAR_18->device,
         VAR_18->subsystem_vendor,
         VAR_18->subsystem_device);

 FUNC_3(VAR_3, &(VAR_18->dev),
         "before pci_enable_device() "
         "enable_cnt: %d",
         VAR_18->enable_cnt.counter);

 VAR_22 = FUNC_5(VAR_18);
 if (VAR_22 != 0) {
  FUNC_3(VAR_1, &(VAR_18->dev),
          "pci_enable_device() FAIL (%d)",
          VAR_22);
  return -VAR_0;
 }

 FUNC_3(VAR_3, &(VAR_18->dev),
         "pci_enable_device() OK");
 FUNC_3(VAR_3, &(VAR_18->dev),
         "after pci_enable_device() enable_cnt: %d",
         VAR_18->enable_cnt.counter);

 VAR_20 = FUNC_9(&VAR_14, VAR_23);
 if (VAR_20 == ((void*)0)) {
  FUNC_2(VAR_1, "scsi_host_alloc() FAIL");
  return -VAR_0;
 }

 FUNC_4(VAR_20->hostdata, 0, VAR_23);

 VAR_21 = (struct esas2r_adapter *)VAR_20->hostdata;

 FUNC_2(VAR_3, "scsi_host_alloc() OK host: %p", VAR_20);



 VAR_20->max_id = VAR_5 + 1;
 VAR_20->max_lun = 255;



 VAR_20->max_cmd_len = 16;

 VAR_20->can_queue = VAR_12;
 VAR_20->cmd_per_lun = VAR_13;
 VAR_20->this_id = VAR_20->max_id + 1;
 VAR_20->max_channel = 0;
 VAR_20->unique_id = VAR_16;
 VAR_20->sg_tablesize = VAR_17;
 VAR_20->max_sectors = VAR_15;



 FUNC_2(VAR_3, "pci_set_master() called");

 FUNC_7(VAR_18);

 if (!FUNC_1(VAR_20, VAR_18, VAR_16)) {
  FUNC_2(VAR_1,
      "unable to initialize device at PCI bus %x:%x",
      VAR_18->bus->number,
      VAR_18->devfn);

  FUNC_3(VAR_3, &(VAR_20->shost_gendev),
          "scsi_host_put() called");

  FUNC_10(VAR_20);

  return 0;

 }

 FUNC_2(VAR_3, "pci_set_drvdata(%p, %p) called", VAR_18,
     VAR_20->hostdata);

 FUNC_6(VAR_18, VAR_20);

 FUNC_2(VAR_3, "scsi_add_host() called");

 VAR_22 = FUNC_8(VAR_20, &VAR_18->dev);

 if (VAR_22) {
  FUNC_2(VAR_1, "scsi_add_host returned %d", VAR_22);
  FUNC_3(VAR_1, &(VAR_20->shost_gendev),
          "scsi_add_host() FAIL");

  FUNC_3(VAR_3, &(VAR_20->shost_gendev),
          "scsi_host_put() called");

  FUNC_10(VAR_20);

  FUNC_3(VAR_3, &(VAR_20->shost_gendev),
          "pci_set_drvdata(%p, NULL) called",
          VAR_18);

  FUNC_6(VAR_18, ((void*)0));

  return -VAR_0;
 }


 FUNC_0(VAR_21);

 FUNC_3(VAR_3, &(VAR_20->shost_gendev),
         "scsi_scan_host() called");

 FUNC_11(VAR_20);


 if (FUNC_12(&VAR_20->shost_dev.kobj, &VAR_8))
  FUNC_3(VAR_4, &(VAR_20->shost_gendev),
          "Failed to create sysfs binary file: fw");
 else
  VAR_21->sysfs_fw_created = 1;

 if (FUNC_12(&VAR_20->shost_dev.kobj, &VAR_7))
  FUNC_3(VAR_4, &(VAR_20->shost_gendev),
          "Failed to create sysfs binary file: fs");
 else
  VAR_21->sysfs_fs_created = 1;

 if (FUNC_12(&VAR_20->shost_dev.kobj, &VAR_11))
  FUNC_3(VAR_4, &(VAR_20->shost_gendev),
          "Failed to create sysfs binary file: vda");
 else
  VAR_21->sysfs_vda_created = 1;

 if (FUNC_12(&VAR_20->shost_dev.kobj, &VAR_9))
  FUNC_3(VAR_4, &(VAR_20->shost_gendev),
          "Failed to create sysfs binary file: hw");
 else
  VAR_21->sysfs_hw_created = 1;

 if (FUNC_12(&VAR_20->shost_dev.kobj, &VAR_10))
  FUNC_3(VAR_4, &(VAR_20->shost_gendev),
          "Failed to create sysfs binary file: live_nvram");
 else
  VAR_21->sysfs_live_nvram_created = 1;

 if (FUNC_12(&VAR_20->shost_dev.kobj,
      &VAR_6))
  FUNC_3(VAR_4, &(VAR_20->shost_gendev),
          "Failed to create sysfs binary file: default_nvram");
 else
  VAR_21->sysfs_default_nvram_created = 1;

 VAR_16++;

 return 0;
}
