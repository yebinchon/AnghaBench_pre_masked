
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status_error_len; } ;
struct TYPE_6__ {TYPE_1__ qword1; } ;
union i40e_rx_desc {TYPE_2__ wb; } ;
typedef unsigned int u64 ;
typedef int u16 ;
struct xdp_buff {int handle; int * data; scalar_t__ data_end; int * data_hard_start; int * data_meta; int * rxq; } ;
struct sk_buff {scalar_t__ len; } ;
struct i40e_rx_buffer {int * addr; int handle; } ;
struct TYPE_7__ {int alloc_buff_failed; } ;
struct i40e_ring {scalar_t__ next_to_clean; scalar_t__ next_to_use; int xsk_umem; TYPE_4__* q_vector; TYPE_3__ rx_stats; int xdp_rxq; } ;
struct TYPE_8__ {int napi; } ;


 int FUNC_0 (struct i40e_ring*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 union i40e_rx_desc* FUNC_1 (struct i40e_ring*,scalar_t__) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct i40e_ring*,int ) ;
 struct i40e_rx_buffer* FUNC_5 (struct i40e_ring*,union i40e_rx_desc*,unsigned int) ;
 struct sk_buff* FUNC_6 (struct i40e_ring*,struct i40e_rx_buffer*,struct xdp_buff*) ;
 int FUNC_7 (struct i40e_ring*,unsigned int) ;
 struct i40e_rx_buffer* FUNC_8 (struct i40e_ring*,unsigned int) ;
 int FUNC_9 (struct i40e_ring*) ;
 int FUNC_10 (struct i40e_ring*,union i40e_rx_desc*,struct sk_buff*) ;
 int FUNC_11 (struct i40e_ring*,struct i40e_rx_buffer*) ;
 unsigned int FUNC_12 (struct i40e_ring*,struct xdp_buff*) ;
 int FUNC_13 (struct i40e_ring*,unsigned int,unsigned int) ;
 unsigned int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct i40e_rx_buffer*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;

int FUNC_21(struct i40e_ring *VAR_6, int VAR_7)
{
 unsigned int VAR_8 = 0, VAR_9 = 0;
 u16 VAR_10 = FUNC_0(VAR_6);
 unsigned int VAR_11, VAR_12 = 0;
 bool VAR_13 = 0;
 struct sk_buff *VAR_14;
 struct xdp_buff VAR_15;

 VAR_15.rxq = &VAR_6->xdp_rxq;

 while (FUNC_15(VAR_9 < (unsigned int)VAR_7)) {
  struct i40e_rx_buffer *VAR_16;
  union i40e_rx_desc *VAR_17;
  unsigned int VAR_18;
  u64 VAR_19;

  if (VAR_10 >= VAR_2) {
   VAR_13 = VAR_13 ||
      !FUNC_4(VAR_6,
         VAR_10);
   VAR_10 = 0;
  }

  VAR_17 = FUNC_1(VAR_6, VAR_6->next_to_clean);
  VAR_19 = FUNC_14(VAR_17->wb.qword1.status_error_len);





  FUNC_2();

  VAR_16 = FUNC_5(VAR_6, VAR_17,
         VAR_19);
  if (FUNC_17(VAR_16)) {
   FUNC_11(VAR_6, VAR_16);
   VAR_10++;
   continue;
  }

  VAR_18 = (VAR_19 & VAR_0) >>
         VAR_1;
  if (!VAR_18)
   break;

  VAR_16 = FUNC_8(VAR_6, VAR_18);
  VAR_15.data = VAR_16->addr;
  VAR_15.data_meta = VAR_15.data;
  VAR_15.data_hard_start = VAR_15.data - VAR_5;
  VAR_15.data_end = VAR_15.data + VAR_18;
  VAR_15.handle = VAR_16->handle;

  VAR_11 = FUNC_12(VAR_6, &VAR_15);
  if (VAR_11) {
   if (VAR_11 & (VAR_4 | VAR_3)) {
    VAR_12 |= VAR_11;
    VAR_16->addr = ((void*)0);
   } else {
    FUNC_11(VAR_6, VAR_16);
   }

   VAR_8 += VAR_18;
   VAR_9++;

   VAR_10++;
   FUNC_9(VAR_6);
   continue;
  }
  VAR_14 = FUNC_6(VAR_6, VAR_16, &VAR_15);
  if (!VAR_14) {
   VAR_6->rx_stats.alloc_buff_failed++;
   break;
  }

  VAR_10++;
  FUNC_9(VAR_6);

  if (FUNC_3(VAR_14))
   continue;

  VAR_8 += VAR_14->len;
  VAR_9++;

  FUNC_10(VAR_6, VAR_17, VAR_14);
  FUNC_16(&VAR_6->q_vector->napi, VAR_14);
 }

 FUNC_7(VAR_6, VAR_12);
 FUNC_13(VAR_6, VAR_8, VAR_9);

 if (FUNC_20(VAR_6->xsk_umem)) {
  if (VAR_13 || VAR_6->next_to_clean == VAR_6->next_to_use)
   FUNC_19(VAR_6->xsk_umem);
  else
   FUNC_18(VAR_6->xsk_umem);

  return (int)VAR_9;
 }
 return VAR_13 ? VAR_7 : (int)VAR_9;
}
