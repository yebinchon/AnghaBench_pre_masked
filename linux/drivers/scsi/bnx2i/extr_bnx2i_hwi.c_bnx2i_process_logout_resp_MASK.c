
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iscsi_task {TYPE_3__* hdr; } ;
struct iscsi_session {int back_lock; } ;
struct iscsi_logout_rsp {void* t2retain; void* t2wait; void* max_cmdsn; void* exp_cmdsn; int statsn; int itt; scalar_t__ hlength; int flags; int opcode; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {int dummy; } ;
struct cqe {int dummy; } ;
struct bnx2i_logout_response {int itt; int time_to_retain; int time_to_wait; int max_cmd_sn; int exp_cmd_sn; int response; int op_code; } ;
struct TYPE_6__ {int resp_hdr; } ;
struct bnx2i_conn {TYPE_4__* ep; TYPE_2__ gen_pdu; TYPE_1__* cls_conn; } ;
struct TYPE_8__ {int state; } ;
struct TYPE_7__ {int exp_statsn; int itt; } ;
struct TYPE_5__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,int *,int ) ;
 void* FUNC_1 (int ) ;
 struct iscsi_task* FUNC_2 (struct iscsi_conn*,int) ;
 int FUNC_3 (struct iscsi_logout_rsp*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iscsi_session *VAR_2,
         struct bnx2i_conn *VAR_3,
         struct cqe *VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_3->cls_conn->dd_data;
 struct iscsi_task *VAR_6;
 struct bnx2i_logout_response *VAR_7;
 struct iscsi_logout_rsp *VAR_8;

 VAR_7 = (struct bnx2i_logout_response *) VAR_4;
 FUNC_4(&VAR_2->back_lock);
 VAR_6 = FUNC_2(VAR_5,
     VAR_7->itt & VAR_1);
 if (!VAR_6)
  goto done;

 VAR_8 = (struct iscsi_logout_rsp *) &VAR_3->gen_pdu.resp_hdr;
 FUNC_3(VAR_8, 0, sizeof(struct iscsi_hdr));
 VAR_8->opcode = VAR_7->op_code;
 VAR_8->flags = VAR_7->response;
 VAR_8->hlength = 0;

 VAR_8->itt = VAR_6->hdr->itt;
 VAR_8->statsn = VAR_6->hdr->exp_statsn;
 VAR_8->exp_cmdsn = FUNC_1(VAR_7->exp_cmd_sn);
 VAR_8->max_cmdsn = FUNC_1(VAR_7->max_cmd_sn);

 VAR_8->t2wait = FUNC_1(VAR_7->time_to_wait);
 VAR_8->t2retain = FUNC_1(VAR_7->time_to_retain);

 FUNC_0(VAR_5, (struct iscsi_hdr *)VAR_8, ((void*)0), 0);

 VAR_3->ep->state = VAR_0;
done:
 FUNC_5(&VAR_2->back_lock);
 return 0;
}
