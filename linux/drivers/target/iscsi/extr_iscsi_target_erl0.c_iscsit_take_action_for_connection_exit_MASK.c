
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {scalar_t__ conn_state; int state_lock; int connection_exit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_conn*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct iscsi_conn *VAR_2, bool *VAR_3)
{
 *VAR_3 = 0;

 FUNC_5(&VAR_2->state_lock);
 if (FUNC_0(&VAR_2->connection_exit)) {
  FUNC_6(&VAR_2->state_lock);
  return;
 }
 FUNC_1(&VAR_2->connection_exit, 1);

 if (VAR_2->conn_state == VAR_1) {
  FUNC_6(&VAR_2->state_lock);
  FUNC_2(VAR_2);
  *VAR_3 = 1;
  return;
 }

 if (VAR_2->conn_state == VAR_0) {
  FUNC_6(&VAR_2->state_lock);
  return;
 }

 FUNC_4("Moving to TARG_CONN_STATE_CLEANUP_WAIT.\n");
 VAR_2->conn_state = VAR_0;
 FUNC_6(&VAR_2->state_lock);

 FUNC_3(VAR_2);
 *VAR_3 = 1;
}
