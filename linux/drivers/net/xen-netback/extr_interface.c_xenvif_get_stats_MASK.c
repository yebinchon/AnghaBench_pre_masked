
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_3__ {scalar_t__ tx_packets; scalar_t__ tx_bytes; scalar_t__ rx_packets; scalar_t__ rx_bytes; } ;
struct xenvif_queue {TYPE_1__ stats; } ;
struct xenvif {TYPE_2__* dev; struct xenvif_queue* queues; int num_queues; } ;
struct net_device_stats {void* tx_packets; void* tx_bytes; void* rx_packets; void* rx_bytes; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct net_device_stats stats; } ;


 unsigned int FUNC_0 (int ) ;
 struct xenvif* FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static struct net_device_stats *FUNC_4(struct net_device *VAR_0)
{
 struct xenvif *VAR_1 = FUNC_1(VAR_0);
 struct xenvif_queue *VAR_2 = ((void*)0);
 unsigned int VAR_3;
 u64 VAR_4 = 0;
 u64 VAR_5 = 0;
 u64 VAR_6 = 0;
 u64 VAR_7 = 0;
 unsigned int VAR_8;

 FUNC_2();
 VAR_3 = FUNC_0(VAR_1->num_queues);


 for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
  VAR_2 = &VAR_1->queues[VAR_8];
  VAR_4 += VAR_2->stats.rx_bytes;
  VAR_5 += VAR_2->stats.rx_packets;
  VAR_6 += VAR_2->stats.tx_bytes;
  VAR_7 += VAR_2->stats.tx_packets;
 }

 FUNC_3();

 VAR_1->dev->stats.rx_bytes = VAR_4;
 VAR_1->dev->stats.rx_packets = VAR_5;
 VAR_1->dev->stats.tx_bytes = VAR_6;
 VAR_1->dev->stats.tx_packets = VAR_7;

 return &VAR_1->dev->stats;
}
