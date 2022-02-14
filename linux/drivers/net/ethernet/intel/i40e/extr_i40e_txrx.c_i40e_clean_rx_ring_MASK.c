
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct i40e_rx_buffer {scalar_t__ page_offset; int * page; int pagecnt_bias; int dma; } ;
struct i40e_ring {size_t count; unsigned long size; scalar_t__ next_to_use; scalar_t__ next_to_clean; scalar_t__ next_to_alloc; struct i40e_rx_buffer* desc; struct i40e_rx_buffer* rx_bi; int dev; int rx_buf_len; scalar_t__ xsk_umem; int * skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct i40e_ring*) ;
 int FUNC_5 (struct i40e_ring*) ;
 int FUNC_6 (struct i40e_rx_buffer*,int ,unsigned long) ;

void FUNC_7(struct i40e_ring *VAR_2)
{
 unsigned long VAR_3;
 u16 VAR_4;


 if (!VAR_2->rx_bi)
  return;

 if (VAR_2->skb) {
  FUNC_1(VAR_2->skb);
  VAR_2->skb = ((void*)0);
 }

 if (VAR_2->xsk_umem) {
  FUNC_5(VAR_2);
  goto skip_free;
 }


 for (VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4++) {
  struct i40e_rx_buffer *VAR_5 = &VAR_2->rx_bi[VAR_4];

  if (!VAR_5->page)
   continue;




  FUNC_2(VAR_2->dev,
           VAR_5->dma,
           VAR_5->page_offset,
           VAR_2->rx_buf_len,
           VAR_0);


  FUNC_3(VAR_2->dev, VAR_5->dma,
         FUNC_4(VAR_2),
         VAR_0,
         VAR_1);

  FUNC_0(VAR_5->page, VAR_5->pagecnt_bias);

  VAR_5->page = ((void*)0);
  VAR_5->page_offset = 0;
 }

skip_free:
 VAR_3 = sizeof(struct i40e_rx_buffer) * VAR_2->count;
 FUNC_6(VAR_2->rx_bi, 0, VAR_3);


 FUNC_6(VAR_2->desc, 0, VAR_2->size);

 VAR_2->next_to_alloc = 0;
 VAR_2->next_to_clean = 0;
 VAR_2->next_to_use = 0;
}
