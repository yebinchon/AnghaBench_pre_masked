
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; } ;
struct TYPE_6__ {TYPE_1__ upper; } ;
union e1000_adv_rx_desc {TYPE_2__ wb; } ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; } ;
struct igb_rx_buffer {int pagecnt_bias; } ;
struct TYPE_7__ {unsigned int packets; unsigned int bytes; int alloc_failed; } ;
struct igb_ring {int rx_syncp; TYPE_3__ rx_stats; struct sk_buff* skb; int next_to_clean; } ;
struct TYPE_8__ {unsigned int total_packets; unsigned int total_bytes; struct igb_ring* ring; } ;
struct igb_q_vector {TYPE_4__ rx; int napi; } ;


 scalar_t__ VAR_0 ;
 union e1000_adv_rx_desc* FUNC_0 (struct igb_ring*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct igb_ring*,struct igb_rx_buffer*,struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct igb_ring*,scalar_t__) ;
 struct sk_buff* FUNC_4 (struct igb_ring*,struct igb_rx_buffer*,union e1000_adv_rx_desc*,unsigned int) ;
 scalar_t__ FUNC_5 (struct igb_ring*,union e1000_adv_rx_desc*,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct igb_ring*,struct igb_rx_buffer*,union e1000_adv_rx_desc*,unsigned int) ;
 scalar_t__ FUNC_7 (struct igb_ring*) ;
 struct igb_rx_buffer* FUNC_8 (struct igb_ring*,unsigned int) ;
 scalar_t__ FUNC_9 (struct igb_ring*,union e1000_adv_rx_desc*) ;
 int FUNC_10 (struct igb_ring*,union e1000_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_11 (struct igb_ring*,struct igb_rx_buffer*) ;
 unsigned int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct igb_ring*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct igb_q_vector *VAR_1, const int VAR_2)
{
 struct igb_ring *VAR_3 = VAR_1->rx.ring;
 struct sk_buff *VAR_4 = VAR_3->skb;
 unsigned int VAR_5 = 0, VAR_6 = 0;
 u16 VAR_7 = FUNC_7(VAR_3);

 while (FUNC_13(VAR_6 < VAR_2)) {
  union e1000_adv_rx_desc *VAR_8;
  struct igb_rx_buffer *VAR_9;
  unsigned int VAR_10;


  if (VAR_7 >= VAR_0) {
   FUNC_3(VAR_3, VAR_7);
   VAR_7 = 0;
  }

  VAR_8 = FUNC_0(VAR_3, VAR_3->next_to_clean);
  VAR_10 = FUNC_12(VAR_8->wb.upper.length);
  if (!VAR_10)
   break;





  FUNC_1();

  VAR_9 = FUNC_8(VAR_3, VAR_10);


  if (VAR_4)
   FUNC_2(VAR_3, VAR_9, VAR_4, VAR_10);
  else if (FUNC_15(VAR_3))
   VAR_4 = FUNC_4(VAR_3, VAR_9, VAR_8, VAR_10);
  else
   VAR_4 = FUNC_6(VAR_3, VAR_9,
      VAR_8, VAR_10);


  if (!VAR_4) {
   VAR_3->rx_stats.alloc_failed++;
   VAR_9->pagecnt_bias++;
   break;
  }

  FUNC_11(VAR_3, VAR_9);
  VAR_7++;


  if (FUNC_9(VAR_3, VAR_8))
   continue;


  if (FUNC_5(VAR_3, VAR_8, VAR_4)) {
   VAR_4 = ((void*)0);
   continue;
  }


  VAR_5 += VAR_4->len;


  FUNC_10(VAR_3, VAR_8, VAR_4);

  FUNC_14(&VAR_1->napi, VAR_4);


  VAR_4 = ((void*)0);


  VAR_6++;
 }


 VAR_3->skb = VAR_4;

 FUNC_16(&VAR_3->rx_syncp);
 VAR_3->rx_stats.packets += VAR_6;
 VAR_3->rx_stats.bytes += VAR_5;
 FUNC_17(&VAR_3->rx_syncp);
 VAR_1->rx.total_packets += VAR_6;
 VAR_1->rx.total_bytes += VAR_5;

 if (VAR_7)
  FUNC_3(VAR_3, VAR_7);

 return VAR_6;
}
