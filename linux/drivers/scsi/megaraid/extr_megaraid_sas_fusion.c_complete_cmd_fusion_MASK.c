
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ low; scalar_t__ high; } ;
union desc_value {int word; TYPE_1__ u; } ;
union MPI2_REPLY_DESCRIPTORS_UNION {int Words; } ;
typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_10__ {int Status; int * ptr; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_5__ SCp; } ;
struct megasas_irq_context {int irq_poll_scheduled; int irq_line_enable; int irqpoll; } ;
struct megasas_instance {int threshold_reply_count; int * reply_post_host_index_addr; scalar_t__ msix_combined; struct megasas_cmd** cmd_list; int ldio_outstanding; int ldio_threshold; int fw_outstanding; TYPE_4__* pdev; int adprecovery; struct fusion_context* ctrl_context; } ;
struct megasas_cmd_fusion {int* sense; size_t pd_r1_lb; size_t sync_cmd_idx; int r1_alt_dev_handle; struct scsi_cmnd* scmd; int done; scalar_t__ io_request; } ;
struct megasas_cmd {int flags; } ;
struct fusion_context {int* last_reply_idx; int reply_q_depth; union MPI2_REPLY_DESCRIPTORS_UNION** reply_frames_desc; struct LD_LOAD_BALANCE_INFO* load_balance_info; struct megasas_cmd_fusion** cmd_list; } ;
struct MR_TASK_MANAGE_REQUEST {int TmRequest; } ;
struct MPI2_SCSI_TASK_MANAGE_REQUEST {int TaskMID; int TaskType; } ;
struct MPI2_SCSI_IO_SUCCESS_REPLY_DESCRIPTOR {int ReplyFlags; int SMID; } ;
struct TYPE_7__ {int status; int ex_status; } ;
struct TYPE_8__ {TYPE_2__ raid_context; } ;
struct MPI2_RAID_SCSI_IO_REQUEST {size_t DataLength; int Function; TYPE_3__ RaidContext; } ;
struct LD_LOAD_BALANCE_INFO {int * scsi_pending_cmds; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (size_t) ;
 int FUNC_10 (struct fusion_context*,struct scsi_cmnd*,int,int,int ,int*) ;
 int FUNC_11 (struct megasas_instance*) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (struct megasas_instance*,struct megasas_cmd*,int ) ;
 int FUNC_14 (struct megasas_instance*,struct megasas_cmd_fusion*) ;
 int FUNC_15 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_16 (struct megasas_instance*,struct megasas_cmd_fusion*) ;
 int FUNC_17 (struct scsi_cmnd*) ;
 int FUNC_18 (struct scsi_cmnd*) ;
 int FUNC_19 () ;
 int FUNC_20 (size_t,int ) ;

__attribute__((used)) static int
FUNC_21(struct megasas_instance *VAR_12, u32 VAR_13,
      struct megasas_irq_context *VAR_14)
{
 union MPI2_REPLY_DESCRIPTORS_UNION *VAR_15;
 struct MPI2_SCSI_IO_SUCCESS_REPLY_DESCRIPTOR *VAR_16;
 struct MPI2_RAID_SCSI_IO_REQUEST *VAR_17;
 struct fusion_context *VAR_18;
 struct megasas_cmd *VAR_19;
 struct megasas_cmd_fusion *VAR_20;
 u16 VAR_21, VAR_22;
 u8 VAR_23, *VAR_24, VAR_25, VAR_26;
 u32 VAR_27, VAR_28;
 union desc_value VAR_29;
 struct LD_LOAD_BALANCE_INFO *VAR_30;
 int VAR_31 = 0;
 struct scsi_cmnd *VAR_32 = ((void*)0);
 struct MR_TASK_MANAGE_REQUEST *VAR_33;
 struct MPI2_SCSI_TASK_MANAGE_REQUEST *VAR_34;

 VAR_18 = VAR_12->ctrl_context;

 if (FUNC_2(&VAR_12->adprecovery) == VAR_4)
  return VAR_2;

 VAR_15 = VAR_18->reply_frames_desc[VAR_13] +
    VAR_18->last_reply_idx[VAR_13];

 VAR_16 = (struct MPI2_SCSI_IO_SUCCESS_REPLY_DESCRIPTOR *)VAR_15;

 VAR_29.word = VAR_15->Words;

 VAR_23 = VAR_16->ReplyFlags &
  VAR_6;

 if (VAR_23 == VAR_7)
  return VAR_3;

 VAR_22 = 0;

