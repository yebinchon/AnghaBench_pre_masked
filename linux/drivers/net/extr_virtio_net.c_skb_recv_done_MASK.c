
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct virtnet_info {struct receive_queue* rq; } ;
struct receive_queue {int napi; } ;
struct TYPE_2__ {struct virtnet_info* priv; } ;


 int FUNC_0 (int *,struct virtqueue*) ;
 size_t FUNC_1 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_2(struct virtqueue *VAR_0)
{
 struct virtnet_info *VAR_1 = VAR_0->vdev->priv;
 struct receive_queue *VAR_2 = &VAR_1->rq[FUNC_1(VAR_0)];

 FUNC_0(&VAR_2->napi, VAR_0);
}
