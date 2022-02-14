
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_scsi_rsp {void* max_cmdsn; void* exp_cmdsn; void* statsn; int itt; int cmd_status; int response; void* residual_count; int flags; int opcode; } ;
struct iscsi_conn {int cid; TYPE_2__* sess; int stat_sn; } ;
struct TYPE_3__ {int se_cmd_flags; int scsi_status; scalar_t__ residual_count; } ;
struct iscsi_cmd {TYPE_1__ se_cmd; scalar_t__ stat_sn; int init_task_tag; int iscsi_response; } ;
struct TYPE_4__ {int max_cmd_sn; scalar_t__ exp_cmd_sn; int rsp_pdus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct iscsi_cmd*,TYPE_2__*) ;
 int FUNC_4 (struct iscsi_scsi_rsp*,int ,int ) ;
 int FUNC_5 (char*,int ,scalar_t__,int ,int ,int ) ;

void FUNC_6(struct iscsi_cmd *VAR_7, struct iscsi_conn *VAR_8,
   bool VAR_9, struct iscsi_scsi_rsp *VAR_10)
{
 if (VAR_9)
  VAR_7->stat_sn = VAR_8->stat_sn++;

 FUNC_0(&VAR_8->sess->rsp_pdus);

 FUNC_4(VAR_10, 0, VAR_3);
 VAR_10->opcode = VAR_4;
 VAR_10->flags |= VAR_0;
 if (VAR_7->se_cmd.se_cmd_flags & VAR_5) {
  VAR_10->flags |= VAR_1;
  VAR_10->residual_count = FUNC_2(VAR_7->se_cmd.residual_count);
 } else if (VAR_7->se_cmd.se_cmd_flags & VAR_6) {
  VAR_10->flags |= VAR_2;
  VAR_10->residual_count = FUNC_2(VAR_7->se_cmd.residual_count);
 }
 VAR_10->response = VAR_7->iscsi_response;
 VAR_10->cmd_status = VAR_7->se_cmd.scsi_status;
 VAR_10->itt = VAR_7->init_task_tag;
 VAR_10->statsn = FUNC_2(VAR_7->stat_sn);

 FUNC_3(VAR_7, VAR_8->sess);
 VAR_10->exp_cmdsn = FUNC_2(VAR_8->sess->exp_cmd_sn);
 VAR_10->max_cmdsn = FUNC_2((u32) FUNC_1(&VAR_8->sess->max_cmd_sn));

 FUNC_5("Built SCSI Response, ITT: 0x%08x, StatSN: 0x%08x,"
  " Response: 0x%02x, SAM Status: 0x%02x, CID: %hu\n",
  VAR_7->init_task_tag, VAR_7->stat_sn, VAR_7->se_cmd.scsi_status,
  VAR_7->se_cmd.scsi_status, VAR_8->cid);
}
