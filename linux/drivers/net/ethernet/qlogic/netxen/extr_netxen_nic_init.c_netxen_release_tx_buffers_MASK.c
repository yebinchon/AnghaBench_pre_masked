
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_host_tx_ring {int num_desc; struct netxen_cmd_buffer* cmd_buf_arr; } ;
struct netxen_skb_frag {long long dma; int length; } ;
struct netxen_cmd_buffer {int frag_count; int * skb; struct netxen_skb_frag* frag_array; } ;
struct netxen_adapter {int tx_clean_lock; int pdev; struct nx_host_tx_ring* tx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,long long,int ,int ) ;
 int FUNC_2 (int ,long long,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct netxen_adapter *VAR_1)
{
 struct netxen_cmd_buffer *VAR_2;
 struct netxen_skb_frag *VAR_3;
 int VAR_4, VAR_5;
 struct nx_host_tx_ring *VAR_6 = VAR_1->tx_ring;

 FUNC_3(&VAR_1->tx_clean_lock);
 VAR_2 = VAR_6->cmd_buf_arr;
 for (VAR_4 = 0; VAR_4 < VAR_6->num_desc; VAR_4++) {
  VAR_3 = VAR_2->frag_array;
  if (VAR_3->dma) {
   FUNC_2(VAR_1->pdev, VAR_3->dma,
      VAR_3->length, VAR_0);
   VAR_3->dma = 0ULL;
  }
  for (VAR_5 = 1; VAR_5 < VAR_2->frag_count; VAR_5++) {
   VAR_3++;
   if (VAR_3->dma) {
    FUNC_1(VAR_1->pdev, VAR_3->dma,
            VAR_3->length,
            VAR_0);
    VAR_3->dma = 0ULL;
   }
  }
  if (VAR_2->skb) {
   FUNC_0(VAR_2->skb);
   VAR_2->skb = ((void*)0);
  }
  VAR_2++;
 }
 FUNC_4(&VAR_1->tx_clean_lock);
}
