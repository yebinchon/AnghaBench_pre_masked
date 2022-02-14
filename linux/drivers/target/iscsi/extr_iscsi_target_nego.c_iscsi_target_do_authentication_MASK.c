
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_param {int value; } ;
struct iscsi_login_rsp {int flags; } ;
struct iscsi_login_req {int flags; int dlength; } ;
struct iscsi_login {int auth_complete; int current_stage; int rsp_length; int rsp_buf; int req_buf; scalar_t__ rsp; scalar_t__ req; } ;
struct iscsi_conn {int param_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct iscsi_param* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iscsi_conn*,int ,int ,int ,int *,int ) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_login*) ;
 int FUNC_3 (struct iscsi_conn*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int FUNC_7(
 struct iscsi_conn *VAR_7,
 struct iscsi_login *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 struct iscsi_param *VAR_11;
 struct iscsi_login_req *VAR_12;
 struct iscsi_login_rsp *VAR_13;

 VAR_12 = (struct iscsi_login_req *) VAR_8->req;
 VAR_13 = (struct iscsi_login_rsp *) VAR_8->rsp;
 VAR_10 = FUNC_4(VAR_12->dlength);

 VAR_11 = FUNC_0(VAR_0, VAR_7->param_list);
 if (!VAR_11)
  return -1;

 VAR_9 = FUNC_1(
   VAR_7,
   VAR_8->req_buf,
   VAR_8->rsp_buf,
   VAR_10,
   &VAR_8->rsp_length,
   VAR_11->value);
 switch (VAR_9) {
 case 0:
  FUNC_5("Received OK response"
  " from LIO Authentication, continuing.\n");
  break;
 case 1:
  FUNC_5("iSCSI security negotiation"
   " completed successfully.\n");
  VAR_8->auth_complete = 1;
  if ((VAR_12->flags & VAR_1) &&
      (VAR_12->flags & VAR_2)) {
   VAR_13->flags |= (VAR_1 |
          VAR_2);
   VAR_8->current_stage = 1;
  }
  return FUNC_2(
    VAR_7, VAR_8);
 case 2:
  FUNC_6("Security negotiation"
   " failed.\n");
  FUNC_3(VAR_7, VAR_5,
    VAR_3);
  return -1;
 default:
  FUNC_6("Received unknown error %d from LIO"
    " Authentication\n", VAR_9);
  FUNC_3(VAR_7, VAR_6,
    VAR_4);
  return -1;
 }

 return 0;
}
