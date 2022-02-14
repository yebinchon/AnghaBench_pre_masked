
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int device; int devfn; int dev; TYPE_1__* bus; } ;
struct megasas_instance {int unique_id; scalar_t__ adapter_type; struct pci_dev* pdev; scalar_t__ msix_vectors; TYPE_3__* instancet; scalar_t__ requestorId; TYPE_2__* host_device_list_buf; int enable_fw_dev_list; scalar_t__ unload; void* vf_affiliation; int vf_affiliation_h; void* vf_affiliation_111; int vf_affiliation_111_h; scalar_t__ PlasmaFW111; int init_id; struct Scsi_Host* host; int fw_reset_no_pci_access; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct MR_LD_VF_AFFILIATION_111 {int dummy; } ;
struct MR_LD_VF_AFFILIATION {int dummy; } ;
struct TYPE_8__ {size_t max_index; struct megasas_instance** instance; int count; } ;
struct TYPE_7__ {int (* disable_intr ) (struct megasas_instance*) ;} ;
struct TYPE_6__ {scalar_t__ count; } ;
struct TYPE_5__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;






 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int *,char*) ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,int,int *,int ) ;
 int FUNC_6 (struct megasas_instance*) ;
 int FUNC_7 (struct megasas_instance*,int) ;
 scalar_t__ FUNC_8 (struct megasas_instance*) ;
 scalar_t__ FUNC_9 (struct megasas_instance*) ;
 TYPE_4__ VAR_9 ;
 int FUNC_10 (struct megasas_instance*) ;
 int FUNC_11 (struct megasas_instance*) ;
 int FUNC_12 (struct megasas_instance*) ;
 int FUNC_13 (struct megasas_instance*) ;
 scalar_t__ FUNC_14 (struct megasas_instance*) ;
 int VAR_10 ;
 int FUNC_15 (struct megasas_instance*,int ,int) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*,int ) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_21 (struct pci_dev*,struct megasas_instance*) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*,scalar_t__,int) ;
 scalar_t__ VAR_11 ;
 struct Scsi_Host* FUNC_24 (int *,int) ;
 int FUNC_25 (struct Scsi_Host*) ;
 int FUNC_26 (struct Scsi_Host*) ;
 int FUNC_27 (struct megasas_instance*) ;

__attribute__((used)) static int FUNC_28(struct pci_dev *VAR_12,
        const struct pci_device_id *VAR_13)
{
 int VAR_14, VAR_15;
 struct Scsi_Host *VAR_16;
 struct megasas_instance *VAR_17;
 u16 VAR_18 = 0;

 switch (VAR_12->device) {
 case 133:
 case 131:
 case 130:
 case 128:
  FUNC_1(&VAR_12->dev, "Adapter is in non secure mode\n");
  return 1;
 case 132:
 case 129:
  FUNC_2(&VAR_12->dev, "Adapter is in configurable secure mode\n");
  break;
 }


 if (VAR_11) {
  VAR_15 = FUNC_18(VAR_12, VAR_6);
  if (VAR_15) {
   FUNC_20(VAR_12, VAR_15 + VAR_7,
          &VAR_18);
   if (VAR_18 & VAR_8) {
    FUNC_2(&VAR_12->dev, "resetting MSI-X\n");
    FUNC_23(VAR_12,
            VAR_15 + VAR_7,
            VAR_18 &
            ~VAR_8);
   }
  }
 }




 VAR_14 = FUNC_17(VAR_12);

 if (VAR_14) {
  return VAR_14;
 }

 FUNC_22(VAR_12);

 VAR_16 = FUNC_24(&VAR_10,
          sizeof(struct megasas_instance));

 if (!VAR_16) {
  FUNC_3(VAR_2, &VAR_12->dev, "scsi_host_alloc failed\n");
  goto fail_alloc_instance;
 }

 VAR_17 = (struct megasas_instance *)VAR_16->hostdata;
 FUNC_15(VAR_17, 0, sizeof(*VAR_17));
 FUNC_0(&VAR_17->fw_reset_no_pci_access, 0);




 VAR_17->pdev = VAR_12;
 VAR_17->host = VAR_16;
 VAR_17->unique_id = VAR_12->bus->number << 8 | VAR_12->devfn;
 VAR_17->init_id = VAR_4;

 FUNC_12(VAR_17);




 if (FUNC_8(VAR_17))
  goto fail_init_mfi;

 if (VAR_17->requestorId) {
  if (VAR_17->PlasmaFW111) {
   VAR_17->vf_affiliation_111 =
    FUNC_5(&VAR_12->dev,
     sizeof(struct MR_LD_VF_AFFILIATION_111),
     &VAR_17->vf_affiliation_111_h,
     VAR_1);
   if (!VAR_17->vf_affiliation_111)
    FUNC_4(&VAR_12->dev, "Can't allocate "
           "memory for VF affiliation buffer\n");
  } else {
   VAR_17->vf_affiliation =
    FUNC_5(&VAR_12->dev,
     (VAR_3 + 1) *
     sizeof(struct MR_LD_VF_AFFILIATION),
     &VAR_17->vf_affiliation_h,
     VAR_1);
   if (!VAR_17->vf_affiliation)
    FUNC_4(&VAR_12->dev, "Can't allocate "
           "memory for VF affiliation buffer\n");
  }
 }




 FUNC_21(VAR_12, VAR_17);





 VAR_9.count++;
 VAR_9.instance[VAR_9.max_index] = VAR_17;
 VAR_9.max_index++;




 if (FUNC_9(VAR_17))
  goto fail_io_attach;

 VAR_17->unload = 0;



 if (!VAR_17->enable_fw_dev_list ||
     (VAR_17->host_device_list_buf->count > 0))
  FUNC_26(VAR_16);




 if (FUNC_14(VAR_17)) {
  FUNC_3(VAR_2, &VAR_12->dev, "start aen failed\n");
  goto fail_start_aen;
 }

 FUNC_13(VAR_17);


 if (VAR_17->requestorId)
  FUNC_7(VAR_17, 1);

 return 0;

fail_start_aen:
fail_io_attach:
 VAR_9.count--;
 VAR_9.max_index--;
 VAR_9.instance[VAR_9.max_index] = ((void*)0);

 VAR_17->instancet->disable_intr(VAR_17);
 FUNC_6(VAR_17);

 if (VAR_17->adapter_type != VAR_5)
  FUNC_10(VAR_17);
 else
  FUNC_11(VAR_17);
 if (VAR_17->msix_vectors)
  FUNC_19(VAR_17->pdev);
fail_init_mfi:
 FUNC_25(VAR_16);
fail_alloc_instance:
 FUNC_16(VAR_12);

 return -VAR_0;
}
