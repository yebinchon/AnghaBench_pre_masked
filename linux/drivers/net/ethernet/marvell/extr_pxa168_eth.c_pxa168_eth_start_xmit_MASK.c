
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_desc {int byte_cnt; int cmd_sts; int buf_ptr; } ;
struct sk_buff {int len; int data; } ;
struct pxa168_eth_private {int tx_ring_size; int tx_desc_count; TYPE_1__* pdev; struct sk_buff** tx_skb; struct tx_desc* p_tx_desc_area; } ;
struct net_device_stats {int tx_bytes; int tx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct pxa168_eth_private*) ;
 struct pxa168_eth_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct pxa168_eth_private*,int ,int) ;

__attribute__((used)) static netdev_tx_t
FUNC_9(struct sk_buff *VAR_11, struct net_device *VAR_12)
{
 struct pxa168_eth_private *VAR_13 = FUNC_3(VAR_12);
 struct net_device_stats *VAR_14 = &VAR_12->stats;
 struct tx_desc *VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_16 = FUNC_2(VAR_13);
 VAR_15 = &VAR_13->p_tx_desc_area[VAR_16];
 VAR_17 = VAR_11->len;
 VAR_13->tx_skb[VAR_16] = VAR_11;
 VAR_15->byte_cnt = VAR_17;
 VAR_15->buf_ptr = FUNC_0(&VAR_13->pdev->dev, VAR_11->data, VAR_17,
     VAR_1);

 FUNC_6(VAR_11);

 FUNC_1();
 VAR_15->cmd_sts = VAR_0 | VAR_8 | VAR_7 |
   VAR_10 | VAR_9 | VAR_6;
 FUNC_7();
 FUNC_8(VAR_13, VAR_3, VAR_5 | VAR_4);

 VAR_14->tx_bytes += VAR_17;
 VAR_14->tx_packets++;
 FUNC_5(VAR_12);
 if (VAR_13->tx_ring_size - VAR_13->tx_desc_count <= 1) {

  FUNC_4(VAR_12);
 }

 return VAR_2;
}
