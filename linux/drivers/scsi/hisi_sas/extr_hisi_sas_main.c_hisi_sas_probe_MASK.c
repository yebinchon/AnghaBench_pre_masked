
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int shost; } ;
struct sas_ha_struct {int num_phys; struct asd_sas_port** sas_port; struct asd_sas_phy** sas_phy; TYPE_1__ core; int * sas_addr; int lldd_module; int dev; int sas_ha_name; struct hisi_hba* lldd_ha; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct hisi_sas_hw {int dummy; } ;
struct hisi_hba {int n_phy; TYPE_4__* hw; TYPE_3__* port; TYPE_2__* phy; int shost; int * sas_addr; int dev; } ;
struct asd_sas_port {int dummy; } ;
struct asd_sas_phy {int dummy; } ;
struct Scsi_Host {int max_channel; int max_cmd_len; void* cmd_per_lun; void* can_queue; int max_lun; int max_id; int transportt; } ;
struct TYPE_8__ {int (* hw_init ) (struct hisi_hba*) ;scalar_t__ slot_index_alloc; } ;
struct TYPE_7__ {struct asd_sas_port sas_port; } ;
struct TYPE_6__ {struct asd_sas_phy sas_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 int VAR_6 ;
 void* FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct hisi_hba*) ;
 struct Scsi_Host* FUNC_3 (struct platform_device*,struct hisi_sas_hw const*) ;
 int VAR_7 ;
 int FUNC_4 (struct platform_device*,struct sas_ha_struct*) ;
 int FUNC_5 (struct sas_ha_struct*) ;
 int FUNC_6 (struct Scsi_Host*,struct device*) ;
 int FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct Scsi_Host*) ;
 struct hisi_hba* FUNC_10 (struct Scsi_Host*) ;
 int FUNC_11 (struct hisi_hba*) ;

int FUNC_12(struct platform_device *VAR_8,
     const struct hisi_sas_hw *VAR_9)
{
 struct Scsi_Host *VAR_10;
 struct hisi_hba *VAR_11;
 struct device *VAR_12 = &VAR_8->dev;
 struct asd_sas_phy **VAR_13;
 struct asd_sas_port **VAR_14;
 struct sas_ha_struct *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_10 = FUNC_3(VAR_8, VAR_9);
 if (!VAR_10)
  return -VAR_1;

 VAR_15 = FUNC_0(VAR_10);
 VAR_11 = FUNC_10(VAR_10);
 FUNC_4(VAR_8, VAR_15);

 VAR_17 = VAR_18 = VAR_11->n_phy;

 VAR_13 = FUNC_1(VAR_12, VAR_17, sizeof(void *), VAR_2);
 VAR_14 = FUNC_1(VAR_12, VAR_18, sizeof(void *), VAR_2);
 if (!VAR_13 || !VAR_14) {
  VAR_16 = -VAR_1;
  goto err_out_ha;
 }

 VAR_15->sas_phy = VAR_13;
 VAR_15->sas_port = VAR_14;
 VAR_15->lldd_ha = VAR_11;

 VAR_10->transportt = VAR_7;
 VAR_10->max_id = VAR_4;
 VAR_10->max_lun = ~0;
 VAR_10->max_channel = 1;
 VAR_10->max_cmd_len = 16;
 if (VAR_11->hw->slot_index_alloc) {
  VAR_10->can_queue = VAR_3;
  VAR_10->cmd_per_lun = VAR_3;
 } else {
  VAR_10->can_queue = VAR_5;
  VAR_10->cmd_per_lun = VAR_5;
 }

 VAR_15->sas_ha_name = VAR_0;
 VAR_15->dev = VAR_11->dev;
 VAR_15->lldd_module = VAR_6;
 VAR_15->sas_addr = &VAR_11->sas_addr[0];
 VAR_15->num_phys = VAR_11->n_phy;
 VAR_15->core.shost = VAR_11->shost;

 for (VAR_19 = 0; VAR_19 < VAR_11->n_phy; VAR_19++) {
  VAR_15->sas_phy[VAR_19] = &VAR_11->phy[VAR_19].sas_phy;
  VAR_15->sas_port[VAR_19] = &VAR_11->port[VAR_19].sas_port;
 }

 VAR_16 = FUNC_6(VAR_10, &VAR_8->dev);
 if (VAR_16)
  goto err_out_ha;

 VAR_16 = FUNC_5(VAR_15);
 if (VAR_16)
  goto err_out_register_ha;

 VAR_16 = VAR_11->hw->hw_init(VAR_11);
 if (VAR_16)
  goto err_out_register_ha;

 FUNC_9(VAR_10);

 return 0;

err_out_register_ha:
 FUNC_8(VAR_10);
err_out_ha:
 FUNC_2(VAR_11);
 FUNC_7(VAR_10);
 return VAR_16;
}
