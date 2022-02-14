
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int queue; } ;
struct de4x5_private {int txRingSize; TYPE_2__ cache; TYPE_1__* tx_ring; scalar_t__* tx_skb; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct de4x5_private*,int) ;
 struct de4x5_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_0)
{
    struct de4x5_private *VAR_1 = FUNC_2(VAR_0);
    int VAR_2;

    for (VAR_2=0; VAR_2<VAR_1->txRingSize; VAR_2++) {
 if (VAR_1->tx_skb[VAR_2])
     FUNC_1(VAR_1, VAR_2);
 VAR_1->tx_ring[VAR_2].status = 0;
    }


    FUNC_0(&VAR_1->cache.queue);
}
