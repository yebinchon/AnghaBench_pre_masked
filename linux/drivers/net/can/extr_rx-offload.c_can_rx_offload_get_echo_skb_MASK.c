
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int tx_fifo_errors; int rx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_rx_offload {struct net_device* dev; } ;


 struct sk_buff* FUNC_0 (struct net_device*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct can_rx_offload*,struct sk_buff*,int ) ;

unsigned int FUNC_2(struct can_rx_offload *VAR_0,
      unsigned int VAR_1, u32 VAR_2)
{
 struct net_device *VAR_3 = VAR_0->dev;
 struct net_device_stats *VAR_4 = &VAR_3->stats;
 struct sk_buff *VAR_5;
 u8 VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_3, VAR_1, &VAR_6);
 if (!VAR_5)
  return 0;

 VAR_7 = FUNC_1(VAR_0, VAR_5, VAR_2);
 if (VAR_7) {
  VAR_4->rx_errors++;
  VAR_4->tx_fifo_errors++;
 }

 return VAR_6;
}
