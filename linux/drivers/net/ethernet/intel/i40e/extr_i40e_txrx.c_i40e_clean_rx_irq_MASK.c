
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
typedef scalar_t__ u16 ;
struct xdp_buff {scalar_t__ data; scalar_t__ data_end; scalar_t__ data_hard_start; scalar_t__ data_meta; int * rxq; } ;
struct sk_buff {scalar_t__ len; } ;
struct i40e_rx_buffer {int pagecnt_bias; scalar_t__ page_offset; int page; } ;
struct TYPE_7__ {int alloc_buff_failed; } ;
struct i40e_ring {struct sk_buff* skb; TYPE_4__* q_vector; TYPE_3__ rx_stats; int next_to_clean; int xdp_rxq; } ;
struct TYPE_8__ {int napi; } ;


 scalar_t__ FUNC_0 (struct i40e_ring*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 union i40e_rx_desc* FUNC_1 (struct i40e_ring*,int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (struct i40e_ring*,struct i40e_rx_buffer*,struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_6 (struct i40e_ring*,scalar_t__) ;
 struct sk_buff* FUNC_7 (struct i40e_ring*,struct i40e_rx_buffer*,struct xdp_buff*) ;
 struct i40e_rx_buffer* FUNC_8 (struct i40e_ring*,union i40e_rx_desc*,unsigned int) ;
 scalar_t__ FUNC_9 (struct i40e_ring*,struct sk_buff*,union i40e_rx_desc*) ;
 struct sk_buff* FUNC_10 (struct i40e_ring*,struct i40e_rx_buffer*,struct xdp_buff*) ;
 int FUNC_11 (struct i40e_ring*,unsigned int) ;
 struct i40e_rx_buffer* FUNC_12 (struct i40e_ring*,unsigned int) ;
 scalar_t__ FUNC_13 (struct i40e_ring*,union i40e_rx_desc*,struct sk_buff*) ;
 int FUNC_14 (struct i40e_ring*,union i40e_rx_desc*,struct sk_buff*) ;
 int FUNC_15 (struct i40e_ring*,struct i40e_rx_buffer*) ;
 int FUNC_16 (struct i40e_ring*,struct i40e_rx_buffer*) ;
 struct sk_buff* FUNC_17 (struct i40e_ring*,struct xdp_buff*) ;
 int FUNC_18 (struct i40e_ring*,struct i40e_rx_buffer*,unsigned int) ;
 scalar_t__ FUNC_19 (struct i40e_ring*) ;
 int FUNC_20 (int ,struct i40e_ring*,union i40e_rx_desc*,struct sk_buff*) ;
 int FUNC_21 (struct i40e_ring*,unsigned int,unsigned int) ;
 unsigned int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (struct i40e_ring*) ;
 scalar_t__ FUNC_27 (struct i40e_rx_buffer*) ;

__attribute__((used)) static int FUNC_28(struct i40e_ring *VAR_7, int VAR_8)
{
 unsigned int VAR_9 = 0, VAR_10 = 0;
 struct sk_buff *VAR_11 = VAR_7->skb;
 u16 VAR_12 = FUNC_0(VAR_7);
 unsigned int VAR_13 = 0;
 bool VAR_14 = 0;
 struct xdp_buff VAR_15;

 VAR_15.rxq = &VAR_7->xdp_rxq;

 while (FUNC_23(VAR_10 < (unsigned int)VAR_8)) {
  struct i40e_rx_buffer *VAR_16;
  union i40e_rx_desc *VAR_17;
  unsigned int VAR_18;
  u64 VAR_19;


  if (VAR_12 >= VAR_2) {
   VAR_14 = VAR_14 ||
      FUNC_6(VAR_7, VAR_12);
   VAR_12 = 0;
  }

  VAR_17 = FUNC_1(VAR_7, VAR_7->next_to_clean);






  VAR_19 = FUNC_22(VAR_17->wb.qword1.status_error_len);





  FUNC_4();

  VAR_16 = FUNC_8(VAR_7, VAR_17,
         VAR_19);
  if (FUNC_27(VAR_16)) {
   FUNC_16(VAR_7, VAR_16);
   VAR_12++;
   continue;
  }

  VAR_18 = (VAR_19 & VAR_0) >>
         VAR_1;
  if (!VAR_18)
   break;

  FUNC_20(VAR_5, VAR_7, VAR_17, VAR_11);
  VAR_16 = FUNC_12(VAR_7, VAR_18);


  if (!VAR_11) {
   VAR_15.data = FUNC_25(VAR_16->page) +
       VAR_16->page_offset;
   VAR_15.data_meta = VAR_15.data;
   VAR_15.data_hard_start = VAR_15.data -
           FUNC_19(VAR_7);
   VAR_15.data_end = VAR_15.data + VAR_18;

   VAR_11 = FUNC_17(VAR_7, &VAR_15);
  }

  if (FUNC_2(VAR_11)) {
   unsigned int VAR_20 = -FUNC_3(VAR_11);

   if (VAR_20 & (VAR_4 | VAR_3)) {
    VAR_13 |= VAR_20;
    FUNC_18(VAR_7, VAR_16, VAR_18);
   } else {
    VAR_16->pagecnt_bias++;
   }
   VAR_9 += VAR_18;
   VAR_10++;
  } else if (VAR_11) {
   FUNC_5(VAR_7, VAR_16, VAR_11, VAR_18);
  } else if (FUNC_26(VAR_7)) {
   VAR_11 = FUNC_7(VAR_7, VAR_16, &VAR_15);
  } else {
   VAR_11 = FUNC_10(VAR_7, VAR_16, &VAR_15);
  }


  if (!VAR_11) {
   VAR_7->rx_stats.alloc_buff_failed++;
   VAR_16->pagecnt_bias++;
   break;
  }

  FUNC_15(VAR_7, VAR_16);
  VAR_12++;

  if (FUNC_13(VAR_7, VAR_17, VAR_11))
   continue;

  if (FUNC_9(VAR_7, VAR_11, VAR_17)) {
   VAR_11 = ((void*)0);
   continue;
  }


  VAR_9 += VAR_11->len;


  FUNC_14(VAR_7, VAR_17, VAR_11);

  FUNC_20(VAR_6, VAR_7, VAR_17, VAR_11);
  FUNC_24(&VAR_7->q_vector->napi, VAR_11);
  VAR_11 = ((void*)0);


  VAR_10++;
 }

 FUNC_11(VAR_7, VAR_13);
 VAR_7->skb = VAR_11;

 FUNC_21(VAR_7, VAR_9, VAR_10);


 return VAR_14 ? VAR_8 : (int)VAR_10;
}
