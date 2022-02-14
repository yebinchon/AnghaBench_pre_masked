
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct i40e_rx_buffer {int * addr; int handle; } ;
struct i40e_ring {size_t count; int xsk_umem; struct i40e_rx_buffer* rx_bi; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct i40e_ring *VAR_0)
{
 u16 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++) {
  struct i40e_rx_buffer *VAR_2 = &VAR_0->rx_bi[VAR_1];

  if (!VAR_2->addr)
   continue;

  FUNC_0(VAR_0->xsk_umem, VAR_2->handle);
  VAR_2->addr = ((void*)0);
 }
}
