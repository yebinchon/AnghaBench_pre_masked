
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_session {TYPE_1__* sess_ops; } ;
struct iscsi_conn {scalar_t__ cid; struct iscsi_session* sess; } ;
struct iscsi_cmd {scalar_t__ logout_cid; int i_state; int logout_response; } ;
struct TYPE_2__ {int ErrorRecoveryLevel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,...) ;

int FUNC_3(struct iscsi_cmd *VAR_2, struct iscsi_conn *VAR_3)
{
 struct iscsi_session *VAR_4 = VAR_3->sess;

 FUNC_1("Received explicit REMOVECONNFORRECOVERY logout for"
  " CID: %hu on CID: %hu.\n", VAR_2->logout_cid, VAR_3->cid);

 if (VAR_4->sess_ops->ErrorRecoveryLevel != 2) {
  FUNC_2("Received Logout Request REMOVECONNFORRECOVERY"
   " while ERL!=2.\n");
  VAR_2->logout_response = VAR_1;
  FUNC_0(VAR_2, VAR_3, VAR_2->i_state);
  return 0;
 }

 if (VAR_3->cid == VAR_2->logout_cid) {
  FUNC_2("Received Logout Request REMOVECONNFORRECOVERY"
   " with CID: %hu on CID: %hu, implementation error.\n",
    VAR_2->logout_cid, VAR_3->cid);
  VAR_2->logout_response = VAR_0;
  FUNC_0(VAR_2, VAR_3, VAR_2->i_state);
  return 0;
 }

 FUNC_0(VAR_2, VAR_3, VAR_2->i_state);

 return 0;
}
