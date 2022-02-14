
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ pkt_type; scalar_t__ data; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int tx_bytes; int tx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct canfd_frame {scalar_t__ len; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct net_device*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_4(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct canfd_frame *VAR_5 = (struct canfd_frame *)VAR_3->data;
 struct net_device_stats *VAR_6 = &VAR_4->stats;
 int VAR_7;

 if (FUNC_1(VAR_4, VAR_3))
  return VAR_0;

 VAR_6->tx_packets++;
 VAR_6->tx_bytes += VAR_5->len;


 VAR_7 = VAR_3->pkt_type == VAR_1;

 if (!VAR_2) {

  if (VAR_7) {



   VAR_6->rx_packets++;
   VAR_6->rx_bytes += VAR_5->len;
  }
  FUNC_2(VAR_3);
  return VAR_0;
 }



 if (VAR_7) {
  VAR_3 = FUNC_0(VAR_3);
  if (!VAR_3)
   return VAR_0;


  FUNC_3(VAR_3, VAR_4);
 } else {

  FUNC_2(VAR_3);
 }
 return VAR_0;
}
