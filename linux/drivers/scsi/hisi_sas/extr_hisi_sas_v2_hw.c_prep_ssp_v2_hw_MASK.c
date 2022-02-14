
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ssp_frame_hdr {int dummy; } ;
struct ssp_command_iu {int dummy; } ;
struct scsi_cmnd {int sc_data_direction; int cmd_len; int * cmnd; } ;
struct sas_ssp_task {int task_attr; int task_prio; struct scsi_cmnd* cmd; int LUN; } ;
struct sas_task {int total_xfer_len; struct sas_ssp_task ssp_task; int scatter; struct domain_device* dev; } ;
struct hisi_sas_tmf_task {int tmf; int tag_of_task_to_be_managed; } ;
struct hisi_sas_slot {int idx; int n_elem; struct hisi_sas_tmf_task* tmf; struct hisi_sas_port* port; struct hisi_sas_cmd_hdr* cmd_hdr; struct sas_task* task; } ;
struct hisi_sas_port {int id; } ;
struct hisi_sas_device {int device_id; } ;
struct hisi_sas_cmd_hdr {void* sts_buffer_addr; void* cmd_table_addr; void* data_transfer_len; void* transfer_tags; void* dw2; void* dw1; void* dw0; } ;
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
 int VAR_14 ;
 int VAR_15 ;


 int VAR_16 ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct hisi_sas_slot*) ;
 int* FUNC_3 (struct hisi_sas_slot*) ;
 int FUNC_4 (struct hisi_sas_slot*) ;
 int FUNC_5 (int*,int *,int) ;
 int FUNC_6 (struct hisi_hba*,struct hisi_sas_slot*,struct hisi_sas_cmd_hdr*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct hisi_hba *VAR_17,
     struct hisi_sas_slot *VAR_18)
{
 struct sas_task *VAR_19 = VAR_18->task;
 struct hisi_sas_cmd_hdr *VAR_20 = VAR_18->cmd_hdr;
 struct domain_device *VAR_21 = VAR_19->dev;
 struct hisi_sas_device *VAR_22 = VAR_21->lldd_dev;
 struct hisi_sas_port *VAR_23 = VAR_18->port;
 struct sas_ssp_task *VAR_24 = &VAR_19->ssp_task;
 struct scsi_cmnd *VAR_25 = VAR_24->cmd;
 struct hisi_sas_tmf_task *VAR_26 = VAR_18->tmf;
 int VAR_27 = 0, VAR_28 = !!VAR_26;
 u8 *VAR_29;
 u32 VAR_30 = 0, VAR_31 = 0;

 VAR_20->dw0 = FUNC_0((1 << VAR_9) |
          (2 << VAR_11) |
          (VAR_23->id << VAR_7) |
          (VAR_28 << VAR_8) |
          (1 << VAR_1));

 VAR_30 = 1 << VAR_12;
 if (VAR_26) {
  VAR_30 |= 2 << VAR_5;
  VAR_30 |= VAR_13 << VAR_4;
 } else {
  VAR_30 |= 1 << VAR_5;
  switch (VAR_25->sc_data_direction) {
  case 130:
   VAR_27 = 1;
   VAR_30 |= VAR_14 << VAR_4;
   break;
  case 131:
   VAR_27 = 1;
   VAR_30 |= VAR_15 << VAR_4;
   break;
  default:
   VAR_30 &= ~VAR_3;
  }
 }


 VAR_30 |= VAR_22->device_id << VAR_2;
 VAR_20->dw1 = FUNC_0(VAR_30);

 VAR_31 = (((sizeof(struct ssp_command_iu) + sizeof(struct ssp_frame_hdr)
       + 3) / 4) << VAR_0) |
       ((VAR_16 / 4) << VAR_6) |
       (2 << VAR_10);
 VAR_20->dw2 = FUNC_0(VAR_31);

 VAR_20->transfer_tags = FUNC_0(VAR_18->idx);

 if (VAR_27)
  FUNC_6(VAR_17, VAR_18, VAR_20, VAR_19->scatter,
     VAR_18->n_elem);

 VAR_20->data_transfer_len = FUNC_0(VAR_19->total_xfer_len);
 VAR_20->cmd_table_addr = FUNC_1(FUNC_2(VAR_18));
 VAR_20->sts_buffer_addr = FUNC_1(FUNC_4(VAR_18));

 VAR_29 = FUNC_3(VAR_18) +
  sizeof(struct ssp_frame_hdr);

 FUNC_5(VAR_29, &VAR_19->ssp_task.LUN, 8);
 if (!VAR_26) {
  VAR_29[9] = VAR_19->ssp_task.task_attr |
    (VAR_19->ssp_task.task_prio << 3);
  FUNC_5(VAR_29 + 12, VAR_19->ssp_task.cmd->cmnd,
    VAR_19->ssp_task.cmd->cmd_len);
 } else {
  VAR_29[10] = VAR_26->tmf;
  switch (VAR_26->tmf) {
  case 129:
  case 128:
   VAR_29[12] =
    (VAR_26->tag_of_task_to_be_managed >> 8) & 0xff;
   VAR_29[13] =
    VAR_26->tag_of_task_to_be_managed & 0xff;
   break;
  default:
   break;
  }
 }
}
