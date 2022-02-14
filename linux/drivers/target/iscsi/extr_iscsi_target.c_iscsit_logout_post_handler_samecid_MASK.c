
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_conn {int conn_logout_comp; int conn_logout_remove; int tx_thread_active; TYPE_1__* conn_transport; } ;
struct TYPE_2__ {int rdma_shutdown; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iscsi_conn*,int) ;
 int FUNC_4 (struct iscsi_conn*) ;

__attribute__((used)) static void FUNC_5(
 struct iscsi_conn *VAR_0)
{
 int VAR_1 = 1;

 if (!VAR_0->conn_transport->rdma_shutdown) {
  VAR_1 = FUNC_1(&VAR_0->tx_thread_active, 1, 0);
  if (!VAR_1)
   return;
 }

 FUNC_0(&VAR_0->conn_logout_remove, 0);
 FUNC_2(&VAR_0->conn_logout_comp);

 FUNC_3(VAR_0, VAR_1);
 FUNC_4(VAR_0);
}
