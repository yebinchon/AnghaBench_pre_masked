
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int conn_transport; struct iscsi_conn* conn_ops; int conn_cpumask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iscsi_conn*) ;

void FUNC_3(struct iscsi_conn *VAR_0)
{
 FUNC_0(VAR_0->conn_cpumask);
 FUNC_2(VAR_0->conn_ops);
 FUNC_1(VAR_0->conn_transport);
 FUNC_2(VAR_0);
}
