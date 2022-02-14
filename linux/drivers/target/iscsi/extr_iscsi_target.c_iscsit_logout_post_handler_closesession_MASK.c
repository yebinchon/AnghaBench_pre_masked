
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_session {int dummy; } ;
struct iscsi_conn {int conn_logout_comp; int conn_logout_remove; int tx_thread_active; TYPE_1__* conn_transport; struct iscsi_session* sess; } ;
struct TYPE_2__ {int rdma_shutdown; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iscsi_session*) ;
 int FUNC_4 (struct iscsi_conn*) ;
 int FUNC_5 (struct iscsi_session*) ;
 int FUNC_6 (struct iscsi_session*,int,int) ;

__attribute__((used)) static void FUNC_7(
 struct iscsi_conn *VAR_0)
{
 struct iscsi_session *VAR_1 = VAR_0->sess;
 int VAR_2 = 1;
 if (!VAR_0->conn_transport->rdma_shutdown) {
  VAR_2 = FUNC_1(&VAR_0->tx_thread_active, 1, 0);
  if (!VAR_2)
   return;
 }

 FUNC_0(&VAR_0->conn_logout_remove, 0);
 FUNC_2(&VAR_0->conn_logout_comp);

 FUNC_4(VAR_0);
 FUNC_6(VAR_1, VAR_2, VAR_2);
 FUNC_5(VAR_1);
 FUNC_3(VAR_1);
}
