
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int skb_iif; int tc_redirected; scalar_t__ len; } ;
struct TYPE_2__ {int rx_dropped; } ;
struct net_device {scalar_t__ tx_queue_len; TYPE_1__ stats; } ;
struct ifb_q_private {int tasklet_pending; int ifb_tasklet; int rq; int txqnum; int rsync; int rx_bytes; int rx_packets; } ;
struct ifb_dev_private {struct ifb_q_private* tx_private; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct net_device*,int ) ;
 struct ifb_dev_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct ifb_dev_private *VAR_3 = FUNC_3(VAR_2);
 struct ifb_q_private *VAR_4 = VAR_3->tx_private + FUNC_5(VAR_1);

 FUNC_8(&VAR_4->rsync);
 VAR_4->rx_packets++;
 VAR_4->rx_bytes += VAR_1->len;
 FUNC_9(&VAR_4->rsync);

 if (!VAR_1->tc_redirected || !VAR_1->skb_iif) {
  FUNC_1(VAR_1);
  VAR_2->stats.rx_dropped++;
  return VAR_0;
 }

 if (FUNC_6(&VAR_4->rq) >= VAR_2->tx_queue_len)
  FUNC_4(FUNC_2(VAR_2, VAR_4->txqnum));

 FUNC_0(&VAR_4->rq, VAR_1);
 if (!VAR_4->tasklet_pending) {
  VAR_4->tasklet_pending = 1;
  FUNC_7(&VAR_4->ifb_tasklet);
 }

 return VAR_0;
}
