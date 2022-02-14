
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_login_req {int tsih; int cid; int exp_statsn; int itt; int cmdsn; int isid; int max_version; int min_version; int flags; int dlength; } ;
struct iscsi_login {int leading_connection; scalar_t__ req_buf; void* tsih; void* cid; void* initial_exp_statsn; int init_task_tag; void* cmd_sn; int isid; int version_max; int version_min; int current_stage; scalar_t__ req; scalar_t__ first_request; } ;
struct iscsi_conn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct iscsi_conn*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct iscsi_conn*,struct iscsi_login*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int ,int ,int ,int ,int) ;

int FUNC_9(struct iscsi_conn *VAR_2, struct iscsi_login *VAR_3)
{
 struct iscsi_login_req *VAR_4;
 u32 VAR_5 = 0, VAR_6;

 if (FUNC_3(VAR_2, VAR_3->req, VAR_0) < 0)
  return -1;

 VAR_4 = (struct iscsi_login_req *)VAR_3->req;
 VAR_6 = FUNC_7(VAR_4->dlength);
 VAR_5 = ((-VAR_6) & 3);

 FUNC_8("Got Login Command, Flags 0x%02x, ITT: 0x%08x,"
  " CmdSN: 0x%08x, ExpStatSN: 0x%08x, CID: %hu, Length: %u\n",
  VAR_4->flags, VAR_4->itt, VAR_4->cmdsn,
  VAR_4->exp_statsn, VAR_4->cid, VAR_6);




 if (VAR_3->first_request) {
  VAR_4 = (struct iscsi_login_req *)VAR_3->req;
  VAR_3->leading_connection = (!VAR_4->tsih) ? 1 : 0;
  VAR_3->current_stage = FUNC_0(VAR_4->flags);
  VAR_3->version_min = VAR_4->min_version;
  VAR_3->version_max = VAR_4->max_version;
  FUNC_5(VAR_3->isid, VAR_4->isid, 6);
  VAR_3->cmd_sn = FUNC_2(VAR_4->cmdsn);
  VAR_3->init_task_tag = VAR_4->itt;
  VAR_3->initial_exp_statsn = FUNC_2(VAR_4->exp_statsn);
  VAR_3->cid = FUNC_1(VAR_4->cid);
  VAR_3->tsih = FUNC_1(VAR_4->tsih);
 }

 if (FUNC_4(VAR_2, VAR_3) < 0)
  return -1;

 FUNC_6(VAR_3->req_buf, 0, VAR_1);
 if (FUNC_3(VAR_2, VAR_3->req_buf,
    VAR_6 + VAR_5) < 0)
  return -1;

 return 0;
}
