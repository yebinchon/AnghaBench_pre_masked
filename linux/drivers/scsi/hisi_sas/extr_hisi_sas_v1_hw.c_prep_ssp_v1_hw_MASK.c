
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ssp_tmf_iu {int dummy; } ;
struct ssp_frame_hdr {int dummy; } ;
struct ssp_command_iu {int dummy; } ;
struct scsi_cmnd {int sc_data_direction; int cmd_len; int * cmnd; } ;
struct sas_ssp_task {int task_attr; int task_prio; struct scsi_cmnd* cmd; int LUN; scalar_t__ enable_first_burst; } ;
struct sas_task {int total_xfer_len; struct sas_ssp_task ssp_task; int scatter; struct domain_device* dev; } ;
struct hisi_sas_tmf_task {int tmf; int tag_of_task_to_be_managed; } ;
struct hisi_sas_slot {int idx; int n_elem; struct hisi_sas_tmf_task* tmf; struct hisi_sas_port* port; struct hisi_sas_cmd_hdr* cmd_hdr; struct sas_task* task; } ;
struct hisi_sas_port {int id; } ;
struct hisi_sas_device {int device_id; } ;
struct hisi_sas_cmd_hdr {void* dw2; void* sts_buffer_addr; void* cmd_table_addr; void* data_transfer_len; void* transfer_tags; void* dw1; void* dw0; } ;
struct hisi_hba {int dummy; } ;
struct domain_device {struct hisi_sas_device* lldd_dev; } ;


 int VAR_0 ;
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


 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct hisi_sas_slot*) ;
 int* FUNC_3 (struct hisi_sas_slot*) ;
 int FUNC_4 (struct hisi_sas_slot*) ;
 int FUNC_5 (int*,int *,int) ;
 int FUNC_6 (struct hisi_hba*,struct hisi_sas_slot*,struct hisi_sas_cmd_hdr*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct hisi_hba *VAR_14,
     struct hisi_sas_slot *VAR_15)
{
 struct sas_task *VAR_16 = VAR_15->task;
 struct hisi_sas_cmd_hdr *VAR_17 = VAR_15->cmd_hdr;
 struct domain_device *VAR_18 = VAR_16->dev;
 struct hisi_sas_device *VAR_19 = VAR_18->lldd_dev;
 struct hisi_sas_port *VAR_20 = VAR_15->port;
 struct sas_ssp_task *VAR_21 = &VAR_16->ssp_task;
 struct scsi_cmnd *VAR_22 = VAR_21->cmd;
 struct hisi_sas_tmf_task *VAR_23 = VAR_15->tmf;
 int VAR_24 = 0, VAR_25 = !!VAR_23;
 u8 *VAR_26, VAR_27 = 0;
 u32 VAR_28, VAR_29;


 VAR_17->dw0 = FUNC_0((1 << VAR_9) |
          (0x2 << VAR_11) |
          (VAR_20->id << VAR_7) |
          (VAR_25 << VAR_8) |
          (1 << VAR_5) |
          (1 << VAR_1));

 VAR_28 = 1 << VAR_12;

 if (VAR_23) {
  VAR_28 |= 3 << VAR_10;
 } else {
  switch (VAR_22->sc_data_direction) {
  case 130:
   VAR_28 |= 2 << VAR_10;
   VAR_24 = 1;
   break;
  case 131:
   VAR_28 |= 1 << VAR_10;
   VAR_24 = 1;
   break;
  default:
   VAR_28 |= 0 << VAR_10;
  }
 }


 VAR_28 |= VAR_19->device_id << VAR_2;
 VAR_17->dw1 = FUNC_0(VAR_28);

 if (VAR_23) {
  VAR_29 = ((sizeof(struct ssp_tmf_iu) +
   sizeof(struct ssp_frame_hdr)+3)/4) <<
   VAR_0;
 } else {
  VAR_29 = ((sizeof(struct ssp_command_iu) +
   sizeof(struct ssp_frame_hdr)+3)/4) <<
   VAR_0;
 }

 VAR_29 |= (VAR_13/4) << VAR_6;

 VAR_17->transfer_tags = FUNC_0(VAR_15->idx << VAR_4);

 if (VAR_24)
  FUNC_6(VAR_14, VAR_15, VAR_17, VAR_16->scatter,
     VAR_15->n_elem);

 VAR_17->data_transfer_len = FUNC_0(VAR_16->total_xfer_len);
 VAR_17->cmd_table_addr = FUNC_1(FUNC_2(VAR_15));
 VAR_17->sts_buffer_addr = FUNC_1(FUNC_4(VAR_15));

 VAR_26 = FUNC_3(VAR_15) +
  sizeof(struct ssp_frame_hdr);
 if (VAR_16->ssp_task.enable_first_burst) {
  VAR_27 = (1 << 7);
  VAR_29 |= 1 << VAR_3;
 }
 VAR_17->dw2 = FUNC_0(VAR_29);

 FUNC_5(VAR_26, &VAR_16->ssp_task.LUN, 8);
 if (!VAR_23) {
  VAR_26[9] = VAR_27 | VAR_16->ssp_task.task_attr |
    (VAR_16->ssp_task.task_prio << 3);
  FUNC_5(VAR_26 + 12, VAR_16->ssp_task.cmd->cmnd,
    VAR_16->ssp_task.cmd->cmd_len);
 } else {
  VAR_26[10] = VAR_23->tmf;
  switch (VAR_23->tmf) {
  case 129:
  case 128:
   VAR_26[12] =
    (VAR_23->tag_of_task_to_be_managed >> 8) & 0xff;
   VAR_26[13] =
    VAR_23->tag_of_task_to_be_managed & 0xff;
   break;
  default:
   break;
  }
 }
}
