
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int conn_post_wait_comp; int conn_wait_rcfr_comp; scalar_t__ rx_thread; scalar_t__ rx_thread_active; scalar_t__ tx_thread; scalar_t__ tx_thread_active; int state_lock; int transport_failed; int connection_exit; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct iscsi_conn *VAR_1)
{
 FUNC_3(&VAR_1->state_lock);
 if (FUNC_0(&VAR_1->connection_exit)) {
  FUNC_4(&VAR_1->state_lock);
  goto sleep;
 }

 if (FUNC_0(&VAR_1->transport_failed)) {
  FUNC_4(&VAR_1->state_lock);
  goto sleep;
 }
 FUNC_4(&VAR_1->state_lock);

 if (VAR_1->tx_thread && VAR_1->tx_thread_active)
  FUNC_2(VAR_0, VAR_1->tx_thread, 1);
 if (VAR_1->rx_thread && VAR_1->rx_thread_active)
  FUNC_2(VAR_0, VAR_1->rx_thread, 1);

sleep:
 FUNC_5(&VAR_1->conn_wait_rcfr_comp);
 FUNC_1(&VAR_1->conn_post_wait_comp);
}
