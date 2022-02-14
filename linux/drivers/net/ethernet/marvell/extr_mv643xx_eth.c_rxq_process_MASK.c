
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int protocol; int ip_summed; } ;
struct rx_queue {size_t rx_curr_desc; size_t rx_ring_size; int index; scalar_t__ rx_desc_count; struct sk_buff** rx_skb; struct rx_desc* rx_desc_area; } ;
struct rx_desc {unsigned int cmd_sts; int byte_cnt; int buf_size; int buf_ptr; } ;
struct net_device_stats {int rx_errors; int rx_dropped; int rx_bytes; int rx_packets; } ;
struct mv643xx_eth_private {int work_rx_refill; int work_rx; TYPE_2__* dev; int napi; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; struct net_device_stats stats; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 () ;
 struct mv643xx_eth_private* FUNC_7 (struct rx_queue*) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct rx_queue *VAR_7, int VAR_8)
{
 struct mv643xx_eth_private *VAR_9 = FUNC_7(VAR_7);
 struct net_device_stats *VAR_10 = &VAR_9->dev->stats;
 int VAR_11;

 VAR_11 = 0;
 while (VAR_11 < VAR_8 && VAR_7->rx_desc_count) {
  struct rx_desc *VAR_12;
  unsigned int VAR_13;
  struct sk_buff *VAR_14;
  u16 VAR_15;

  VAR_12 = &VAR_7->rx_desc_area[VAR_7->rx_curr_desc];

  VAR_13 = VAR_12->cmd_sts;
  if (VAR_13 & VAR_0)
   break;
  FUNC_6();

  VAR_14 = VAR_7->rx_skb[VAR_7->rx_curr_desc];
  VAR_7->rx_skb[VAR_7->rx_curr_desc] = ((void*)0);

  VAR_7->rx_curr_desc++;
  if (VAR_7->rx_curr_desc == VAR_7->rx_ring_size)
   VAR_7->rx_curr_desc = 0;

  FUNC_1(VAR_9->dev->dev.parent, VAR_12->buf_ptr,
     VAR_12->buf_size, VAR_2);
  VAR_7->rx_desc_count--;
  VAR_11++;

  VAR_9->work_rx_refill |= 1 << VAR_7->index;

  VAR_15 = VAR_12->byte_cnt;
  VAR_10->rx_packets++;
  VAR_10->rx_bytes += VAR_15 - 2;






  if ((VAR_13 & (VAR_5 | VAR_6 | VAR_3))
   != (VAR_5 | VAR_6))
   goto err;





  FUNC_8(VAR_14, VAR_15 - 2 - 4);

  if (VAR_13 & VAR_4)
   VAR_14->ip_summed = VAR_1;
  VAR_14->protocol = FUNC_2(VAR_14, VAR_9->dev);

  FUNC_3(&VAR_9->napi, VAR_14);

  continue;

err:
  VAR_10->rx_dropped++;

  if ((VAR_13 & (VAR_5 | VAR_6)) !=
   (VAR_5 | VAR_6)) {
   if (FUNC_4())
    FUNC_5(VAR_9->dev,
        "received packet spanning multiple descriptors\n");
  }

  if (VAR_13 & VAR_3)
   VAR_10->rx_errors++;

  FUNC_0(VAR_14);
 }

 if (VAR_11 < VAR_8)
  VAR_9->work_rx &= ~(1 << VAR_7->index);

 return VAR_11;
}
