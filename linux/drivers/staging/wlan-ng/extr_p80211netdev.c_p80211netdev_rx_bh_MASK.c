
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlandevice {scalar_t__ state; int nsd_rxq; struct net_device* netdev; } ;
struct sk_buff {scalar_t__ len; int protocol; int pkt_type; int ip_summed; struct net_device* dev; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; } ;
struct net_device {scalar_t__ type; TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct wlandevice*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_5)
{
 struct wlandevice *VAR_6 = (struct wlandevice *)VAR_5;
 struct sk_buff *VAR_7 = ((void*)0);
 struct net_device *VAR_8 = VAR_6->netdev;


 while ((VAR_7 = FUNC_4(&VAR_6->nsd_rxq))) {
  if (VAR_6->state == VAR_4) {
   if (VAR_8->type != VAR_0) {




    VAR_7->dev = VAR_8;
    FUNC_5(VAR_7);
    VAR_7->ip_summed = VAR_1;
    VAR_7->pkt_type = VAR_3;
    VAR_7->protocol = FUNC_1(VAR_2);

    VAR_8->stats.rx_packets++;
    VAR_8->stats.rx_bytes += VAR_7->len;
    FUNC_2(VAR_7);
    continue;
   } else {
    if (!FUNC_3(VAR_6, VAR_7))
     continue;
   }
  }
  FUNC_0(VAR_7);
 }
}
