
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct xdp_umem {int dummy; } ;
struct i40e_vsi {unsigned int work_limit; } ;
struct i40e_tx_buffer {scalar_t__ bytecount; int * xdpf; } ;
struct i40e_ring {unsigned int next_to_clean; unsigned int count; struct xdp_umem* xsk_umem; struct i40e_tx_buffer* tx_bi; } ;


 int FUNC_0 (struct i40e_ring*,struct i40e_vsi*,unsigned int) ;
 int FUNC_1 (struct i40e_ring*,struct i40e_tx_buffer*) ;
 unsigned int FUNC_2 (struct i40e_ring*) ;
 int FUNC_3 (struct i40e_ring*,unsigned int,unsigned int) ;
 int FUNC_4 (struct i40e_ring*,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct xdp_umem*) ;
 int FUNC_7 (struct xdp_umem*,unsigned int) ;
 scalar_t__ FUNC_8 (struct xdp_umem*) ;

bool FUNC_9(struct i40e_vsi *VAR_0,
      struct i40e_ring *VAR_1, int VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0, VAR_5 = VAR_0->work_limit;
 u32 VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 struct xdp_umem *VAR_10 = VAR_1->xsk_umem;
 u32 VAR_11 = FUNC_2(VAR_1);
 bool VAR_12 = 1, VAR_13;
 struct i40e_tx_buffer *VAR_14;

 if (VAR_11 < VAR_1->next_to_clean)
  VAR_11 += VAR_1->count;
 VAR_8 = VAR_11 - VAR_1->next_to_clean;

 if (VAR_8 == 0) {
  goto out_xmit;
 } else if (VAR_8 > VAR_5) {
  VAR_7 = VAR_5;
  VAR_12 = 0;
 } else {
  VAR_7 = VAR_8;
 }

 VAR_3 = VAR_1->next_to_clean;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_14 = &VAR_1->tx_bi[VAR_3];

  if (VAR_14->xdpf)
   FUNC_1(VAR_1, VAR_14);
  else
   VAR_9++;

  VAR_14->xdpf = ((void*)0);
  VAR_4 += VAR_14->bytecount;

  if (++VAR_3 >= VAR_1->count)
   VAR_3 = 0;
 }

 VAR_1->next_to_clean += VAR_7;
 if (FUNC_5(VAR_1->next_to_clean >= VAR_1->count))
  VAR_1->next_to_clean -= VAR_1->count;

 if (VAR_9)
  FUNC_7(VAR_10, VAR_9);

 FUNC_0(VAR_1, VAR_0, VAR_5);
 FUNC_3(VAR_1, VAR_7, VAR_4);

out_xmit:
 if (FUNC_8(VAR_1->xsk_umem))
  FUNC_6(VAR_1->xsk_umem);

 VAR_13 = FUNC_4(VAR_1, VAR_5);

 return VAR_12 && VAR_13;
}
