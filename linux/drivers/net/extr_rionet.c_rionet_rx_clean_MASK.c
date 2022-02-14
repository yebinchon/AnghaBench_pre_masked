
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rionet_private {int rx_slot; TYPE_2__** rx_skb; int mport; } ;
struct TYPE_5__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_6__ {int protocol; void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,struct net_device*) ;
 struct rionet_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 struct rionet_private *VAR_7 = FUNC_1(VAR_4);
 void *VAR_8;

 VAR_5 = VAR_7->rx_slot;

 do {
  if (!VAR_7->rx_skb[VAR_5])
   continue;

  if (!(VAR_8 = FUNC_3(VAR_7->mport, VAR_1)))
   break;

  VAR_7->rx_skb[VAR_5]->data = VAR_8;
  FUNC_4(VAR_7->rx_skb[VAR_5], VAR_3);
  VAR_7->rx_skb[VAR_5]->protocol =
      FUNC_0(VAR_7->rx_skb[VAR_5], VAR_4);
  VAR_6 = FUNC_2(VAR_7->rx_skb[VAR_5]);

  if (VAR_6 == VAR_0) {
   VAR_4->stats.rx_dropped++;
  } else {
   VAR_4->stats.rx_packets++;
   VAR_4->stats.rx_bytes += VAR_3;
  }

 } while ((VAR_5 = (VAR_5 + 1) % VAR_2) != VAR_7->rx_slot);

 return VAR_5;
}
