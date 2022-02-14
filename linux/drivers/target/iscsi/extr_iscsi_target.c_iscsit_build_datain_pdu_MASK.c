
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scsi_lun {int dummy; } ;
struct iscsi_datain {int flags; int data_sn; int offset; int length; } ;
struct iscsi_data_rsp {int flags; void* offset; void* datasn; void* statsn; void* max_cmdsn; void* exp_cmdsn; void* ttt; int itt; int lun; int dlength; void* residual_count; int opcode; } ;
struct iscsi_conn {int cid; TYPE_2__* sess; } ;
struct TYPE_3__ {int se_cmd_flags; int residual_count; int orig_fe_lun; } ;
struct iscsi_cmd {int targ_xfer_tag; int stat_sn; int init_task_tag; TYPE_1__ se_cmd; } ;
struct TYPE_4__ {int exp_cmd_sn; int max_cmd_sn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct scsi_lun*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int,int *) ;

void
FUNC_7(struct iscsi_cmd *VAR_7, struct iscsi_conn *VAR_8,
   struct iscsi_datain *VAR_9, struct iscsi_data_rsp *VAR_10,
   bool VAR_11)
{
 VAR_10->opcode = VAR_4;
 VAR_10->flags = VAR_9->flags;
 if (VAR_10->flags & VAR_2) {
  if (VAR_7->se_cmd.se_cmd_flags & VAR_5) {
   VAR_10->flags |= VAR_1;
   VAR_10->residual_count = FUNC_1(VAR_7->se_cmd.residual_count);
  } else if (VAR_7->se_cmd.se_cmd_flags & VAR_6) {
   VAR_10->flags |= VAR_3;
   VAR_10->residual_count = FUNC_1(VAR_7->se_cmd.residual_count);
  }
 }
 FUNC_2(VAR_10->dlength, VAR_9->length);
 if (VAR_10->flags & VAR_0)
  FUNC_3(VAR_7->se_cmd.orig_fe_lun,
    (struct scsi_lun *)&VAR_10->lun);
 else
  FUNC_6(0xFFFFFFFFFFFFFFFFULL, &VAR_10->lun);

 VAR_10->itt = VAR_7->init_task_tag;

 if (VAR_10->flags & VAR_0)
  VAR_10->ttt = FUNC_1(VAR_7->targ_xfer_tag);
 else
  VAR_10->ttt = FUNC_1(0xFFFFFFFF);
 if (VAR_11)
  VAR_10->statsn = FUNC_1(VAR_7->stat_sn);
 else
  VAR_10->statsn = FUNC_1(0xFFFFFFFF);

 VAR_10->exp_cmdsn = FUNC_1(VAR_8->sess->exp_cmd_sn);
 VAR_10->max_cmdsn = FUNC_1((u32) FUNC_0(&VAR_8->sess->max_cmd_sn));
 VAR_10->datasn = FUNC_1(VAR_9->data_sn);
 VAR_10->offset = FUNC_1(VAR_9->offset);

 FUNC_5("Built DataIN ITT: 0x%08x, StatSN: 0x%08x,"
  " DataSN: 0x%08x, Offset: %u, Length: %u, CID: %hu\n",
  VAR_7->init_task_tag, FUNC_4(VAR_10->statsn), FUNC_4(VAR_10->datasn),
  FUNC_4(VAR_10->offset), VAR_9->length, VAR_8->cid);
}
