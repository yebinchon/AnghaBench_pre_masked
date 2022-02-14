
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int length; } ;
struct TYPE_8__ {TYPE_1__ upper; } ;
union ixgbe_adv_rx_desc {TYPE_2__ wb; } ;
typedef scalar_t__ u16 ;
struct xdp_buff {scalar_t__ data; scalar_t__ data_end; scalar_t__ data_hard_start; scalar_t__ data_meta; int * rxq; } ;
struct sk_buff {scalar_t__ len; } ;
struct ixgbe_rx_buffer {int pagecnt_bias; scalar_t__ page_offset; int page; } ;
struct TYPE_11__ {unsigned int packets; unsigned int bytes; } ;
struct TYPE_9__ {int alloc_rx_buff_failed; } ;
struct ixgbe_ring {int syncp; TYPE_5__ stats; int tail; int next_to_use; TYPE_4__* netdev; TYPE_3__ rx_stats; int next_to_clean; int xdp_rxq; } ;
struct TYPE_12__ {unsigned int total_packets; unsigned int total_bytes; } ;
struct ixgbe_q_vector {TYPE_6__ rx; struct ixgbe_adapter* adapter; } ;
struct ixgbe_adapter {struct ixgbe_ring** xdp_ring; } ;
struct fcoe_hdr {int dummy; } ;
struct fcoe_crc_eof {int dummy; } ;
struct fc_frame_header {int dummy; } ;
struct TYPE_10__ {int mtu; } ;


 scalar_t__ FUNC_0 (int,unsigned int) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 union ixgbe_adv_rx_desc* FUNC_2 (struct ixgbe_ring*,int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct ixgbe_ring*,struct ixgbe_rx_buffer*,struct sk_buff*,unsigned int) ;
 int FUNC_7 (struct ixgbe_ring*,scalar_t__) ;
 struct sk_buff* FUNC_8 (struct ixgbe_ring*,struct ixgbe_rx_buffer*,struct xdp_buff*,union ixgbe_adv_rx_desc*) ;
 scalar_t__ FUNC_9 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct ixgbe_ring*,struct ixgbe_rx_buffer*,struct xdp_buff*,union ixgbe_adv_rx_desc*) ;
 scalar_t__ FUNC_11 (struct ixgbe_ring*) ;
 int FUNC_12 (struct ixgbe_adapter*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 struct ixgbe_rx_buffer* FUNC_13 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff**,unsigned int) ;
 scalar_t__ FUNC_14 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_15 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_16 (struct ixgbe_ring*,struct ixgbe_rx_buffer*,struct sk_buff*) ;
 struct sk_buff* FUNC_17 (struct ixgbe_adapter*,struct ixgbe_ring*,struct xdp_buff*) ;
 int FUNC_18 (struct ixgbe_ring*,struct ixgbe_rx_buffer*,unsigned int) ;
 scalar_t__ FUNC_19 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*) ;
 scalar_t__ FUNC_20 (struct ixgbe_ring*) ;
 int FUNC_21 (struct ixgbe_q_vector*,struct sk_buff*) ;
 unsigned int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int) ;
 scalar_t__ FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (struct ixgbe_ring*) ;
 size_t FUNC_26 () ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 () ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 () ;

__attribute__((used)) static int FUNC_32(struct ixgbe_q_vector *VAR_3,
          struct ixgbe_ring *VAR_4,
          const int VAR_5)
{
 unsigned int VAR_6 = 0, VAR_7 = 0;
 struct ixgbe_adapter *VAR_8 = VAR_3->adapter;




 u16 VAR_9 = FUNC_11(VAR_4);
 unsigned int VAR_10 = 0;
 struct xdp_buff VAR_11;

 VAR_11.rxq = &VAR_4->xdp_rxq;

 while (FUNC_23(VAR_7 < VAR_5)) {
  union ixgbe_adv_rx_desc *VAR_12;
  struct ixgbe_rx_buffer *VAR_13;
  struct sk_buff *VAR_14;
  unsigned int VAR_15;


  if (VAR_9 >= VAR_0) {
   FUNC_7(VAR_4, VAR_9);
   VAR_9 = 0;
  }

  VAR_12 = FUNC_2(VAR_4, VAR_4->next_to_clean);
  VAR_15 = FUNC_22(VAR_12->wb.upper.length);
  if (!VAR_15)
   break;





  FUNC_5();

  VAR_13 = FUNC_13(VAR_4, VAR_12, &VAR_14, VAR_15);


  if (!VAR_14) {
   VAR_11.data = FUNC_24(VAR_13->page) +
       VAR_13->page_offset;
   VAR_11.data_meta = VAR_11.data;
   VAR_11.data_hard_start = VAR_11.data -
           FUNC_20(VAR_4);
   VAR_11.data_end = VAR_11.data + VAR_15;

   VAR_14 = FUNC_17(VAR_8, VAR_4, &VAR_11);
  }

  if (FUNC_1(VAR_14)) {
   unsigned int VAR_16 = -FUNC_3(VAR_14);

   if (VAR_16 & (VAR_2 | VAR_1)) {
    VAR_10 |= VAR_16;
    FUNC_18(VAR_4, VAR_13, VAR_15);
   } else {
    VAR_13->pagecnt_bias++;
   }
   VAR_7++;
   VAR_6 += VAR_15;
  } else if (VAR_14) {
   FUNC_6(VAR_4, VAR_13, VAR_14, VAR_15);
  } else if (FUNC_25(VAR_4)) {
   VAR_14 = FUNC_8(VAR_4, VAR_13,
           &VAR_11, VAR_12);
  } else {
   VAR_14 = FUNC_10(VAR_4, VAR_13,
        &VAR_11, VAR_12);
  }


  if (!VAR_14) {
   VAR_4->rx_stats.alloc_rx_buff_failed++;
   VAR_13->pagecnt_bias++;
   break;
  }

  FUNC_16(VAR_4, VAR_13, VAR_14);
  VAR_9++;


  if (FUNC_14(VAR_4, VAR_12, VAR_14))
   continue;


  if (FUNC_9(VAR_4, VAR_12, VAR_14))
   continue;


  VAR_6 += VAR_14->len;


  FUNC_15(VAR_4, VAR_12, VAR_14);
  FUNC_21(VAR_3, VAR_14);


  VAR_7++;
 }

 if (VAR_10 & VAR_1)
  FUNC_31();

 if (VAR_10 & VAR_2) {
  struct ixgbe_ring *VAR_17 = VAR_8->xdp_ring[FUNC_26()];




  FUNC_29();
  FUNC_30(VAR_17->next_to_use, VAR_17->tail);
 }

 FUNC_27(&VAR_4->syncp);
 VAR_4->stats.packets += VAR_7;
 VAR_4->stats.bytes += VAR_6;
 FUNC_28(&VAR_4->syncp);
 VAR_3->rx.total_packets += VAR_7;
 VAR_3->rx.total_bytes += VAR_6;

 return VAR_7;
}
