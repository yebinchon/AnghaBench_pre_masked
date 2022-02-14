
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pkt_info {int tx_bytes; int desc_count; } ;
struct xlgmac_ring {struct xlgmac_pkt_info pkt_info; } ;
struct xlgmac_hw_ops {int (* dev_xmit ) (struct xlgmac_channel*) ;} ;
struct xlgmac_desc_ops {int (* map_tx_skb ) (struct xlgmac_channel*,struct sk_buff*) ;} ;
struct xlgmac_pdata {struct xlgmac_channel* channel_head; struct xlgmac_hw_ops hw_ops; struct xlgmac_desc_ops desc_ops; } ;
struct xlgmac_channel {struct xlgmac_ring* tx_ring; int queue_index; } ;
struct sk_buff {scalar_t__ len; int queue_mapping; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct xlgmac_pkt_info*,int ,int) ;
 struct netdev_queue* FUNC_3 (struct net_device*,int ) ;
 struct xlgmac_pdata* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct netdev_queue*,int ) ;
 int FUNC_6 (struct xlgmac_pdata*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_7 (struct xlgmac_pdata*) ;
 int FUNC_8 (struct xlgmac_channel*,struct sk_buff*) ;
 int FUNC_9 (struct xlgmac_channel*) ;
 int VAR_2 ;
 int FUNC_10 (struct xlgmac_channel*,struct xlgmac_ring*,int ) ;
 int FUNC_11 (struct sk_buff*,struct xlgmac_pkt_info*) ;
 int FUNC_12 (struct xlgmac_pdata*,struct xlgmac_ring*,struct sk_buff*,struct xlgmac_pkt_info*) ;
 int FUNC_13 (struct sk_buff*,struct xlgmac_pkt_info*) ;
 int FUNC_14 (struct net_device*,struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct xlgmac_pdata *VAR_5 = FUNC_4(VAR_4);
 struct xlgmac_pkt_info *VAR_6;
 struct xlgmac_desc_ops *VAR_7;
 struct xlgmac_channel *VAR_8;
 struct xlgmac_hw_ops *VAR_9;
 struct netdev_queue *VAR_10;
 struct xlgmac_ring *VAR_11;
 int VAR_12;

 VAR_7 = &VAR_5->desc_ops;
 VAR_9 = &VAR_5->hw_ops;

 FUNC_0("skb->len = %d\n", VAR_3->len);

 VAR_8 = VAR_5->channel_head + VAR_3->queue_mapping;
 VAR_10 = FUNC_3(VAR_4, VAR_8->queue_index);
 VAR_11 = VAR_8->tx_ring;
 VAR_6 = &VAR_11->pkt_info;

 if (VAR_3->len == 0) {
  FUNC_6(VAR_5, VAR_2, VAR_4,
     "empty skb received from stack\n");
  FUNC_1(VAR_3);
  return VAR_0;
 }


 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 FUNC_12(VAR_5, VAR_11, VAR_3, VAR_6);


 VAR_12 = FUNC_10(VAR_8, VAR_11,
      VAR_6->desc_count);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_11(VAR_3, VAR_6);
 if (VAR_12) {
  FUNC_6(VAR_5, VAR_2, VAR_4,
     "error processing TSO packet\n");
  FUNC_1(VAR_3);
  return VAR_12;
 }
 FUNC_13(VAR_3, VAR_6);

 if (!VAR_7->map_tx_skb(VAR_8, VAR_3)) {
  FUNC_1(VAR_3);
  return VAR_0;
 }


 FUNC_5(VAR_10, VAR_6->tx_bytes);


 VAR_9->dev_xmit(VAR_8);

 if (FUNC_7(VAR_5))
  FUNC_14(VAR_4, VAR_3, 1);


 FUNC_10(VAR_8, VAR_11, VAR_1);

 return VAR_0;
}
