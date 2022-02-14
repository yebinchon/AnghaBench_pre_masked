
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct vlan_hdr {int h_vlan_TCI; } ;
struct vlan_ethhdr {scalar_t__ h_vlan_TCI; } ;
struct sk_buff {scalar_t__ protocol; int priority; scalar_t__ data; int len; } ;
struct ixgbe_tx_buffer {int gso_segs; int tx_flags; struct sk_buff* skb; scalar_t__ protocol; int bytecount; } ;
struct TYPE_4__ {int tx_busy; } ;
struct ixgbe_ring {size_t next_to_use; int state; TYPE_2__* netdev; struct ixgbe_tx_buffer* tx_buffer_info; TYPE_1__ tx_stats; } ;
struct ixgbe_ipsec_tx_data {int member_0; } ;
struct ixgbe_adapter {int flags; int state; int ptp_tx_work; struct sk_buff* ptp_tx_skb; int tx_hwtstamp_skipped; int ptp_tx_start; scalar_t__ ptp_clock; } ;
typedef int netdev_tx_t ;
typedef int _vhdr ;
typedef scalar_t__ __be16 ;
struct TYPE_6__ {unsigned short nr_frags; int tx_flags; int * frags; } ;
struct TYPE_5__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int VAR_18 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct ixgbe_ring*,struct ixgbe_tx_buffer*) ;
 int FUNC_6 (struct ixgbe_ring*,struct ixgbe_tx_buffer*,int *) ;
 int FUNC_7 (struct ixgbe_ring*,struct ixgbe_tx_buffer*,struct ixgbe_ipsec_tx_data*) ;
 scalar_t__ FUNC_8 (struct ixgbe_ring*,scalar_t__) ;
 int FUNC_9 (struct ixgbe_ring*,struct ixgbe_tx_buffer*,int *,struct ixgbe_ipsec_tx_data*) ;
 int FUNC_10 (struct ixgbe_ring*,struct ixgbe_tx_buffer*,struct ixgbe_ipsec_tx_data*) ;
 scalar_t__ FUNC_11 (struct ixgbe_ring*,struct ixgbe_tx_buffer*,int ) ;
 int VAR_21 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (int *) ;
 struct sk_buff* FUNC_16 (struct sk_buff*) ;
 struct vlan_hdr* FUNC_17 (struct sk_buff*,int ,int,struct vlan_hdr*) ;
 int FUNC_18 (struct sk_buff*) ;
 TYPE_3__* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (int ,int *) ;
 scalar_t__ FUNC_23 (int ,int *) ;
 scalar_t__ FUNC_24 (int) ;
 scalar_t__ FUNC_25 (struct sk_buff*) ;
 scalar_t__ FUNC_26 (struct sk_buff*) ;

netdev_tx_t FUNC_27(struct sk_buff *VAR_22,
     struct ixgbe_adapter *VAR_23,
     struct ixgbe_ring *VAR_24)
{
 struct ixgbe_tx_buffer *VAR_25;
 int VAR_26;
 u32 VAR_27 = 0;
 unsigned short VAR_28;
 u16 VAR_29 = FUNC_0(FUNC_18(VAR_22));
 struct ixgbe_ipsec_tx_data VAR_30 = { 0 };
 __be16 VAR_31 = VAR_22->protocol;
 u8 VAR_32 = 0;
 for (VAR_28 = 0; VAR_28 < FUNC_19(VAR_22)->nr_frags; VAR_28++)
  VAR_29 += FUNC_0(FUNC_15(
      &FUNC_19(VAR_22)->frags[VAR_28]));

 if (FUNC_8(VAR_24, VAR_29 + 3)) {
  VAR_24->tx_stats.tx_busy++;
  return VAR_12;
 }


 VAR_25 = &VAR_24->tx_buffer_info[VAR_24->next_to_use];
 VAR_25->skb = VAR_22;
 VAR_25->bytecount = VAR_22->len;
 VAR_25->gso_segs = 1;


 if (FUNC_21(VAR_22)) {
  VAR_27 |= FUNC_20(VAR_22) << VAR_11;
  VAR_27 |= VAR_6;

 } else if (VAR_31 == FUNC_4(VAR_1)) {
  struct vlan_hdr *VAR_33, VAR_34;
  VAR_33 = FUNC_17(VAR_22, VAR_0, sizeof(VAR_34), &VAR_34);
  if (!VAR_33)
   goto out_drop;

  VAR_27 |= FUNC_12(VAR_33->h_vlan_TCI) <<
      VAR_11;
  VAR_27 |= VAR_7;
 }
 VAR_31 = FUNC_25(VAR_22);

 if (FUNC_24(FUNC_19(VAR_22)->tx_flags & VAR_16) &&
     VAR_23->ptp_clock) {
  if (!FUNC_22(VAR_19,
        &VAR_23->state)) {
   FUNC_19(VAR_22)->tx_flags |= VAR_17;
   VAR_27 |= VAR_8;


   VAR_23->ptp_tx_skb = FUNC_16(VAR_22);
   VAR_23->ptp_tx_start = VAR_21;
   FUNC_13(&VAR_23->ptp_tx_work);
  } else {
   VAR_23->tx_hwtstamp_skipped++;
  }
 }
 if ((VAR_23->flags & VAR_3) &&
     ((VAR_27 & (VAR_6 | VAR_7)) ||
      (VAR_22->priority != VAR_18))) {
  VAR_27 &= ~VAR_9;
  VAR_27 |= (VAR_22->priority & 0x7) <<
     VAR_10;
  if (VAR_27 & VAR_7) {
   struct vlan_ethhdr *VAR_35;

   if (FUNC_14(VAR_22, 0))
    goto out_drop;
   VAR_35 = (struct vlan_ethhdr *)VAR_22->data;
   VAR_35->h_vlan_TCI = FUNC_4(VAR_27 >>
       VAR_11);
  } else {
   VAR_27 |= VAR_6;
  }
 }


 VAR_25->tx_flags = VAR_27;
 VAR_25->protocol = VAR_31;
 VAR_26 = FUNC_9(VAR_24, VAR_25, &VAR_32, &VAR_30);
 if (VAR_26 < 0)
  goto out_drop;
 else if (!VAR_26)
  FUNC_10(VAR_24, VAR_25, &VAR_30);


 if (FUNC_23(VAR_20, &VAR_24->state))
  FUNC_5(VAR_24, VAR_25);




 if (FUNC_11(VAR_24, VAR_25, VAR_32))
  goto cleanup_tx_timestamp;

 return VAR_13;

out_drop:
 FUNC_3(VAR_25->skb);
 VAR_25->skb = ((void*)0);
cleanup_tx_timestamp:
 if (FUNC_24(VAR_27 & VAR_8)) {
  FUNC_3(VAR_23->ptp_tx_skb);
  VAR_23->ptp_tx_skb = ((void*)0);
  FUNC_1(&VAR_23->ptp_tx_work);
  FUNC_2(VAR_19, &VAR_23->state);
 }

 return VAR_13;
}
