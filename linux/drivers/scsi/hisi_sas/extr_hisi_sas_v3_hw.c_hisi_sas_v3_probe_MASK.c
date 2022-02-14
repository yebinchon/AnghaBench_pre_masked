
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct Scsi_Host* shost; } ;
struct sas_ha_struct {int num_phys; struct asd_sas_port** sas_port; struct asd_sas_phy** sas_phy; int * sas_addr; int lldd_module; struct device* dev; int sas_ha_name; struct hisi_hba* lldd_ha; TYPE_1__ core; } ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct hisi_hba {int n_phy; int prot_mask; TYPE_4__* hw; int shost; TYPE_3__* port; TYPE_2__* phy; int * sas_addr; int regs; } ;
struct asd_sas_port {int dummy; } ;
struct asd_sas_phy {int dummy; } ;
struct Scsi_Host {int max_channel; int max_cmd_len; void* cmd_per_lun; void* can_queue; int max_lun; int max_id; int transportt; } ;
struct TYPE_8__ {int (* hw_init ) (struct hisi_hba*) ;} ;
struct TYPE_7__ {struct asd_sas_port sas_port; } ;
struct TYPE_6__ {struct asd_sas_phy sas_phy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 struct sas_ha_struct* FUNC_1 (struct Scsi_Host*) ;
 int VAR_8 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct device*,struct sas_ha_struct*) ;
 void* FUNC_5 (struct device*,int,int,int ) ;
 int FUNC_6 (struct device*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (struct hisi_hba*) ;
 struct Scsi_Host* FUNC_8 (struct pci_dev*) ;
 int VAR_10 ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int,int ) ;
 int VAR_11 ;
 int FUNC_15 (struct sas_ha_struct*) ;
 int FUNC_16 (struct Scsi_Host*,struct device*) ;
 int FUNC_17 (struct Scsi_Host*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct Scsi_Host*) ;
 int FUNC_21 (struct Scsi_Host*) ;
 struct hisi_hba* FUNC_22 (struct Scsi_Host*) ;
 int FUNC_23 (struct hisi_hba*) ;

__attribute__((used)) static int
FUNC_24(struct pci_dev *VAR_12, const struct pci_device_id *VAR_13)
{
 struct Scsi_Host *VAR_14;
 struct hisi_hba *VAR_15;
 struct device *VAR_16 = &VAR_12->dev;
 struct asd_sas_phy **VAR_17;
 struct asd_sas_port **VAR_18;
 struct sas_ha_struct *VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_20 = FUNC_10(VAR_12);
 if (VAR_20)
  goto err_out;

 FUNC_13(VAR_12);

 VAR_20 = FUNC_12(VAR_12, VAR_0);
 if (VAR_20)
  goto err_out_disable_device;

 VAR_20 = FUNC_6(&VAR_12->dev, FUNC_0(64));
 if (VAR_20)
  VAR_20 = FUNC_6(&VAR_12->dev, FUNC_0(32));
 if (VAR_20) {
  FUNC_2(VAR_16, "No usable DMA addressing method\n");
  VAR_20 = -VAR_1;
  goto err_out_regions;
 }

 VAR_14 = FUNC_8(VAR_12);
 if (!VAR_14) {
  VAR_20 = -VAR_2;
  goto err_out_regions;
 }

 VAR_19 = FUNC_1(VAR_14);
 VAR_15 = FUNC_22(VAR_14);
 FUNC_4(VAR_16, VAR_19);

 VAR_15->regs = FUNC_14(VAR_12, 5, 0);
 if (!VAR_15->regs) {
  FUNC_2(VAR_16, "cannot map register\n");
  VAR_20 = -VAR_2;
  goto err_out_ha;
 }

 VAR_21 = VAR_22 = VAR_15->n_phy;

 VAR_17 = FUNC_5(VAR_16, VAR_21, sizeof(void *), VAR_3);
 VAR_18 = FUNC_5(VAR_16, VAR_22, sizeof(void *), VAR_3);
 if (!VAR_17 || !VAR_18) {
  VAR_20 = -VAR_2;
  goto err_out_ha;
 }

 VAR_19->sas_phy = VAR_17;
 VAR_19->sas_port = VAR_18;
 VAR_19->core.shost = VAR_14;
 VAR_19->lldd_ha = VAR_15;

 VAR_14->transportt = VAR_10;
 VAR_14->max_id = VAR_5;
 VAR_14->max_lun = ~0;
 VAR_14->max_channel = 1;
 VAR_14->max_cmd_len = 16;
 VAR_14->can_queue = VAR_6;
 VAR_14->cmd_per_lun = VAR_6;

 VAR_19->sas_ha_name = VAR_0;
 VAR_19->dev = VAR_16;
 VAR_19->lldd_module = VAR_8;
 VAR_19->sas_addr = &VAR_15->sas_addr[0];
 VAR_19->num_phys = VAR_15->n_phy;

 for (VAR_23 = 0; VAR_23 < VAR_15->n_phy; VAR_23++) {
  VAR_19->sas_phy[VAR_23] = &VAR_15->phy[VAR_23].sas_phy;
  VAR_19->sas_port[VAR_23] = &VAR_15->port[VAR_23].sas_port;
 }

 if (VAR_15->prot_mask) {
  FUNC_3(VAR_16, "Registering for DIF/DIX prot_mask=0x%x\n",
    VAR_11);
  FUNC_19(VAR_15->shost, VAR_11);
  if (VAR_15->prot_mask & VAR_4)
   FUNC_18(VAR_15->shost,
         VAR_7);
 }

 if (VAR_9)
  FUNC_7(VAR_15);

 VAR_20 = FUNC_16(VAR_14, VAR_16);
 if (VAR_20)
  goto err_out_ha;

 VAR_20 = FUNC_15(VAR_19);
 if (VAR_20)
  goto err_out_register_ha;

 VAR_20 = VAR_15->hw->hw_init(VAR_15);
 if (VAR_20)
  goto err_out_register_ha;

 FUNC_21(VAR_14);

 return 0;

err_out_register_ha:
 FUNC_20(VAR_14);
err_out_ha:
 FUNC_17(VAR_14);
err_out_regions:
 FUNC_11(VAR_12);
err_out_disable_device:
 FUNC_9(VAR_12);
err_out:
 return VAR_20;
}