 while (VAR_29.u.low != FUNC_4(VAR_10) &&
        VAR_29.u.high != FUNC_4(VAR_10)) {

  VAR_21 = FUNC_8(VAR_16->SMID);
  VAR_20 = VAR_18->cmd_list[VAR_21 - 1];
  VAR_17 = (struct MPI2_RAID_SCSI_IO_REQUEST *)
      VAR_20->io_request;

  VAR_32 = VAR_20->scmd;
  VAR_25 = VAR_17->RaidContext.raid_context.status;
  VAR_26 = VAR_17->RaidContext.raid_context.ex_status;
  VAR_24 = VAR_20->sense;
  VAR_28 = VAR_17->DataLength;

  switch (VAR_17->Function) {
  case 128:
   VAR_33 = (struct MR_TASK_MANAGE_REQUEST *)
      VAR_20->io_request;
   VAR_34 = (struct MPI2_SCSI_TASK_MANAGE_REQUEST *)
      &VAR_33->TmRequest;
   FUNC_6(&VAR_12->pdev->dev, "TM completion:"
    "type: 0x%x TaskMID: 0x%x\n",
    VAR_34->TaskType, VAR_34->TaskMID);
   FUNC_3(&VAR_20->done);
   break;
  case 129:

   if (VAR_18->load_balance_info &&
       (VAR_20->scmd->SCp.Status &
       VAR_5)) {
    VAR_27 = FUNC_0(VAR_32);
    VAR_30 = &VAR_18->load_balance_info[VAR_27];
    FUNC_1(&VAR_30->scsi_pending_cmds[VAR_20->pd_r1_lb]);
    VAR_20->scmd->SCp.Status &= ~VAR_5;
   }

  case 131:
   FUNC_1(&VAR_12->fw_outstanding);
   if (VAR_20->r1_alt_dev_handle == VAR_8) {
    FUNC_10(VAR_18, VAR_32, VAR_25,
            VAR_26, FUNC_9(VAR_28),
            VAR_24);
    if (VAR_12->ldio_threshold &&
        (FUNC_12(VAR_32) == VAR_9))
     FUNC_1(&VAR_12->ldio_outstanding);
    VAR_32->SCp.ptr = ((void*)0);
    FUNC_16(VAR_12, VAR_20);
    FUNC_17(VAR_32);
    VAR_32->scsi_done(VAR_32);
   } else
    FUNC_14(VAR_12, VAR_20);
   break;
  case 130:
   VAR_19 = VAR_12->cmd_list[VAR_20->sync_cmd_idx];



   if (VAR_19->flags & VAR_1) {
    VAR_19->flags &= ~VAR_1;
    FUNC_15(VAR_12, VAR_19);
   } else
    FUNC_13(VAR_12, VAR_19, VAR_0);
   break;
  }

  VAR_18->last_reply_idx[VAR_13]++;
  if (VAR_18->last_reply_idx[VAR_13] >=
      VAR_18->reply_q_depth)
   VAR_18->last_reply_idx[VAR_13] = 0;

  VAR_15->Words = FUNC_5(VAR_11);
  VAR_22++;
  VAR_31++;


  if (!VAR_18->last_reply_idx[VAR_13])
   VAR_15 = VAR_18->reply_frames_desc[VAR_13];
  else
   VAR_15++;

  VAR_16 =
    (struct MPI2_SCSI_IO_SUCCESS_REPLY_DESCRIPTOR *)VAR_15;

  VAR_29.word = VAR_15->Words;

  VAR_23 = VAR_16->ReplyFlags &
   VAR_6;

  if (VAR_23 == VAR_7)
   break;





  if (VAR_31 >= VAR_12->threshold_reply_count) {
   if (VAR_12->msix_combined)
    FUNC_20(((VAR_13 & 0x7) << 24) |
     VAR_18->last_reply_idx[VAR_13],
     VAR_12->reply_post_host_index_addr[VAR_13/8]);
   else
    FUNC_20((VAR_13 << 24) |
     VAR_18->last_reply_idx[VAR_13],
     VAR_12->reply_post_host_index_addr[0]);
   VAR_31 = 0;
   if (VAR_14) {
    if (!VAR_14->irq_poll_scheduled) {
     VAR_14->irq_poll_scheduled = 1;
     VAR_14->irq_line_enable = 1;
     FUNC_7(&VAR_14->irqpoll);
    }
    return VAR_22;
   }
  }
 }

 if (VAR_22) {
  FUNC_19();
  if (VAR_12->msix_combined)
   FUNC_20(((VAR_13 & 0x7) << 24) |
    VAR_18->last_reply_idx[VAR_13],
    VAR_12->reply_post_host_index_addr[VAR_13/8]);
  else
   FUNC_20((VAR_13 << 24) |
    VAR_18->last_reply_idx[VAR_13],
    VAR_12->reply_post_host_index_addr[0]);
  FUNC_11(VAR_12);
 }
 return VAR_22;
}
