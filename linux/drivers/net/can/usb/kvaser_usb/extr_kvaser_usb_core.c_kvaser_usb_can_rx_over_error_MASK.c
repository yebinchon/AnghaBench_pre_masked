
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; int rx_errors; int rx_over_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {scalar_t__ can_dlc; int * data; int can_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct net_device *VAR_3)
{
 struct net_device_stats *VAR_4 = &VAR_3->stats;
 struct can_frame *VAR_5;
 struct sk_buff *VAR_6;

 VAR_4->rx_over_errors++;
 VAR_4->rx_errors++;

 VAR_6 = FUNC_0(VAR_3, &VAR_5);
 if (!VAR_6) {
  VAR_4->rx_dropped++;
  FUNC_1(VAR_3, "No memory left for err_skb\n");
  return -VAR_2;
 }

 VAR_5->can_id |= VAR_0;
 VAR_5->data[1] = VAR_1;

 VAR_4->rx_packets++;
 VAR_4->rx_bytes += VAR_5->can_dlc;
 FUNC_2(VAR_6);

 return 0;
}
