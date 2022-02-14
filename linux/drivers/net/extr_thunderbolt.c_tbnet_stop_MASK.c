
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ring; } ;
struct TYPE_3__ {int * ring; } ;
struct tbnet {TYPE_2__ tx_ring; TYPE_1__ rx_ring; int disconnect_work; int napi; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tbnet* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tbnet*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct tbnet *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->napi);

 FUNC_0(&VAR_1->disconnect_work);
 FUNC_4(VAR_1, 1);

 FUNC_3(VAR_1->rx_ring.ring);
 VAR_1->rx_ring.ring = ((void*)0);
 FUNC_3(VAR_1->tx_ring.ring);
 VAR_1->tx_ring.ring = ((void*)0);

 return 0;
}
