
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ len; int data; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int ihl; } ;
struct bnx2_tx_ring_info {size_t tx_prod; struct bnx2_sw_tx_bd* tx_buf_ring; int tx_prod_bseq; int tx_bseq_addr; int tx_bidx_addr; struct bnx2_tx_bd* tx_desc_ring; } ;
struct bnx2_tx_bd {int tx_bd_haddr_hi; int tx_bd_haddr_lo; int tx_bd_mss_nbytes; int tx_bd_vlan_tag_flags; } ;
struct bnx2_sw_tx_bd {int nr_frags; struct sk_buff* skb; int is_gso; } ;
struct bnx2_napi {struct bnx2_tx_ring_info tx_ring; } ;
struct bnx2 {scalar_t__ tx_wake_thresh; TYPE_1__* pdev; struct bnx2_napi* bnx2_napi; } ;
typedef int const skb_frag_t ;
typedef int netdev_tx_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {scalar_t__ nr_frags; int gso_size; int gso_type; int const* frags; } ;
struct TYPE_3__ {int dev; } ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (struct bnx2*,int ,int ) ;
 int FUNC_3 (struct bnx2*,int ,size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_4 (struct bnx2*,struct bnx2_tx_ring_info*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int *,int ,int,int ) ;
 scalar_t__ FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (struct bnx2_sw_tx_bd*,scalar_t__) ;
 int FUNC_9 (struct bnx2_sw_tx_bd*,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *,int ,int,int ) ;
 int FUNC_11 (int *,int ,int,int ) ;
 struct iphdr* FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct net_device*,char*) ;
 struct netdev_queue* FUNC_15 (struct net_device*,int) ;
 struct bnx2* FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct netdev_queue*,scalar_t__) ;
 int FUNC_18 (struct netdev_queue*) ;
 int FUNC_19 (struct netdev_queue*) ;
 scalar_t__ FUNC_20 (int *,int const*,int ,int,int ) ;
 int FUNC_21 (int const*) ;
 int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 TYPE_2__* FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (struct sk_buff*) ;
 int FUNC_27 (struct sk_buff*) ;
 scalar_t__ FUNC_28 (struct sk_buff*) ;
 int FUNC_29 () ;
 int FUNC_30 (struct sk_buff*) ;
 scalar_t__ FUNC_31 (int) ;
 int FUNC_32 () ;

