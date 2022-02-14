
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct xdp_umem {int dummy; } ;
struct i40e_tx_buffer {int * xdpf; } ;
struct i40e_ring {size_t next_to_clean; size_t next_to_use; size_t count; struct i40e_tx_buffer* tx_bi; struct xdp_umem* xsk_umem; } ;


 int FUNC_0 (struct i40e_ring*,struct i40e_tx_buffer*) ;
 int FUNC_1 (struct xdp_umem*,scalar_t__) ;

void FUNC_2(struct i40e_ring *VAR_0)
{
 u16 VAR_1 = VAR_0->next_to_clean, VAR_2 = VAR_0->next_to_use;
 struct xdp_umem *VAR_3 = VAR_0->xsk_umem;
 struct i40e_tx_buffer *VAR_4;
 u32 VAR_5 = 0;

 while (VAR_1 != VAR_2) {
  VAR_4 = &VAR_0->tx_bi[VAR_1];

  if (VAR_4->xdpf)
   FUNC_0(VAR_0, VAR_4);
  else
   VAR_5++;

  VAR_4->xdpf = ((void*)0);

  VAR_1++;
  if (VAR_1 >= VAR_0->count)
   VAR_1 = 0;
 }

 if (VAR_5)
  FUNC_1(VAR_3, VAR_5);
}
