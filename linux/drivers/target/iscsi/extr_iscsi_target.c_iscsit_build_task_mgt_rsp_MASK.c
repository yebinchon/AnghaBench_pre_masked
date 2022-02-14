
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct se_tmr_req {int dummy; } ;
struct iscsi_tm_rsp {int response; void* max_cmdsn; void* exp_cmdsn; void* statsn; int itt; int flags; int opcode; } ;
struct iscsi_conn {int cid; TYPE_2__* sess; int stat_sn; } ;
struct TYPE_3__ {struct se_tmr_req* se_tmr_req; } ;
struct iscsi_cmd {scalar_t__ stat_sn; int init_task_tag; TYPE_1__ se_cmd; } ;
struct TYPE_4__ {int max_cmd_sn; scalar_t__ exp_cmd_sn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct se_tmr_req*) ;
 int FUNC_3 (struct iscsi_cmd*,TYPE_2__*) ;
 int FUNC_4 (char*,int ,scalar_t__,int ,int ) ;

void
FUNC_5(struct iscsi_cmd *VAR_2, struct iscsi_conn *VAR_3,
     struct iscsi_tm_rsp *VAR_4)
{
 struct se_tmr_req *VAR_5 = VAR_2->se_cmd.se_tmr_req;

 VAR_4->opcode = VAR_1;
 VAR_4->flags = VAR_0;
 VAR_4->response = FUNC_2(VAR_5);
 VAR_4->itt = VAR_2->init_task_tag;
 VAR_2->stat_sn = VAR_3->stat_sn++;
 VAR_4->statsn = FUNC_1(VAR_2->stat_sn);

 FUNC_3(VAR_2, VAR_3->sess);
 VAR_4->exp_cmdsn = FUNC_1(VAR_3->sess->exp_cmd_sn);
 VAR_4->max_cmdsn = FUNC_1((u32) FUNC_0(&VAR_3->sess->max_cmd_sn));

 FUNC_4("Built Task Management Response ITT: 0x%08x,"
  " StatSN: 0x%08x, Response: 0x%02x, CID: %hu\n",
  VAR_2->init_task_tag, VAR_2->stat_sn, VAR_4->response, VAR_3->cid);
}
