
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_local {TYPE_2__* deferred_skb; } ;
struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ data; } ;


 int FUNC_0 (TYPE_2__*) ;
 struct net_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_local*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct net_local *VAR_1 = FUNC_1(VAR_0);

 VAR_0->stats.tx_packets++;

 if (!VAR_1->deferred_skb)
  return;

 if (FUNC_4(VAR_1, (u8 *)VAR_1->deferred_skb->data,
    VAR_1->deferred_skb->len))
  return;

 VAR_0->stats.tx_bytes += VAR_1->deferred_skb->len;
 FUNC_0(VAR_1->deferred_skb);
 VAR_1->deferred_skb = ((void*)0);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
}
