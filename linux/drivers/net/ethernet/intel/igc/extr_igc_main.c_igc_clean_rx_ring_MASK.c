
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct igc_rx_buffer {int pagecnt_bias; int page; int dma; int page_offset; } ;
struct igc_ring {size_t next_to_clean; size_t next_to_alloc; size_t count; scalar_t__ next_to_use; int dev; struct igc_rx_buffer* rx_buffer_info; int * skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct igc_ring*) ;
 int FUNC_5 (struct igc_ring*) ;

__attribute__((used)) static void FUNC_6(struct igc_ring *VAR_2)
{
 u16 VAR_3 = VAR_2->next_to_clean;

 FUNC_1(VAR_2->skb);
 VAR_2->skb = ((void*)0);


 while (VAR_3 != VAR_2->next_to_alloc) {
  struct igc_rx_buffer *VAR_4 = &VAR_2->rx_buffer_info[VAR_3];




  FUNC_2(VAR_2->dev,
           VAR_4->dma,
           VAR_4->page_offset,
           FUNC_4(VAR_2),
           VAR_0);


  FUNC_3(VAR_2->dev,
         VAR_4->dma,
         FUNC_5(VAR_2),
         VAR_0,
         VAR_1);
  FUNC_0(VAR_4->page,
     VAR_4->pagecnt_bias);

  VAR_3++;
  if (VAR_3 == VAR_2->count)
   VAR_3 = 0;
 }

 VAR_2->next_to_alloc = 0;
 VAR_2->next_to_clean = 0;
 VAR_2->next_to_use = 0;
}
