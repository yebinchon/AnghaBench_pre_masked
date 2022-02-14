
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_login_req {int tsih; int cid; int exp_statsn; int itt; int cmdsn; int isid; int max_version; int min_version; int flags; } ;
struct iscsi_login {int leading_connection; int req_buf; void* tsih; void* cid; void* initial_exp_statsn; int init_task_tag; void* cmd_sn; struct iscsi_login_req* isid; int version_max; int version_min; int current_stage; scalar_t__ req; scalar_t__ first_request; } ;
struct iscsi_conn {struct iscsi_login* login; } ;
struct cxgbit_sock {int skb; struct iscsi_conn* conn; } ;
struct cxgbit_lro_pdu_cb {int dlen; int doffset; int hdr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 struct cxgbit_lro_pdu_cb* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct iscsi_conn*,struct iscsi_login*) ;
 int FUNC_5 (struct iscsi_login_req*,int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct cxgbit_sock *VAR_1)
{
 struct iscsi_conn *VAR_2 = VAR_1->conn;
 struct iscsi_login *VAR_3 = VAR_2->login;
 struct cxgbit_lro_pdu_cb *VAR_4 = FUNC_3(VAR_1->skb);
 struct iscsi_login_req *VAR_5;

 VAR_5 = (struct iscsi_login_req *)VAR_3->req;
 FUNC_5(VAR_5, VAR_4->hdr, sizeof(*VAR_5));

 FUNC_7("Got Login Command, Flags 0x%02x, ITT: 0x%08x,"
  " CmdSN: 0x%08x, ExpStatSN: 0x%08x, CID: %hu, Length: %u\n",
  VAR_5->flags, VAR_5->itt, VAR_5->cmdsn,
  VAR_5->exp_statsn, VAR_5->cid, VAR_4->dlen);




 if (VAR_3->first_request) {
  VAR_5 = (struct iscsi_login_req *)VAR_3->req;
  VAR_3->leading_connection = (!VAR_5->tsih) ? 1 : 0;
  VAR_3->current_stage = FUNC_0(
    VAR_5->flags);
  VAR_3->version_min = VAR_5->min_version;
  VAR_3->version_max = VAR_5->max_version;
  FUNC_5(VAR_3->isid, VAR_5->isid, 6);
  VAR_3->cmd_sn = FUNC_2(VAR_5->cmdsn);
  VAR_3->init_task_tag = VAR_5->itt;
  VAR_3->initial_exp_statsn = FUNC_2(VAR_5->exp_statsn);
  VAR_3->cid = FUNC_1(VAR_5->cid);
  VAR_3->tsih = FUNC_1(VAR_5->tsih);
 }

 if (FUNC_4(VAR_2, VAR_3) < 0)
  return -1;

 FUNC_6(VAR_3->req_buf, 0, VAR_0);
 FUNC_8(VAR_1->skb, VAR_4->doffset, VAR_3->req_buf, VAR_4->dlen);

 return 0;
}
