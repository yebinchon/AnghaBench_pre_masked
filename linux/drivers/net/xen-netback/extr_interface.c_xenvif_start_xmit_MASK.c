
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u16 ;
struct xenvif_rx_cb {scalar_t__ expires; } ;
struct xenvif_queue {int * dealloc_task; int * task; } ;
struct TYPE_4__ {scalar_t__ alg; } ;
struct xenvif {TYPE_3__* dev; TYPE_1__ hash; scalar_t__ drain_timeout; scalar_t__ multicast_control; struct xenvif_queue* queues; int num_queues; } ;
struct sk_buff {scalar_t__ pkt_type; scalar_t__ data; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct ethhdr {int h_dest; } ;
typedef int netdev_tx_t ;
struct TYPE_5__ {int tx_dropped; } ;
struct TYPE_6__ {TYPE_2__ stats; int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 struct xenvif_rx_cb* FUNC_2 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 struct xenvif* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,unsigned int,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 unsigned int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct xenvif_queue*) ;
 int FUNC_9 (struct xenvif*,int ) ;
 int FUNC_10 (struct xenvif_queue*,struct sk_buff*) ;
 int FUNC_11 (struct xenvif*) ;

__attribute__((used)) static netdev_tx_t
FUNC_12(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct xenvif *VAR_6 = FUNC_4(VAR_5);
 struct xenvif_queue *VAR_7 = ((void*)0);
 unsigned int VAR_8;
 u16 VAR_9;
 struct xenvif_rx_cb *VAR_10;

 FUNC_0(VAR_4->dev != VAR_5);





 VAR_8 = FUNC_1(VAR_6->num_queues);
 if (VAR_8 < 1)
  goto drop;


 VAR_9 = FUNC_7(VAR_4);
 if (VAR_9 >= VAR_8) {
  FUNC_5("Invalid queue %hu for packet on interface %s\n",
        VAR_9, VAR_6->dev->name);
  VAR_9 %= VAR_8;
 }
 VAR_7 = &VAR_6->queues[VAR_9];


 if (VAR_7->task == ((void*)0) ||
     VAR_7->dealloc_task == ((void*)0) ||
     !FUNC_11(VAR_6))
  goto drop;

 if (VAR_6->multicast_control && VAR_4->pkt_type == VAR_1) {
  struct ethhdr *VAR_11 = (struct ethhdr *)VAR_4->data;

  if (!FUNC_9(VAR_6, VAR_11->h_dest))
   goto drop;
 }

 VAR_10 = FUNC_2(VAR_4);
 VAR_10->expires = VAR_3 + VAR_6->drain_timeout;





 if (VAR_6->hash.alg == VAR_2)
  FUNC_6(VAR_4);

 FUNC_10(VAR_7, VAR_4);
 FUNC_8(VAR_7);

 return VAR_0;

 drop:
 VAR_6->dev->stats.tx_dropped++;
 FUNC_3(VAR_4);
 return VAR_0;
}
