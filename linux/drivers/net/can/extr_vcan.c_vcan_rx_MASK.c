
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ip_summed; struct net_device* dev; int pkt_type; scalar_t__ data; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct canfd_frame {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct canfd_frame *VAR_4 = (struct canfd_frame *)VAR_2->data;
 struct net_device_stats *VAR_5 = &VAR_3->stats;

 VAR_5->rx_packets++;
 VAR_5->rx_bytes += VAR_4->len;

 VAR_2->pkt_type = VAR_1;
 VAR_2->dev = VAR_3;
 VAR_2->ip_summed = VAR_0;

 FUNC_0(VAR_2);
}
