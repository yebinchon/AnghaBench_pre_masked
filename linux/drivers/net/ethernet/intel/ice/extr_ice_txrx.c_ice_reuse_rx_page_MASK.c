
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ice_rx_buf {int pagecnt_bias; int page_offset; int page; int dma; } ;
struct ice_ring {size_t next_to_alloc; size_t count; struct ice_rx_buf* rx_buf; } ;



__attribute__((used)) static void
FUNC_0(struct ice_ring *VAR_0, struct ice_rx_buf *VAR_1)
{
 u16 VAR_2 = VAR_0->next_to_alloc;
 struct ice_rx_buf *VAR_3;

 VAR_3 = &VAR_0->rx_buf[VAR_2];


 VAR_2++;
 VAR_0->next_to_alloc = (VAR_2 < VAR_0->count) ? VAR_2 : 0;





 VAR_3->dma = VAR_1->dma;
 VAR_3->page = VAR_1->page;
 VAR_3->page_offset = VAR_1->page_offset;
 VAR_3->pagecnt_bias = VAR_1->pagecnt_bias;
}
