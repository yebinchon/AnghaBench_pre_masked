
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_bytes; int tx_packets; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct enc28j60_net {TYPE_2__* tx_skb; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct enc28j60_net*,int ,int ) ;
 struct enc28j60_net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, bool VAR_3)
{
 struct enc28j60_net *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3)
  VAR_2->stats.tx_errors++;
 else
  VAR_2->stats.tx_packets++;

 if (VAR_4->tx_skb) {
  if (!VAR_3)
   VAR_2->stats.tx_bytes += VAR_4->tx_skb->len;
  FUNC_0(VAR_4->tx_skb);
  VAR_4->tx_skb = ((void*)0);
 }
 FUNC_1(VAR_4, VAR_0, VAR_1);
 FUNC_3(VAR_2);
}
