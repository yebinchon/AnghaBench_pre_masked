
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_param {int value; } ;
struct iscsi_login_rsp {int flags; } ;
struct iscsi_login_req {int flags; int dlength; } ;
struct iscsi_login {int current_stage; scalar_t__ auth_complete; int rsp_length; int rsp_buf; scalar_t__ first_request; int req_buf; scalar_t__ rsp; scalar_t__ req; } ;
struct iscsi_conn {TYPE_2__* tpg; int param_list; } ;
struct TYPE_3__ {scalar_t__ authentication; int login_keys_workaround; } ;
struct TYPE_4__ {TYPE_1__ tpg_attrib; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ,int ,struct iscsi_conn*) ;
 int FUNC_2 (int,int ,int ,int *,int ,int ) ;
 struct iscsi_param* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct iscsi_conn*,struct iscsi_login*) ;
 int FUNC_5 (struct iscsi_conn*,struct iscsi_login*) ;
 int FUNC_6 (struct iscsi_conn*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(
 struct iscsi_conn *VAR_12,
 struct iscsi_login *VAR_13)
{
 int VAR_14;
 u32 VAR_15;
 struct iscsi_param *VAR_16;
 struct iscsi_login_req *VAR_17;
 struct iscsi_login_rsp *VAR_18;

 VAR_17 = (struct iscsi_login_req *) VAR_13->req;
 VAR_18 = (struct iscsi_login_rsp *) VAR_13->rsp;
 VAR_15 = FUNC_7(VAR_17->dlength);

 VAR_16 = FUNC_3(VAR_0, VAR_12->param_list);
 if (!VAR_16)
  return -1;

 VAR_14 = FUNC_1(
   VAR_8|VAR_7,
   VAR_9|VAR_10,
   VAR_13->req_buf,
   VAR_15,
   VAR_12);
 if (VAR_14 < 0)
  return -1;

 if (VAR_14 > 0) {
  if (VAR_13->auth_complete) {
   FUNC_8("Initiator has already been"
    " successfully authenticated, but is still"
    " sending %s keys.\n", VAR_16->value);
   FUNC_6(VAR_12, VAR_5,
     VAR_4);
   return -1;
  }

  goto do_auth;
 } else if (!VAR_15) {
  FUNC_8("Initiator sent zero length security payload,"
         " login failed\n");
  FUNC_6(VAR_12, VAR_5,
        VAR_3);
  return -1;
 }

 if (VAR_13->first_request)
  if (FUNC_4(VAR_12, VAR_13) < 0)
   return -1;

 VAR_14 = FUNC_2(
   VAR_8|VAR_7,
   VAR_11,
   VAR_13->rsp_buf,
   &VAR_13->rsp_length,
   VAR_12->param_list,
   VAR_12->tpg->tpg_attrib.login_keys_workaround);
 if (VAR_14 < 0)
  return -1;

 if (!FUNC_0(VAR_12->param_list)) {
  if (VAR_12->tpg->tpg_attrib.authentication &&
      !FUNC_9(VAR_16->value, VAR_6, 4)) {
   FUNC_8("Initiator sent AuthMethod=None but"
    " Target is enforcing iSCSI Authentication,"
     " login failed.\n");
   FUNC_6(VAR_12, VAR_5,
     VAR_3);
   return -1;
  }

  if (VAR_12->tpg->tpg_attrib.authentication &&
      !VAR_13->auth_complete)
   return 0;

  if (FUNC_9(VAR_16->value, VAR_6, 4) && !VAR_13->auth_complete)
   return 0;

  if ((VAR_17->flags & VAR_1) &&
      (VAR_17->flags & VAR_2)) {
   VAR_18->flags |= VAR_1 |
         VAR_2;
   VAR_13->current_stage = 1;
  }
 }

 return 0;
do_auth:
 return FUNC_5(VAR_12, VAR_13);
}
