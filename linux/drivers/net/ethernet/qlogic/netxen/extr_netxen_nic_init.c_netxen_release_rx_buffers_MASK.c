
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_host_rds_ring {int num_desc; int dma_size; struct netxen_rx_buffer* rx_buf_arr; } ;
struct netxen_rx_buffer {scalar_t__ state; int * skb; int dma; } ;
struct netxen_recv_context {struct nx_host_rds_ring* rds_rings; } ;
struct netxen_adapter {int max_rds_rings; int pdev; struct netxen_recv_context recv_ctx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2(struct netxen_adapter *VAR_2)
{
 struct netxen_recv_context *VAR_3;
 struct nx_host_rds_ring *VAR_4;
 struct netxen_rx_buffer *VAR_5;
 int VAR_6, VAR_7;

 VAR_3 = &VAR_2->recv_ctx;
 for (VAR_7 = 0; VAR_7 < VAR_2->max_rds_rings; VAR_7++) {
  VAR_4 = &VAR_3->rds_rings[VAR_7];
  for (VAR_6 = 0; VAR_6 < VAR_4->num_desc; ++VAR_6) {
   VAR_5 = &(VAR_4->rx_buf_arr[VAR_6]);
   if (VAR_5->state == VAR_0)
    continue;
   FUNC_1(VAR_2->pdev,
     VAR_5->dma,
     VAR_4->dma_size,
     VAR_1);
   if (VAR_5->skb != ((void*)0))
    FUNC_0(VAR_5->skb);
  }
 }
}
