
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ truesize; int ip_summed; int protocol; int dev; scalar_t__ data; } ;
struct mwifiex_txinfo {int flags; int bss_type; int bss_num; } ;
struct TYPE_2__ {int rx_packets; int rx_bytes; int last_rx; } ;
struct mwifiex_sta_node {TYPE_1__ stats; } ;
struct mwifiex_private {int netdev; int bss_type; int bss_num; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {scalar_t__ iface_type; int pending_bridged_pkts; int tx_pending; } ;
struct ethhdr {int h_dest; int h_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct mwifiex_txinfo* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct mwifiex_txinfo*,int ,int) ;
 int FUNC_9 (struct mwifiex_adapter*,int ,char*) ;
 struct mwifiex_sta_node* FUNC_10 (struct mwifiex_private*,int ) ;
 int FUNC_11 (struct mwifiex_adapter*) ;
 int FUNC_12 (struct mwifiex_private*) ;
 int FUNC_13 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 struct sk_buff* FUNC_16 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 struct sk_buff* FUNC_18 (struct sk_buff*,scalar_t__) ;

int FUNC_19(struct mwifiex_private *VAR_10,
       struct sk_buff *VAR_11)
{
 struct mwifiex_adapter *VAR_12 = VAR_10->adapter;
 struct mwifiex_sta_node *VAR_13;
 struct ethhdr *VAR_14;
 struct sk_buff *VAR_15;
 struct mwifiex_txinfo *VAR_16;

 if (!VAR_11)
  return -1;

 VAR_14 = (void *)VAR_11->data;
 VAR_13 = FUNC_10(VAR_10, VAR_14->h_source);
 if (VAR_13) {
  VAR_13->stats.last_rx = VAR_9;
  VAR_13->stats.rx_bytes += VAR_11->len;
  VAR_13->stats.rx_packets++;
 }

 if (FUNC_6(VAR_14->h_dest) ||
     FUNC_10(VAR_10, VAR_14->h_dest)) {
  if (FUNC_17(VAR_11) < VAR_5)
   VAR_15 =
   FUNC_18(VAR_11, VAR_5);
  else
   VAR_15 = FUNC_16(VAR_11, VAR_2);

  if (FUNC_7(VAR_15)) {
   VAR_16 = FUNC_0(VAR_15);
   FUNC_8(VAR_16, 0, sizeof(*VAR_16));
   VAR_16->bss_num = VAR_10->bss_num;
   VAR_16->bss_type = VAR_10->bss_type;
   VAR_16->flags |= VAR_4;
   FUNC_1(VAR_15);
   FUNC_13(VAR_10, VAR_15);
   FUNC_2(&VAR_12->tx_pending);
   FUNC_2(&VAR_12->pending_bridged_pkts);
   if ((FUNC_3(&VAR_12->pending_bridged_pkts) >=
     VAR_3)) {
    FUNC_9(VAR_12, VAR_1,
         "Tx: Bridge packet limit reached. Drop packet!\n");
    FUNC_12(VAR_10);
   }

  } else {
   FUNC_9(VAR_12, VAR_1, "failed to allocate skb_uap");
  }

  FUNC_11(VAR_12);

  if (FUNC_10(VAR_10, VAR_14->h_dest))
   return 0;
 }

 VAR_11->dev = VAR_10->netdev;
 VAR_11->protocol = FUNC_4(VAR_11, VAR_10->netdev);
 VAR_11->ip_summed = VAR_0;
 if ((VAR_12->iface_type == VAR_8 ||
      VAR_12->iface_type == VAR_6) &&
     VAR_11->truesize > VAR_7)
  VAR_11->truesize += (VAR_11->len - VAR_7);


 if (FUNC_5())
  FUNC_14(VAR_11);
 else
  FUNC_15(VAR_11);

 return 0;
}
