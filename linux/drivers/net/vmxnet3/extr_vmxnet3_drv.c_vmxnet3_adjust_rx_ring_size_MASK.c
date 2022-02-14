
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t size; } ;
struct vmxnet3_rx_queue {TYPE_3__ comp_ring; TYPE_2__* rx_ring; } ;
struct vmxnet3_adapter {scalar_t__ skb_buf_size; int rx_buf_per_pkt; size_t num_rx_queues; struct vmxnet3_rx_queue* rx_queue; TYPE_1__* netdev; } ;
struct TYPE_5__ {size_t size; } ;
struct TYPE_4__ {scalar_t__ mtu; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t FUNC_0 (int ,size_t,size_t) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_adapter *VAR_8)
{
 size_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 if (VAR_8->netdev->mtu <= VAR_2 -
        VAR_1) {
  VAR_8->skb_buf_size = VAR_8->netdev->mtu +
     VAR_1;
  if (VAR_8->skb_buf_size < VAR_3)
   VAR_8->skb_buf_size = VAR_3;

  VAR_8->rx_buf_per_pkt = 1;
 } else {
  VAR_8->skb_buf_size = VAR_2;
  VAR_9 = VAR_8->netdev->mtu - VAR_2 +
         VAR_1;
  VAR_8->rx_buf_per_pkt = 1 + (VAR_9 + VAR_0 - 1) / VAR_0;
 }





 VAR_9 = VAR_8->rx_buf_per_pkt * VAR_4;
 VAR_11 = VAR_8->rx_queue[0].rx_ring[0].size;
 VAR_11 = (VAR_11 + VAR_9 - 1) / VAR_9 * VAR_9;
 VAR_11 = FUNC_0(VAR_7, VAR_11, VAR_6 /
      VAR_9 * VAR_9);
 VAR_12 = VAR_8->rx_queue[0].rx_ring[1].size;
 VAR_12 = (VAR_12 + VAR_9 - 1) / VAR_9 * VAR_9;
 VAR_12 = FUNC_0(VAR_7, VAR_12, VAR_5 /
      VAR_9 * VAR_9);
 VAR_13 = VAR_11 + VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_8->num_rx_queues; VAR_10++) {
  struct vmxnet3_rx_queue *VAR_14 = &VAR_8->rx_queue[VAR_10];

  VAR_14->rx_ring[0].size = VAR_11;
  VAR_14->rx_ring[1].size = VAR_12;
  VAR_14->comp_ring.size = VAR_13;
 }
}
