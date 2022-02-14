
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_login_rsp {int flags; } ;
struct iscsi_login_req {int flags; int dlength; } ;
struct iscsi_login {int auth_complete; int rsp_length; int rsp_buf; scalar_t__ first_request; int req_buf; scalar_t__ rsp; scalar_t__ req; } ;
struct iscsi_conn {int param_list; TYPE_2__* tpg; } ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ,int ,struct iscsi_conn*) ;
 int FUNC_2 (int,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_3 (struct iscsi_conn*,struct iscsi_login*) ;
 scalar_t__ FUNC_4 (struct iscsi_conn*,struct iscsi_login*) ;
 int FUNC_5 (struct iscsi_conn*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct iscsi_conn *VAR_10, struct iscsi_login *VAR_11)
{
 int VAR_12;
 u32 VAR_13;
 struct iscsi_login_req *VAR_14;
 struct iscsi_login_rsp *VAR_15;

 VAR_14 = (struct iscsi_login_req *) VAR_11->req;
 VAR_15 = (struct iscsi_login_rsp *) VAR_11->rsp;
 VAR_13 = FUNC_6(VAR_14->dlength);

 VAR_12 = FUNC_1(
   VAR_6|VAR_5,
   VAR_7|VAR_8,
   VAR_11->req_buf,
   VAR_13,
   VAR_10);
 if (VAR_12 < 0) {
  FUNC_5(VAR_10, VAR_4,
    VAR_3);
  return -1;
 }

 if (VAR_11->first_request)
  if (FUNC_3(VAR_10, VAR_11) < 0)
   return -1;

 if (FUNC_4(VAR_10, VAR_11) < 0)
  return -1;

 VAR_12 = FUNC_2(
   VAR_6|VAR_5,
   VAR_9,
   VAR_11->rsp_buf,
   &VAR_11->rsp_length,
   VAR_10->param_list,
   VAR_10->tpg->tpg_attrib.login_keys_workaround);
 if (VAR_12 < 0) {
  FUNC_5(VAR_10, VAR_4,
    VAR_3);
  return -1;
 }

 if (!VAR_11->auth_complete &&
      VAR_10->tpg->tpg_attrib.authentication) {
  FUNC_7("Initiator is requesting CSG: 1, has not been"
    " successfully authenticated, and the Target is"
   " enforcing iSCSI Authentication, login failed.\n");
  FUNC_5(VAR_10, VAR_4,
    VAR_2);
  return -1;
 }

 if (!FUNC_0(VAR_10->param_list))
  if ((VAR_14->flags & VAR_0) &&
      (VAR_14->flags & VAR_1))
   VAR_15->flags |= VAR_0 |
         VAR_1;

 return 0;
}
