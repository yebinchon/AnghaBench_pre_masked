
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int conn_usage_lock; int conn_usage_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct iscsi_conn *VAR_0)
{
 FUNC_0(&VAR_0->conn_usage_lock);
 VAR_0->conn_usage_count++;
 FUNC_1(&VAR_0->conn_usage_lock);
}
