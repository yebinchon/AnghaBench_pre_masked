
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_conn {TYPE_3__* conn_transport; int cid; TYPE_2__* sess; int stat_sn; } ;
struct iscsi_cmd {int targ_xfer_tag; int logout_cid; scalar_t__ stat_sn; int init_task_tag; scalar_t__ pdu; void* iscsi_opcode; } ;
struct iscsi_async {void* param3; void* param2; void* param1; int async_event; void* max_cmdsn; void* exp_cmdsn; void* statsn; int * rsvd4; int flags; void* opcode; } ;
struct TYPE_6__ {int (* iscsit_xmit_pdu ) (struct iscsi_conn*,struct iscsi_cmd*,int *,int *,int ) ;} ;
struct TYPE_5__ {TYPE_1__* sess_ops; int max_cmd_sn; scalar_t__ exp_cmd_sn; } ;
struct TYPE_4__ {int DefaultTime2Retain; int DefaultTime2Wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,scalar_t__,int ,int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct iscsi_conn*,struct iscsi_cmd*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_6(
 struct iscsi_cmd *VAR_4,
 struct iscsi_conn *VAR_5)
{
 struct iscsi_async *VAR_6;

 VAR_4->iscsi_opcode = VAR_2;

 VAR_6 = (struct iscsi_async *) VAR_4->pdu;
 VAR_6->opcode = VAR_2;
 VAR_6->flags = VAR_1;
 VAR_4->init_task_tag = VAR_3;
 VAR_4->targ_xfer_tag = 0xFFFFFFFF;
 FUNC_4(0xFFFFFFFFFFFFFFFFULL, &VAR_6->rsvd4[0]);
 VAR_4->stat_sn = VAR_5->stat_sn++;
 VAR_6->statsn = FUNC_2(VAR_4->stat_sn);
 VAR_6->exp_cmdsn = FUNC_2(VAR_5->sess->exp_cmd_sn);
 VAR_6->max_cmdsn = FUNC_2((u32) FUNC_0(&VAR_5->sess->max_cmd_sn));
 VAR_6->async_event = VAR_0;
 VAR_6->param1 = FUNC_1(VAR_4->logout_cid);
 VAR_6->param2 = FUNC_1(VAR_5->sess->sess_ops->DefaultTime2Wait);
 VAR_6->param3 = FUNC_1(VAR_5->sess->sess_ops->DefaultTime2Retain);

 FUNC_3("Sending Connection Dropped Async Message StatSN:"
  " 0x%08x, for CID: %hu on CID: %hu\n", VAR_4->stat_sn,
   VAR_4->logout_cid, VAR_5->cid);

 return VAR_5->conn_transport->iscsit_xmit_pdu(VAR_5, VAR_4, ((void*)0), ((void*)0), 0);
}
