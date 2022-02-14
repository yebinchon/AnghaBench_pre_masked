
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int sid; } ;
struct iscsi_conn_recovery {int cid; int conn_recovery_cmd_lock; } ;
struct iscsi_cmd {int dummy; } ;


 int FUNC_0 (struct iscsi_conn_recovery*,struct iscsi_session*) ;
 int FUNC_1 (struct iscsi_cmd*,struct iscsi_session*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
 struct iscsi_cmd *VAR_0,
 struct iscsi_conn_recovery *VAR_1,
 struct iscsi_session *VAR_2)
{
 int VAR_3;

 FUNC_3(&VAR_1->conn_recovery_cmd_lock);
 VAR_3 = FUNC_1(VAR_0, VAR_2);
 FUNC_4(&VAR_1->conn_recovery_cmd_lock);
 if (!VAR_3) {
  FUNC_2("iSCSI connection recovery successful for CID:"
   " %hu on SID: %u\n", VAR_1->cid, VAR_2->sid);
  FUNC_0(VAR_1, VAR_2);
 }
}
