
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_text {int flags; int opcode; int exp_statsn; int cmdsn; int itt; int dlength; } ;
struct iscsi_conn {TYPE_2__* sess; TYPE_1__* conn_ops; } ;
struct iscsi_cmd {int immediate_cmd; int targ_xfer_tag; int * text_in_ptr; int data_direction; void* exp_stat_sn; void* cmd_sn; int init_task_tag; int i_state; int iscsi_opcode; } ;
struct TYPE_4__ {int init_task_tag; } ;
struct TYPE_3__ {int MaxXmitDataSegmentLength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct iscsi_cmd*,int ,unsigned char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ,int ,int ) ;
 int FUNC_5 (char*,...) ;

int
FUNC_6(struct iscsi_conn *VAR_8, struct iscsi_cmd *VAR_9,
        struct iscsi_text *VAR_10)
{
 u32 VAR_11 = FUNC_3(VAR_10->dlength);

 if (VAR_11 > VAR_8->conn_ops->MaxXmitDataSegmentLength) {
  FUNC_5("Unable to accept text parameter length: %u"
   "greater than MaxXmitDataSegmentLength %u.\n",
         VAR_11, VAR_8->conn_ops->MaxXmitDataSegmentLength);
  return FUNC_1(VAR_9, VAR_6,
      (unsigned char *)VAR_10);
 }

 if (!(VAR_10->flags & VAR_1) ||
      (VAR_10->flags & VAR_2)) {
  FUNC_5("Multi sequence text commands currently not supported\n");
  return FUNC_1(VAR_9, VAR_5,
     (unsigned char *)VAR_10);
 }

 FUNC_4("Got Text Request: ITT: 0x%08x, CmdSN: 0x%08x,"
  " ExpStatSN: 0x%08x, Length: %u\n", VAR_10->itt, VAR_10->cmdsn,
  VAR_10->exp_statsn, VAR_11);

 VAR_9->iscsi_opcode = VAR_4;
 VAR_9->i_state = VAR_7;
 VAR_9->immediate_cmd = ((VAR_10->opcode & VAR_3) ? 1 : 0);
 VAR_8->sess->init_task_tag = VAR_9->init_task_tag = VAR_10->itt;
 VAR_9->targ_xfer_tag = 0xFFFFFFFF;
 VAR_9->cmd_sn = FUNC_0(VAR_10->cmdsn);
 VAR_9->exp_stat_sn = FUNC_0(VAR_10->exp_statsn);
 VAR_9->data_direction = VAR_0;
 FUNC_2(VAR_9->text_in_ptr);
 VAR_9->text_in_ptr = ((void*)0);

 return 0;
}
