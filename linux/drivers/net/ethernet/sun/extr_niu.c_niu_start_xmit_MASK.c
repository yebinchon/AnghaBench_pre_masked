
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u64 ;
struct tx_ring_info {int prod; scalar_t__ mark_counter; scalar_t__ mark_freq; int wrap_bit; int tx_errors; int tx_channel; TYPE_2__* tx_buffs; int mark_pending; } ;
struct tx_pkt_hdr {scalar_t__ resv; int flags; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct niu {int device; TYPE_1__* ops; struct tx_ring_info* tx_rings; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int name; } ;
struct ethhdr {int dummy; } ;
typedef int skb_frag_t ;
typedef int netdev_tx_t ;
struct TYPE_6__ {int nr_frags; int * frags; } ;
struct TYPE_5__ {unsigned int mapping; struct sk_buff* skb; } ;
struct TYPE_4__ {unsigned int (* map_single ) (int ,scalar_t__,unsigned int,int ) ;unsigned int (* map_page ) (int ,int ,int ,unsigned int,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tx_ring_info*,int) ;
 scalar_t__ FUNC_1 (struct tx_ring_info*) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct netdev_queue* FUNC_7 (struct net_device*,int) ;
 struct niu* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct netdev_queue*) ;
 int FUNC_10 (struct netdev_queue*) ;
 int FUNC_11 (struct sk_buff*,struct ethhdr*,unsigned long,unsigned int) ;
 int FUNC_12 (struct tx_ring_info*,int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_13 (struct tx_ring_info*) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int const*) ;
 int FUNC_16 (int const*) ;
 unsigned int FUNC_17 (int const*) ;
 int FUNC_18 (struct sk_buff*) ;
 unsigned int FUNC_19 (struct sk_buff*) ;
 unsigned int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 struct tx_pkt_hdr* FUNC_22 (struct sk_buff*,unsigned long) ;
 struct sk_buff* FUNC_23 (struct sk_buff*,unsigned int) ;
 TYPE_3__* FUNC_24 (struct sk_buff*) ;
 unsigned int FUNC_25 (int ,scalar_t__,unsigned int,int ) ;
 unsigned int FUNC_26 (int ,int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_27 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_28(struct sk_buff *VAR_8,
      struct net_device *VAR_9)
{
 struct niu *VAR_10 = FUNC_8(VAR_9);
 unsigned long VAR_11, VAR_12;
 struct netdev_queue *VAR_13;
 struct tx_ring_info *VAR_14;
 struct tx_pkt_hdr *VAR_15;
 unsigned int VAR_16, VAR_17;
 struct ethhdr *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 u64 VAR_22, VAR_23;

 VAR_20 = FUNC_18(VAR_8);
 VAR_14 = &VAR_10->tx_rings[VAR_20];
 VAR_13 = FUNC_7(VAR_9, VAR_20);

 if (FUNC_13(VAR_14) <= (FUNC_24(VAR_8)->nr_frags + 1)) {
  FUNC_9(VAR_13);
  FUNC_4(VAR_10->device, "%s: BUG! Tx ring full when queue awake!\n", VAR_9->name);
  VAR_14->tx_errors++;
  return VAR_3;
 }

 if (FUNC_5(VAR_8))
  goto out;

 VAR_16 = sizeof(struct tx_pkt_hdr) + 15;
 if (FUNC_20(VAR_8) < VAR_16) {
  struct sk_buff *VAR_24;

  VAR_24 = FUNC_23(VAR_8, VAR_16);
  if (!VAR_24)
   goto out_drop;
  FUNC_6(VAR_8);
  VAR_8 = VAR_24;
 } else
  FUNC_21(VAR_8);

 VAR_11 = ((unsigned long) VAR_8->data & (16 - 1));
 VAR_12 = VAR_11 + sizeof(struct tx_pkt_hdr);

 VAR_18 = (struct ethhdr *) VAR_8->data;
 VAR_15 = FUNC_22(VAR_8, VAR_12);

 VAR_16 = VAR_8->len - sizeof(struct tx_pkt_hdr);
 VAR_15->flags = FUNC_3(FUNC_11(VAR_8, VAR_18, VAR_11, VAR_16));
 VAR_15->resv = 0;

 VAR_16 = FUNC_19(VAR_8);
 VAR_22 = VAR_10->ops->map_single(VAR_10->device, VAR_8->data,
          VAR_16, VAR_0);

 VAR_19 = VAR_14->prod;

 VAR_14->tx_buffs[VAR_19].skb = VAR_8;
 VAR_14->tx_buffs[VAR_19].mapping = VAR_22;

 VAR_23 = VAR_6;
 if (++VAR_14->mark_counter == VAR_14->mark_freq) {
  VAR_14->mark_counter = 0;
  VAR_23 |= VAR_5;
  VAR_14->mark_pending++;
 }

 VAR_21 = VAR_16;
 VAR_17 = FUNC_24(VAR_8)->nr_frags;
 while (VAR_21 > 0) {
  VAR_21 -= VAR_2;
  VAR_17++;
 }

 while (VAR_16 > 0) {
  unsigned int VAR_25 = VAR_16;

  if (VAR_25 > VAR_2)
   VAR_25 = VAR_2;

  FUNC_12(VAR_14, VAR_19, VAR_22, VAR_25, VAR_23, VAR_17);
  VAR_23 = VAR_17 = 0;

  VAR_19 = FUNC_0(VAR_14, VAR_19);
  VAR_22 += VAR_25;
  VAR_16 -= VAR_25;
 }

 for (VAR_20 = 0; VAR_20 < FUNC_24(VAR_8)->nr_frags; VAR_20++) {
  const skb_frag_t *VAR_26 = &FUNC_24(VAR_8)->frags[VAR_20];

  VAR_16 = FUNC_17(VAR_26);
  VAR_22 = VAR_10->ops->map_page(VAR_10->device, FUNC_16(VAR_26),
         FUNC_15(VAR_26), VAR_16,
         VAR_0);

  VAR_14->tx_buffs[VAR_19].skb = ((void*)0);
  VAR_14->tx_buffs[VAR_19].mapping = VAR_22;

  FUNC_12(VAR_14, VAR_19, VAR_22, VAR_16, 0, 0);

  VAR_19 = FUNC_0(VAR_14, VAR_19);
 }

 if (VAR_19 < VAR_14->prod)
  VAR_14->wrap_bit ^= VAR_7;
 VAR_14->prod = VAR_19;

 FUNC_14(FUNC_2(VAR_14->tx_channel), VAR_14->wrap_bit | (VAR_19 << 3));

 if (FUNC_27(FUNC_13(VAR_14) <= (VAR_1 + 1))) {
  FUNC_9(VAR_13);
  if (FUNC_13(VAR_14) > FUNC_1(VAR_14))
   FUNC_10(VAR_13);
 }

out:
 return VAR_4;

out_drop:
 VAR_14->tx_errors++;
 FUNC_6(VAR_8);
 goto out;
}
