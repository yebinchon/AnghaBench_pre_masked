
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxcan_priv {int peer; } ;
struct sk_buff {int ip_summed; struct net_device* dev; int pkt_type; scalar_t__ csum_start; scalar_t__ data; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int tx_bytes; int tx_packets; int tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct canfd_frame {scalar_t__ len; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct net_device*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct vxcan_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 struct net_device* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct vxcan_priv *VAR_6 = FUNC_3(VAR_5);
 struct net_device *VAR_7;
 struct canfd_frame *VAR_8 = (struct canfd_frame *)VAR_4->data;
 struct net_device_stats *VAR_9, *VAR_10 = &VAR_5->stats;

 if (FUNC_1(VAR_5, VAR_4))
  return VAR_1;

 FUNC_6();
 VAR_7 = FUNC_5(VAR_6->peer);
 if (FUNC_8(!VAR_7)) {
  FUNC_2(VAR_4);
  VAR_5->stats.tx_dropped++;
  goto out_unlock;
 }

 VAR_4 = FUNC_0(VAR_4);
 if (!VAR_4)
  goto out_unlock;


 VAR_4->csum_start = 0;
 VAR_4->pkt_type = VAR_3;
 VAR_4->dev = VAR_7;
 VAR_4->ip_summed = VAR_0;

 if (FUNC_4(VAR_4) == VAR_2) {
  VAR_10->tx_packets++;
  VAR_10->tx_bytes += VAR_8->len;
  VAR_9 = &VAR_7->stats;
  VAR_9->rx_packets++;
  VAR_9->rx_bytes += VAR_8->len;
 }

out_unlock:
 FUNC_7();
 return VAR_1;
}
