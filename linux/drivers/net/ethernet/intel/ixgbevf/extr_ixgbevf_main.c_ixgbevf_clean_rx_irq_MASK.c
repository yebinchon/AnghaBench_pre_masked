
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int length; } ;
struct TYPE_9__ {TYPE_1__ upper; } ;
union ixgbe_adv_rx_desc {TYPE_2__ wb; } ;
typedef scalar_t__ u16 ;
struct xdp_buff {scalar_t__ data; scalar_t__ data_end; scalar_t__ data_hard_start; scalar_t__ data_meta; int * rxq; } ;
struct sk_buff {scalar_t__ pkt_type; scalar_t__ len; } ;
struct ixgbevf_rx_buffer {int pagecnt_bias; scalar_t__ page_offset; int page; } ;
struct TYPE_12__ {unsigned int packets; unsigned int bytes; } ;
struct TYPE_10__ {int alloc_rx_buff_failed; } ;
struct ixgbevf_ring {size_t queue_index; int syncp; TYPE_5__ stats; int next_to_use; struct sk_buff* skb; TYPE_4__* netdev; TYPE_3__ rx_stats; int next_to_clean; int xdp_rxq; } ;
struct TYPE_13__ {unsigned int total_packets; unsigned int total_bytes; } ;
struct ixgbevf_q_vector {TYPE_6__ rx; struct ixgbevf_adapter* adapter; } ;
struct ixgbevf_adapter {struct ixgbevf_ring** xdp_ring; } ;
struct TYPE_14__ {int h_source; } ;
struct TYPE_11__ {int dev_addr; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 union ixgbe_adv_rx_desc* FUNC_1 (struct ixgbevf_ring*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_7__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ixgbevf_ring*,struct ixgbevf_rx_buffer*,struct sk_buff*,unsigned int) ;
 int FUNC_7 (struct ixgbevf_ring*,scalar_t__) ;
 struct sk_buff* FUNC_8 (struct ixgbevf_ring*,struct ixgbevf_rx_buffer*,struct xdp_buff*,union ixgbe_adv_rx_desc*) ;
 scalar_t__ FUNC_9 (struct ixgbevf_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct ixgbevf_ring*,struct ixgbevf_rx_buffer*,struct xdp_buff*,union ixgbe_adv_rx_desc*) ;
 scalar_t__ FUNC_11 (struct ixgbevf_ring*) ;
 struct ixgbevf_rx_buffer* FUNC_12 (struct ixgbevf_ring*,unsigned int) ;
 scalar_t__ FUNC_13 (struct ixgbevf_ring*,union ixgbe_adv_rx_desc*) ;
 int FUNC_14 (struct ixgbevf_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_15 (struct ixgbevf_ring*,struct ixgbevf_rx_buffer*,struct sk_buff*) ;
 struct sk_buff* FUNC_16 (struct ixgbevf_adapter*,struct ixgbevf_ring*,struct xdp_buff*) ;
 int FUNC_17 (struct ixgbevf_ring*,struct ixgbevf_rx_buffer*,unsigned int) ;
 scalar_t__ FUNC_18 (struct ixgbevf_ring*) ;
 int FUNC_19 (struct ixgbevf_q_vector*,struct sk_buff*) ;
 int FUNC_20 (struct ixgbevf_ring*,int ) ;
 unsigned int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int) ;
 scalar_t__ FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (struct ixgbevf_ring*) ;
 int FUNC_25 () ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 () ;

__attribute__((used)) static int FUNC_29(struct ixgbevf_q_vector *VAR_4,
    struct ixgbevf_ring *VAR_5,
    int VAR_6)
{
 unsigned int VAR_7 = 0, VAR_8 = 0;
 struct ixgbevf_adapter *VAR_9 = VAR_4->adapter;
 u16 VAR_10 = FUNC_11(VAR_5);
 struct sk_buff *VAR_11 = VAR_5->skb;
 bool VAR_12 = 0;
 struct xdp_buff VAR_13;

 VAR_13.rxq = &VAR_5->xdp_rxq;

 while (FUNC_22(VAR_8 < VAR_6)) {
  struct ixgbevf_rx_buffer *VAR_14;
  union ixgbe_adv_rx_desc *VAR_15;
  unsigned int VAR_16;


  if (VAR_10 >= VAR_0) {
   FUNC_7(VAR_5, VAR_10);
   VAR_10 = 0;
  }

  VAR_15 = FUNC_1(VAR_5, VAR_5->next_to_clean);
  VAR_16 = FUNC_21(VAR_15->wb.upper.length);
  if (!VAR_16)
   break;





  FUNC_25();

  VAR_14 = FUNC_12(VAR_5, VAR_16);


  if (!VAR_11) {
   VAR_13.data = FUNC_23(VAR_14->page) +
       VAR_14->page_offset;
   VAR_13.data_meta = VAR_13.data;
   VAR_13.data_hard_start = VAR_13.data -
           FUNC_18(VAR_5);
   VAR_13.data_end = VAR_13.data + VAR_16;

   VAR_11 = FUNC_16(VAR_9, VAR_5, &VAR_13);
  }

  if (FUNC_0(VAR_11)) {
   if (FUNC_2(VAR_11) == -VAR_1) {
    VAR_12 = 1;
    FUNC_17(VAR_5, VAR_14,
             VAR_16);
   } else {
    VAR_14->pagecnt_bias++;
   }
   VAR_8++;
   VAR_7 += VAR_16;
  } else if (VAR_11) {
   FUNC_6(VAR_5, VAR_14, VAR_11, VAR_16);
  } else if (FUNC_24(VAR_5)) {
   VAR_11 = FUNC_8(VAR_5, VAR_14,
      &VAR_13, VAR_15);
  } else {
   VAR_11 = FUNC_10(VAR_5, VAR_14,
          &VAR_13, VAR_15);
  }


  if (!VAR_11) {
   VAR_5->rx_stats.alloc_rx_buff_failed++;
   VAR_14->pagecnt_bias++;
   break;
  }

  FUNC_15(VAR_5, VAR_14, VAR_11);
  VAR_10++;


  if (FUNC_13(VAR_5, VAR_15))
   continue;


  if (FUNC_9(VAR_5, VAR_15, VAR_11)) {
   VAR_11 = ((void*)0);
   continue;
  }


  VAR_7 += VAR_11->len;




  if ((VAR_11->pkt_type == VAR_2 ||
       VAR_11->pkt_type == VAR_3) &&
      FUNC_5(VAR_5->netdev->dev_addr,
         FUNC_4(VAR_11)->h_source)) {
   FUNC_3(VAR_11);
   continue;
  }


  FUNC_14(VAR_5, VAR_15, VAR_11);

  FUNC_19(VAR_4, VAR_11);


  VAR_11 = ((void*)0);


  VAR_8++;
 }


 VAR_5->skb = VAR_11;

 if (VAR_12) {
  struct ixgbevf_ring *VAR_17 =
   VAR_9->xdp_ring[VAR_5->queue_index];




  FUNC_28();
  FUNC_20(VAR_17, VAR_17->next_to_use);
 }

 FUNC_26(&VAR_5->syncp);
 VAR_5->stats.packets += VAR_8;
 VAR_5->stats.bytes += VAR_7;
 FUNC_27(&VAR_5->syncp);
 VAR_4->rx.total_packets += VAR_8;
 VAR_4->rx.total_bytes += VAR_7;

 return VAR_8;
}