__attribute__((used)) static netdev_tx_t
FUNC_33(struct sk_buff *VAR_18, struct net_device *VAR_19)
{
 struct bnx2 *VAR_20 = FUNC_16(VAR_19);
 dma_addr_t VAR_21;
 struct bnx2_tx_bd *VAR_22;
 struct bnx2_sw_tx_bd *VAR_23;
 u32 VAR_24, VAR_25, VAR_26, VAR_27;
 u16 VAR_28, VAR_29;
 int VAR_30;
 struct bnx2_napi *VAR_31;
 struct bnx2_tx_ring_info *VAR_32;
 struct netdev_queue *VAR_33;


 VAR_30 = FUNC_22(VAR_18);
 VAR_31 = &VAR_20->bnx2_napi[VAR_30];
 VAR_32 = &VAR_31->tx_ring;
 VAR_33 = FUNC_15(VAR_19, VAR_30);

 if (FUNC_31(FUNC_4(VAR_20, VAR_32) <
     (FUNC_25(VAR_18)->nr_frags + 1))) {
  FUNC_18(VAR_33);
  FUNC_14(VAR_19, "BUG! Tx ring full when queue awake!\n");

  return VAR_4;
 }
 VAR_24 = FUNC_23(VAR_18);
 VAR_28 = VAR_32->tx_prod;
 VAR_29 = FUNC_1(VAR_28);

 VAR_25 = 0;
 if (VAR_18->ip_summed == VAR_0) {
  VAR_25 |= VAR_15;
 }

 if (FUNC_28(VAR_18)) {
  VAR_25 |=
   (VAR_16 | (FUNC_27(VAR_18) << 16));
 }

 if ((VAR_27 = FUNC_25(VAR_18)->gso_size)) {
  u32 VAR_34;
  struct iphdr *VAR_35;

  VAR_25 |= VAR_11;

  VAR_34 = FUNC_30(VAR_18);

  if (FUNC_25(VAR_18)->gso_type & VAR_7) {
   u32 VAR_36 = FUNC_26(VAR_18) -
          sizeof(struct ipv6hdr) - VAR_2;

   VAR_25 |= ((VAR_34 >> 2) << 8) |
       VAR_10;
   if (FUNC_13(VAR_36 == 0))
    VAR_25 &= ~VAR_12;
   else {
    VAR_36 >>= 3;
    VAR_25 |= ((VAR_36 & 0x3) <<
         VAR_13) |
        ((VAR_36 & 0x10) <<
         VAR_14);
    VAR_27 |= (VAR_36 & 0xc) << VAR_17;
   }
  } else {
   VAR_35 = FUNC_12(VAR_18);
   if (VAR_34 || (VAR_35->ihl > 5)) {
    VAR_25 |= ((VAR_35->ihl - 5) +
         (VAR_34 >> 2)) << 8;
   }
  }
 } else
  VAR_27 = 0;

 VAR_21 = FUNC_6(&VAR_20->pdev->dev, VAR_18->data, VAR_24, VAR_6);
 if (FUNC_7(&VAR_20->pdev->dev, VAR_21)) {
  FUNC_5(VAR_18);
  return VAR_5;
 }

 VAR_23 = &VAR_32->tx_buf_ring[VAR_29];
 VAR_23->skb = VAR_18;
 FUNC_9(VAR_23, VAR_21, VAR_21);

 VAR_22 = &VAR_32->tx_desc_ring[VAR_29];

 VAR_22->tx_bd_haddr_hi = (u64) VAR_21 >> 32;
 VAR_22->tx_bd_haddr_lo = (u64) VAR_21 & 0xffffffff;
 VAR_22->tx_bd_mss_nbytes = VAR_24 | (VAR_27 << 16);
 VAR_22->tx_bd_vlan_tag_flags = VAR_25 | VAR_9;

 VAR_26 = FUNC_25(VAR_18)->nr_frags;
 VAR_23->nr_frags = VAR_26;
 VAR_23->is_gso = FUNC_24(VAR_18);

 for (VAR_30 = 0; VAR_30 < VAR_26; VAR_30++) {
  const skb_frag_t *VAR_37 = &FUNC_25(VAR_18)->frags[VAR_30];

  VAR_28 = FUNC_0(VAR_28);
  VAR_29 = FUNC_1(VAR_28);
  VAR_22 = &VAR_32->tx_desc_ring[VAR_29];

  VAR_24 = FUNC_21(VAR_37);
  VAR_21 = FUNC_20(&VAR_20->pdev->dev, VAR_37, 0, VAR_24,
        VAR_1);
  if (FUNC_7(&VAR_20->pdev->dev, VAR_21))
   goto dma_error;
  FUNC_9(&VAR_32->tx_buf_ring[VAR_29], VAR_21,
       VAR_21);

  VAR_22->tx_bd_haddr_hi = (u64) VAR_21 >> 32;
  VAR_22->tx_bd_haddr_lo = (u64) VAR_21 & 0xffffffff;
  VAR_22->tx_bd_mss_nbytes = VAR_24 | (VAR_27 << 16);
  VAR_22->tx_bd_vlan_tag_flags = VAR_25;

 }
 VAR_22->tx_bd_vlan_tag_flags |= VAR_8;


 FUNC_32();

 FUNC_17(VAR_33, VAR_18->len);

 VAR_28 = FUNC_0(VAR_28);
 VAR_32->tx_prod_bseq += VAR_18->len;

 FUNC_3(VAR_20, VAR_32->tx_bidx_addr, VAR_28);
 FUNC_2(VAR_20, VAR_32->tx_bseq_addr, VAR_32->tx_prod_bseq);

 VAR_32->tx_prod = VAR_28;

 if (FUNC_31(FUNC_4(VAR_20, VAR_32) <= VAR_3)) {
  FUNC_18(VAR_33);






  FUNC_29();
  if (FUNC_4(VAR_20, VAR_32) > VAR_20->tx_wake_thresh)
   FUNC_19(VAR_33);
 }

 return VAR_5;
dma_error:

 VAR_26 = VAR_30;


 VAR_28 = VAR_32->tx_prod;
 VAR_29 = FUNC_1(VAR_28);
 VAR_23 = &VAR_32->tx_buf_ring[VAR_29];
 VAR_23->skb = ((void*)0);
 FUNC_11(&VAR_20->pdev->dev, FUNC_8(VAR_23, VAR_21),
    FUNC_23(VAR_18), VAR_6);


 for (VAR_30 = 0; VAR_30 < VAR_26; VAR_30++) {
  VAR_28 = FUNC_0(VAR_28);
  VAR_29 = FUNC_1(VAR_28);
  VAR_23 = &VAR_32->tx_buf_ring[VAR_29];
  FUNC_10(&VAR_20->pdev->dev, FUNC_8(VAR_23, VAR_21),
          FUNC_21(&FUNC_25(VAR_18)->frags[VAR_30]),
          VAR_6);
 }

 FUNC_5(VAR_18);
 return VAR_5;
}
