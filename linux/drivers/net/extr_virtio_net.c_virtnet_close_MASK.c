
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtnet_info {int max_queue_pairs; TYPE_1__* sq; TYPE_2__* rq; int refill; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int napi; int xdp_rxq; } ;
struct TYPE_3__ {int napi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct virtnet_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct virtnet_info *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;


 FUNC_0(&VAR_1->refill);

 for (VAR_2 = 0; VAR_2 < VAR_1->max_queue_pairs; VAR_2++) {
  FUNC_4(&VAR_1->rq[VAR_2].xdp_rxq);
  FUNC_1(&VAR_1->rq[VAR_2].napi);
  FUNC_3(&VAR_1->sq[VAR_2].napi);
 }

 return 0;
}
