
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int conn_usage_lock; int conn_waiting_on_uc_comp; scalar_t__ conn_waiting_on_uc; int conn_usage_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iscsi_conn *VAR_0)
{
 FUNC_1(&VAR_0->conn_usage_lock);
 VAR_0->conn_usage_count--;

 if (!VAR_0->conn_usage_count && VAR_0->conn_waiting_on_uc)
  FUNC_0(&VAR_0->conn_waiting_on_uc_comp);

 FUNC_2(&VAR_0->conn_usage_lock);
}
