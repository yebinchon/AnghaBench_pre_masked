
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_host_tx_ring {int * cmd_buf_arr; int * rx_buf_arr; } ;
struct nx_host_rds_ring {int * cmd_buf_arr; int * rx_buf_arr; } ;
struct netxen_recv_context {struct nx_host_tx_ring* rds_rings; } ;
struct netxen_adapter {int max_rds_rings; struct nx_host_tx_ring* tx_ring; struct netxen_recv_context recv_ctx; } ;


 int FUNC_0 (struct nx_host_tx_ring*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct netxen_adapter *VAR_0)
{
 struct netxen_recv_context *VAR_1;
 struct nx_host_rds_ring *VAR_2;
 struct nx_host_tx_ring *VAR_3;
 int VAR_4;

 VAR_1 = &VAR_0->recv_ctx;

 if (VAR_1->rds_rings == ((void*)0))
  goto skip_rds;

 for (VAR_4 = 0; VAR_4 < VAR_0->max_rds_rings; VAR_4++) {
  VAR_2 = &VAR_1->rds_rings[VAR_4];
  FUNC_1(VAR_2->rx_buf_arr);
  VAR_2->rx_buf_arr = ((void*)0);
 }
 FUNC_0(VAR_1->rds_rings);

skip_rds:
 if (VAR_0->tx_ring == ((void*)0))
  return;

 VAR_3 = VAR_0->tx_ring;
 FUNC_1(VAR_3->cmd_buf_arr);
 FUNC_0(VAR_3);
 VAR_0->tx_ring = ((void*)0);
}
