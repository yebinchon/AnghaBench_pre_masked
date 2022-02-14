
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_packet_data {int tx_bytes; int rdesc_count; } ;
struct xgbe_ring {struct xgbe_packet_data packet_data; } ;
struct xgbe_desc_if {int (* map_tx_skb ) (struct xgbe_channel*,struct sk_buff*) ;} ;
struct xgbe_hw_if {int (* dev_xmit ) (struct xgbe_channel*) ;} ;
struct xgbe_prv_data {struct xgbe_channel** channel; struct xgbe_desc_if desc_if; struct xgbe_hw_if hw_if; } ;
struct xgbe_channel {struct xgbe_ring* tx_ring; int queue_index; } ;
struct sk_buff {scalar_t__ len; size_t queue_mapping; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ netdev_tx_t ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct xgbe_packet_data*,int ,int) ;
 struct netdev_queue* FUNC_3 (struct net_device*,int ) ;
 struct xgbe_prv_data* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct netdev_queue*,int ) ;
 int FUNC_6 (struct xgbe_prv_data*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct xgbe_channel*,struct sk_buff*) ;
 int FUNC_9 (struct xgbe_channel*) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (struct xgbe_channel*,struct xgbe_ring*,int ) ;
 int FUNC_11 (struct xgbe_prv_data*,struct xgbe_ring*,struct sk_buff*,struct xgbe_packet_data*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,struct xgbe_packet_data*) ;
 int FUNC_13 (struct xgbe_prv_data*,struct sk_buff*,struct xgbe_packet_data*) ;
 int FUNC_14 (struct sk_buff*,struct xgbe_packet_data*) ;
 int FUNC_15 (struct net_device*,struct sk_buff*,int) ;

__attribute__((used)) static netdev_tx_t FUNC_16(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct xgbe_prv_data *VAR_5 = FUNC_4(VAR_4);
 struct xgbe_hw_if *VAR_6 = &VAR_5->hw_if;
 struct xgbe_desc_if *VAR_7 = &VAR_5->desc_if;
 struct xgbe_channel *VAR_8;
 struct xgbe_ring *VAR_9;
 struct xgbe_packet_data *VAR_10;
 struct netdev_queue *VAR_11;
 netdev_tx_t VAR_12;

 FUNC_0("-->xgbe_xmit: skb->len = %d\n", VAR_3->len);

 VAR_8 = VAR_5->channel[VAR_3->queue_mapping];
 VAR_11 = FUNC_3(VAR_4, VAR_8->queue_index);
 VAR_9 = VAR_8->tx_ring;
 VAR_10 = &VAR_9->packet_data;

 VAR_12 = VAR_0;

 if (VAR_3->len == 0) {
  FUNC_6(VAR_5, VAR_2, VAR_4,
     "empty skb received from stack\n");
  FUNC_1(VAR_3);
  goto tx_netdev_return;
 }


 FUNC_2(VAR_10, 0, sizeof(*VAR_10));
 FUNC_11(VAR_5, VAR_9, VAR_3, VAR_10);


 VAR_12 = FUNC_10(VAR_8, VAR_9, VAR_10->rdesc_count);
 if (VAR_12)
  goto tx_netdev_return;

 VAR_12 = FUNC_12(VAR_3, VAR_10);
 if (VAR_12) {
  FUNC_6(VAR_5, VAR_2, VAR_4,
     "error processing TSO packet\n");
  FUNC_1(VAR_3);
  goto tx_netdev_return;
 }
 FUNC_14(VAR_3, VAR_10);

 if (!VAR_7->map_tx_skb(VAR_8, VAR_3)) {
  FUNC_1(VAR_3);
  goto tx_netdev_return;
 }

 FUNC_13(VAR_5, VAR_3, VAR_10);


 FUNC_5(VAR_11, VAR_10->tx_bytes);


 VAR_6->dev_xmit(VAR_8);

 if (FUNC_7(VAR_5))
  FUNC_15(VAR_4, VAR_3, 1);


 FUNC_10(VAR_8, VAR_9, VAR_1);

 VAR_12 = VAR_0;

tx_netdev_return:
 return VAR_12;
}
