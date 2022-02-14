
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_skb_frag {long long dma; int length; } ;
struct qlcnic_host_tx_ring {int num_desc; int tx_clean_lock; struct qlcnic_cmd_buffer* cmd_buf_arr; } ;
struct qlcnic_cmd_buffer {int frag_count; int * skb; struct qlcnic_skb_frag* frag_array; } ;
struct qlcnic_adapter {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,long long,int ,int ) ;
 int FUNC_2 (int ,long long,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct qlcnic_adapter *VAR_1,
          struct qlcnic_host_tx_ring *VAR_2)
{
 struct qlcnic_cmd_buffer *VAR_3;
 struct qlcnic_skb_frag *VAR_4;
 int VAR_5, VAR_6;

 FUNC_3(&VAR_2->tx_clean_lock);

 VAR_3 = VAR_2->cmd_buf_arr;
 for (VAR_5 = 0; VAR_5 < VAR_2->num_desc; VAR_5++) {
  VAR_4 = VAR_3->frag_array;
  if (VAR_4->dma) {
   FUNC_2(VAR_1->pdev, VAR_4->dma,
      VAR_4->length, VAR_0);
   VAR_4->dma = 0ULL;
  }
  for (VAR_6 = 1; VAR_6 < VAR_3->frag_count; VAR_6++) {
   VAR_4++;
   if (VAR_4->dma) {
    FUNC_1(VAR_1->pdev, VAR_4->dma,
            VAR_4->length,
            VAR_0);
    VAR_4->dma = 0ULL;
   }
  }
  if (VAR_3->skb) {
   FUNC_0(VAR_3->skb);
   VAR_3->skb = ((void*)0);
  }
  VAR_3++;
 }

 FUNC_4(&VAR_2->tx_clean_lock);
}
