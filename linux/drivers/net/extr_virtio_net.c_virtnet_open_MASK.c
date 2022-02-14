
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtnet_info {int max_queue_pairs; int curr_queue_pairs; TYPE_1__* sq; TYPE_2__* rq; int refill; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int napi; int vq; int xdp_rxq; } ;
struct TYPE_3__ {int napi; int vq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct virtnet_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct virtnet_info*,TYPE_2__*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct virtnet_info*,int ,int *) ;
 int FUNC_5 (int *,struct net_device*,int) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2)
{
 struct virtnet_info *VAR_3 = FUNC_0(VAR_2);
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->max_queue_pairs; VAR_4++) {
  if (VAR_4 < VAR_3->curr_queue_pairs)

   if (!FUNC_2(VAR_3, &VAR_3->rq[VAR_4], VAR_0))
    FUNC_1(&VAR_3->refill, 0);

  VAR_5 = FUNC_5(&VAR_3->rq[VAR_4].xdp_rxq, VAR_2, VAR_4);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_5 = FUNC_6(&VAR_3->rq[VAR_4].xdp_rxq,
       VAR_1, ((void*)0));
  if (VAR_5 < 0) {
   FUNC_7(&VAR_3->rq[VAR_4].xdp_rxq);
   return VAR_5;
  }

  FUNC_3(VAR_3->rq[VAR_4].vq, &VAR_3->rq[VAR_4].napi);
  FUNC_4(VAR_3, VAR_3->sq[VAR_4].vq, &VAR_3->sq[VAR_4].napi);
 }

 return 0;
}
