
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct rx_desc {unsigned int cmd_sts; scalar_t__ byte_cnt; int buf_size; int buf_ptr; } ;
struct pxa168_eth_private {int rx_resource_err; int rx_curr_desc_q; int rx_used_desc_q; int rx_ring_size; TYPE_1__* pdev; int rx_desc_count; struct sk_buff** rx_skb; struct rx_desc* p_rx_desc_area; } ;
struct net_device_stats {int rx_errors; int rx_dropped; int rx_bytes; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct net_device*,char*) ;
 struct pxa168_eth_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_5, int VAR_6)
{
 struct pxa168_eth_private *VAR_7 = FUNC_6(VAR_5);
 struct net_device_stats *VAR_8 = &VAR_5->stats;
 unsigned int VAR_9 = 0;
 struct sk_buff *VAR_10;

 while (VAR_6-- > 0) {
  int VAR_11, VAR_12, VAR_13;
  struct rx_desc *VAR_14;
  unsigned int VAR_15;


  if (VAR_7->rx_resource_err)
   break;
  VAR_12 = VAR_7->rx_curr_desc_q;
  VAR_13 = VAR_7->rx_used_desc_q;
  VAR_14 = &VAR_7->p_rx_desc_area[VAR_12];
  VAR_15 = VAR_14->cmd_sts;
  FUNC_1();
  if (VAR_15 & (VAR_0))
   break;
  VAR_10 = VAR_7->rx_skb[VAR_12];
  VAR_7->rx_skb[VAR_12] = ((void*)0);

  VAR_11 = (VAR_12 + 1) % VAR_7->rx_ring_size;
  VAR_7->rx_curr_desc_q = VAR_11;



  if (VAR_11 == VAR_13)
   VAR_7->rx_resource_err = 1;
  VAR_7->rx_desc_count--;
  FUNC_2(&VAR_7->pdev->dev, VAR_14->buf_ptr,
     VAR_14->buf_size,
     VAR_1);
  VAR_9++;




  VAR_8->rx_packets++;
  VAR_8->rx_bytes += VAR_14->byte_cnt;




  if (((VAR_15 & (VAR_3 | VAR_4)) !=
       (VAR_3 | VAR_4))
      || (VAR_15 & VAR_2)) {

   VAR_8->rx_dropped++;
   if ((VAR_15 & (VAR_3 | VAR_4)) !=
       (VAR_3 | VAR_4)) {
    if (FUNC_4())
     FUNC_5(VAR_5,
         "Rx pkt on multiple desc\n");
   }
   if (VAR_15 & VAR_2)
    VAR_8->rx_errors++;
   FUNC_0(VAR_10);
  } else {




   FUNC_9(VAR_10, VAR_14->byte_cnt - 4);
   VAR_10->protocol = FUNC_3(VAR_10, VAR_5);
   FUNC_7(VAR_10);
  }
 }

 FUNC_8(VAR_5);
 return VAR_9;
}
