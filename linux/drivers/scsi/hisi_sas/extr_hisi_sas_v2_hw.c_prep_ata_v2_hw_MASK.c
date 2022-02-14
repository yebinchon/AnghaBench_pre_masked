
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {scalar_t__ command; int control; int flags; int sector_count; } ;
struct TYPE_4__ {TYPE_2__ fis; int device_control_reg_update; scalar_t__ use_ncq; } ;
struct sas_task {int data_dir; int total_xfer_len; TYPE_1__ ata_task; int scatter; struct ata_queued_cmd* uldd_task; struct domain_device* dev; } ;
struct host_to_dev_fis {int dummy; } ;
struct hisi_sas_tmf_task {int phy_id; scalar_t__ force_phy; } ;
struct hisi_sas_slot {int idx; int n_elem; struct hisi_sas_tmf_task* tmf; struct hisi_sas_cmd_hdr* cmd_hdr; struct sas_task* task; } ;
struct hisi_sas_port {int id; } ;
struct hisi_sas_device {int device_id; } ;
struct hisi_sas_cmd_hdr {void* sts_buffer_addr; void* cmd_table_addr; void* data_transfer_len; void* transfer_tags; void* dw2; void* dw1; void* dw0; } ;
struct hisi_hba {int dummy; } ;
struct domain_device {int dev_type; struct asd_sas_port* port; struct hisi_sas_device* lldd_dev; struct domain_device* parent; } ;
struct ata_queued_cmd {int tag; } ;
struct asd_sas_port {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;


 int VAR_16 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct hisi_sas_slot*) ;
 int * FUNC_4 (struct hisi_sas_slot*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (struct hisi_sas_slot*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,TYPE_2__*,int) ;
 int FUNC_9 (struct hisi_hba*,struct hisi_sas_slot*,struct hisi_sas_cmd_hdr*,int ,int ) ;
 struct hisi_sas_port* FUNC_10 (struct asd_sas_port*) ;

__attribute__((used)) static void FUNC_11(struct hisi_hba *VAR_17,
     struct hisi_sas_slot *VAR_18)
{
 struct sas_task *VAR_19 = VAR_18->task;
 struct domain_device *VAR_20 = VAR_19->dev;
 struct domain_device *VAR_21 = VAR_20->parent;
 struct hisi_sas_device *VAR_22 = VAR_20->lldd_dev;
 struct hisi_sas_cmd_hdr *VAR_23 = VAR_18->cmd_hdr;
 struct asd_sas_port *VAR_24 = VAR_20->port;
 struct hisi_sas_port *VAR_25 = FUNC_10(VAR_24);
 struct hisi_sas_tmf_task *VAR_26 = VAR_18->tmf;
 u8 *VAR_27;
 int VAR_28 = 0, VAR_29 = 0;
 u32 VAR_30, VAR_31 = 0, VAR_32 = 0;



 VAR_30 = VAR_25->id << VAR_11;
 if (VAR_21 && FUNC_2(VAR_21->dev_type))
  VAR_30 |= 3 << VAR_3;
 else
  VAR_30 |= 4 << VAR_3;

 if (VAR_26 && VAR_26->force_phy) {
  VAR_30 |= VAR_7;
  VAR_30 |= (1 << VAR_26->phy_id) << VAR_10;
 }

 VAR_23->dw0 = FUNC_0(VAR_30);


 switch (VAR_19->data_dir) {
 case 128:
  VAR_28 = 1;
  VAR_31 |= VAR_14 << VAR_6;
  break;
 case 129:
  VAR_28 = 1;
  VAR_31 |= VAR_15 << VAR_6;
  break;
 default:
  VAR_31 &= ~VAR_5;
 }

 if ((VAR_19->ata_task.fis.command == VAR_0) &&
   (VAR_19->ata_task.fis.control & VAR_1))
  VAR_31 |= 1 << VAR_12;

 VAR_31 |= (FUNC_5(
  &VAR_19->ata_task.fis, VAR_19->data_dir))
  << VAR_8;
 VAR_31 |= VAR_22->device_id << VAR_4;
 VAR_23->dw1 = FUNC_0(VAR_31);


 if (VAR_19->ata_task.use_ncq) {
  struct ata_queued_cmd *VAR_33 = VAR_19->uldd_task;

  VAR_29 = VAR_33->tag;
  VAR_19->ata_task.fis.sector_count |= (u8) (VAR_29 << 3);
  VAR_32 |= VAR_29 << VAR_9;
 }

 VAR_32 |= (VAR_16 / 4) << VAR_2 |
   2 << VAR_13;
 VAR_23->dw2 = FUNC_0(VAR_32);


 VAR_23->transfer_tags = FUNC_0(VAR_18->idx);

 if (VAR_28)
  FUNC_9(VAR_17, VAR_18, VAR_23, VAR_19->scatter,
     VAR_18->n_elem);

 VAR_23->data_transfer_len = FUNC_0(VAR_19->total_xfer_len);
 VAR_23->cmd_table_addr = FUNC_1(FUNC_3(VAR_18));
 VAR_23->sts_buffer_addr = FUNC_1(FUNC_6(VAR_18));

 VAR_27 = FUNC_4(VAR_18);

 if (FUNC_7(!VAR_19->ata_task.device_control_reg_update))
  VAR_19->ata_task.fis.flags |= 0x80;

 FUNC_8(VAR_27, &VAR_19->ata_task.fis, sizeof(struct host_to_dev_fis));
}
