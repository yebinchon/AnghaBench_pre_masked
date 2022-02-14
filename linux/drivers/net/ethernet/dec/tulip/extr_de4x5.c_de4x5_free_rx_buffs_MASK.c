
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct de4x5_private {int rxRingSize; struct sk_buff** rx_skb; TYPE_1__* rx_ring; } ;
struct TYPE_2__ {scalar_t__ status; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_0)
{
    struct de4x5_private *VAR_1 = FUNC_1(VAR_0);
    int VAR_2;

    for (VAR_2=0; VAR_2<VAR_1->rxRingSize; VAR_2++) {
 if ((u_long) VAR_1->rx_skb[VAR_2] > 1) {
     FUNC_0(VAR_1->rx_skb[VAR_2]);
 }
 VAR_1->rx_ring[VAR_2].status = 0;
 VAR_1->rx_skb[VAR_2] = (struct sk_buff *)1;
    }
}
