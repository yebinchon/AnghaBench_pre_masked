
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct z8530_channel {TYPE_2__* netdevice; struct sk_buff* tx_skb; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct z8530_channel*) ;

__attribute__((used)) static void FUNC_2(struct z8530_channel *VAR_0)
{
 struct sk_buff *VAR_1;


 if (VAR_0->tx_skb == ((void*)0))
  return;

 VAR_1 = VAR_0->tx_skb;
 VAR_0->tx_skb = ((void*)0);
 FUNC_1(VAR_0);
 VAR_0->netdevice->stats.tx_packets++;
 VAR_0->netdevice->stats.tx_bytes += VAR_1->len;
 FUNC_0(VAR_1);
}
