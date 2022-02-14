
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ truesize; int ip_summed; int protocol; int dev; scalar_t__ data; } ;
struct TYPE_5__ {int rx_packets; int rx_bytes; int last_rx; } ;
struct mwifiex_sta_node {TYPE_2__ stats; } ;
struct TYPE_4__ {int rx_packets; int rx_bytes; } ;
struct mwifiex_private {TYPE_3__* adapter; int netdev; TYPE_1__ stats; } ;
struct ethhdr {int h_source; } ;
struct TYPE_6__ {scalar_t__ iface_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_5 ;
 struct mwifiex_sta_node* FUNC_3 (struct mwifiex_private*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct mwifiex_private *VAR_6, struct sk_buff *VAR_7)
{
 struct mwifiex_sta_node *VAR_8;
 struct ethhdr *VAR_9;

 if (!VAR_7)
  return -1;

 VAR_6->stats.rx_bytes += VAR_7->len;
 VAR_6->stats.rx_packets++;

 if (FUNC_0(VAR_6) == VAR_1) {
  VAR_9 = (void *)VAR_7->data;
  VAR_8 = FUNC_3(VAR_6, VAR_9->h_source);
  if (VAR_8) {
   VAR_8->stats.last_rx = VAR_5;
   VAR_8->stats.rx_bytes += VAR_7->len;
   VAR_8->stats.rx_packets++;
  }
 }

 VAR_7->dev = VAR_6->netdev;
 VAR_7->protocol = FUNC_1(VAR_7, VAR_6->netdev);
 VAR_7->ip_summed = VAR_0;
 if ((VAR_6->adapter->iface_type == VAR_4 ||
      VAR_6->adapter->iface_type == VAR_2) &&
     (VAR_7->truesize > VAR_3))
  VAR_7->truesize += (VAR_7->len - VAR_3);

 if (FUNC_2())
  FUNC_4(VAR_7);
 else
  FUNC_5(VAR_7);

 return 0;
}
