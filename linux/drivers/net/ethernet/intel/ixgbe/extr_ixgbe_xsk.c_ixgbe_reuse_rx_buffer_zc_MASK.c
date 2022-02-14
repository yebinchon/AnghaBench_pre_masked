
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ixgbe_rx_buffer {int * skb; int * addr; int handle; int dma; } ;
struct ixgbe_ring {scalar_t__ next_to_alloc; scalar_t__ count; struct ixgbe_rx_buffer* rx_buffer_info; } ;



__attribute__((used)) static void FUNC_0(struct ixgbe_ring *VAR_0,
         struct ixgbe_rx_buffer *VAR_1)
{
 u16 VAR_2 = VAR_0->next_to_alloc;
 struct ixgbe_rx_buffer *VAR_3;

 VAR_3 = &VAR_0->rx_buffer_info[VAR_0->next_to_alloc];

 VAR_2++;
 VAR_0->next_to_alloc = (VAR_2 < VAR_0->count) ? VAR_2 : 0;


 VAR_3->dma = VAR_1->dma;
 VAR_3->addr = VAR_1->addr;
 VAR_3->handle = VAR_1->handle;

 VAR_1->addr = ((void*)0);
 VAR_1->skb = ((void*)0);
}
