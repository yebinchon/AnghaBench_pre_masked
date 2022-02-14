
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ixgbevf_rx_buffer {int pagecnt_bias; int page_offset; int dma; int page; } ;
struct ixgbevf_ring {size_t next_to_alloc; size_t count; struct ixgbevf_rx_buffer* rx_buffer_info; } ;



__attribute__((used)) static void FUNC_0(struct ixgbevf_ring *VAR_0,
      struct ixgbevf_rx_buffer *VAR_1)
{
 struct ixgbevf_rx_buffer *VAR_2;
 u16 VAR_3 = VAR_0->next_to_alloc;

 VAR_2 = &VAR_0->rx_buffer_info[VAR_3];


 VAR_3++;
 VAR_0->next_to_alloc = (VAR_3 < VAR_0->count) ? VAR_3 : 0;


 VAR_2->page = VAR_1->page;
 VAR_2->dma = VAR_1->dma;
 VAR_2->page_offset = VAR_1->page_offset;
 VAR_2->pagecnt_bias = VAR_1->pagecnt_bias;
}
