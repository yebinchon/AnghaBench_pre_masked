
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_session {TYPE_1__* sess_ops; int session_fall_back_to_erl0; int session_reinstatement; } ;
struct iscsi_conn {int cid; struct iscsi_session* sess; } ;
struct TYPE_2__ {int ErrorRecoveryLevel; int InitiatorName; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct iscsi_conn*) ;
 int FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct iscsi_conn *VAR_0)
{
 struct iscsi_session *VAR_1 = VAR_0->sess;

 if ((VAR_1->sess_ops->ErrorRecoveryLevel == 2) &&
     !FUNC_0(&VAR_1->session_reinstatement) &&
     !FUNC_0(&VAR_1->session_fall_back_to_erl0))
  FUNC_2(VAR_0);
 else {
  FUNC_3("Performing cleanup for failed iSCSI"
   " Connection ID: %hu from %s\n", VAR_0->cid,
   VAR_1->sess_ops->InitiatorName);
  FUNC_1(VAR_0);
 }
}
