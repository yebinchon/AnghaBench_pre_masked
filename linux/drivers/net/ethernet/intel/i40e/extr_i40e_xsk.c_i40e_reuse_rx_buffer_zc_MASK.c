
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i40e_rx_buffer {int * addr; int handle; int dma; } ;
struct i40e_ring {size_t next_to_alloc; scalar_t__ count; struct i40e_rx_buffer* rx_bi; } ;



__attribute__((used)) static void FUNC_0(struct i40e_ring *VAR_0,
        struct i40e_rx_buffer *VAR_1)
{
 struct i40e_rx_buffer *VAR_2 = &VAR_0->rx_bi[VAR_0->next_to_alloc];
 u16 VAR_3 = VAR_0->next_to_alloc;


 VAR_3++;
 VAR_0->next_to_alloc = (VAR_3 < VAR_0->count) ? VAR_3 : 0;


 VAR_2->dma = VAR_1->dma;
 VAR_2->addr = VAR_1->addr;
 VAR_2->handle = VAR_1->handle;

 VAR_1->addr = ((void*)0);
}
