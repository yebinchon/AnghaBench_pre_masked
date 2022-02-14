
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct iscsi_conn {int state_lock; int conn_logout_reason; int conn_logout_remove; int conn_state; int cid; struct iscsi_session* sess; } ;
struct iscsi_cmd {int i_state; int logout_response; int logout_cid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 int FUNC_2 (struct iscsi_conn*) ;
 struct iscsi_conn* FUNC_3 (struct iscsi_session*,int ) ;
 int FUNC_4 (struct iscsi_conn*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct iscsi_cmd *VAR_3, struct iscsi_conn *VAR_4)
{
 struct iscsi_conn *VAR_5;
 struct iscsi_session *VAR_6 = VAR_4->sess;

 FUNC_5("Received logout request CLOSECONNECTION for CID:"
  " %hu on CID: %hu.\n", VAR_3->logout_cid, VAR_4->cid);





 if (VAR_4->cid == VAR_3->logout_cid) {
  FUNC_6(&VAR_4->state_lock);
  FUNC_5("Moving to TARG_CONN_STATE_IN_LOGOUT.\n");
  VAR_4->conn_state = VAR_2;

  FUNC_0(&VAR_4->conn_logout_remove, 1);
  VAR_4->conn_logout_reason = VAR_1;
  FUNC_4(VAR_4);

  FUNC_7(&VAR_4->state_lock);
 } else {
  VAR_5 = FUNC_3(VAR_6,
    VAR_3->logout_cid);
  if (!VAR_5) {
   VAR_3->logout_response = VAR_0;
   FUNC_1(VAR_3, VAR_4,
     VAR_3->i_state);
   return 0;
  }

  FUNC_2(VAR_5);
 }

 FUNC_1(VAR_3, VAR_4, VAR_3->i_state);

 return 0;
}
