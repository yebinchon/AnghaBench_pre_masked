
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macb_queue {scalar_t__ rx_tail; int rx_buffers_dma; struct macb* bp; } ;
struct macb_dma_desc {int addr; scalar_t__ ctrl; } ;
struct macb {int rx_ring_size; scalar_t__ rx_buffer_size; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct macb_dma_desc* FUNC_1 (struct macb_queue*,int) ;
 int FUNC_2 (struct macb*,struct macb_dma_desc*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct macb_queue *VAR_1)
{
 struct macb *VAR_2 = VAR_1->bp;
 dma_addr_t VAR_3;
 struct macb_dma_desc *VAR_4 = ((void*)0);
 int VAR_5;

 VAR_3 = VAR_1->rx_buffers_dma;
 for (VAR_5 = 0; VAR_5 < VAR_2->rx_ring_size; VAR_5++) {
  VAR_4 = FUNC_1(VAR_1, VAR_5);
  FUNC_2(VAR_2, VAR_4, VAR_3);
  VAR_4->ctrl = 0;
  VAR_3 += VAR_2->rx_buffer_size;
 }
 VAR_4->addr |= FUNC_0(VAR_0);
 VAR_1->rx_tail = 0;
}
