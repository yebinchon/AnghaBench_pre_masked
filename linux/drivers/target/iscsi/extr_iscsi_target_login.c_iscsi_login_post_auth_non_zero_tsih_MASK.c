
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct iscsi_session {TYPE_1__* sess_ops; int nconn; } ;
struct iscsi_conn_recovery {int dummy; } ;
struct iscsi_conn {int cid; struct iscsi_session* sess; } ;
struct TYPE_2__ {int ErrorRecoveryLevel; scalar_t__ MaxConnections; int InitiatorName; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct iscsi_conn*) ;
 int FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_conn_recovery*,int ) ;
 struct iscsi_conn* FUNC_4 (struct iscsi_session*,int ) ;
 struct iscsi_conn_recovery* FUNC_5 (struct iscsi_session*,int ) ;
 int FUNC_6 (struct iscsi_conn*,int ,int ) ;
 int FUNC_7 (char*,int ,...) ;
 int FUNC_8 (char*,scalar_t__,...) ;

int FUNC_9(
 struct iscsi_conn *VAR_2,
 u16 VAR_3,
 u32 VAR_4)
{
 struct iscsi_conn *VAR_5 = ((void*)0);
 struct iscsi_conn_recovery *VAR_6 = ((void*)0);
 struct iscsi_session *VAR_7 = VAR_2->sess;
 VAR_5 = FUNC_4(VAR_7, VAR_3);
 if (VAR_5) {
  FUNC_8("Connection exists with CID %hu for %s,"
   " performing connection reinstatement.\n",
   VAR_5->cid, VAR_7->sess_ops->InitiatorName);

  FUNC_1(VAR_5);
  FUNC_2(VAR_5);
 }
 if (VAR_7->sess_ops->ErrorRecoveryLevel == 2) {
  VAR_6 = FUNC_5(
    VAR_7, VAR_3);
  if (VAR_6) {
   FUNC_7("Performing implicit logout"
    " for connection recovery on CID: %hu\n",
     VAR_2->cid);
   FUNC_3(VAR_6, VAR_4);
  }
 }







 FUNC_7("Adding CID %hu to existing session for %s.\n",
   VAR_3, VAR_7->sess_ops->InitiatorName);

 if ((FUNC_0(&VAR_7->nconn) + 1) > VAR_7->sess_ops->MaxConnections) {
  FUNC_8("Adding additional connection to this session"
   " would exceed MaxConnections %d, login failed.\n",
    VAR_7->sess_ops->MaxConnections);
  FUNC_6(VAR_2, VAR_1,
    VAR_0);
  return -1;
 }

 return 0;
}
