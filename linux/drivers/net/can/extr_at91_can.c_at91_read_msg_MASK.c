
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {scalar_t__ can_dlc; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*,unsigned int,struct can_frame*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1, unsigned int VAR_2)
{
 struct net_device_stats *VAR_3 = &VAR_1->stats;
 struct can_frame *VAR_4;
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_4);
 if (FUNC_4(!VAR_5)) {
  VAR_3->rx_dropped++;
  return;
 }

 FUNC_1(VAR_1, VAR_2, VAR_4);

 VAR_3->rx_packets++;
 VAR_3->rx_bytes += VAR_4->can_dlc;
 FUNC_3(VAR_5);

 FUNC_2(VAR_1, VAR_0);
}
