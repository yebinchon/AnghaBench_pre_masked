
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {scalar_t__ conn_usage_count; int conn_waiting_on_uc; int conn_usage_lock; int conn_waiting_on_uc_comp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iscsi_conn *VAR_0)
{
 FUNC_0(&VAR_0->conn_usage_lock);
 if (VAR_0->conn_usage_count != 0) {
  VAR_0->conn_waiting_on_uc = 1;
  FUNC_1(&VAR_0->conn_usage_lock);

  FUNC_2(&VAR_0->conn_waiting_on_uc_comp);
  return;
 }
 FUNC_1(&VAR_0->conn_usage_lock);
}
