
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct virtnet_info {int dev; struct send_queue* sq; } ;
struct TYPE_5__ {int weight; } ;
struct send_queue {TYPE_2__* vq; TYPE_1__ napi; } ;
struct receive_queue {TYPE_4__* vq; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_8__ {TYPE_3__* vdev; } ;
struct TYPE_7__ {struct virtnet_info* priv; } ;
struct TYPE_6__ {scalar_t__ num_free; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct netdev_queue*) ;
 int FUNC_1 (struct netdev_queue*) ;
 int FUNC_2 (struct send_queue*,int) ;
 scalar_t__ FUNC_3 (struct virtnet_info*,unsigned int) ;
 struct netdev_queue* FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct netdev_queue*) ;
 unsigned int FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_7(struct receive_queue *VAR_1)
{
 struct virtnet_info *VAR_2 = VAR_1->vq->vdev->priv;
 unsigned int VAR_3 = FUNC_6(VAR_1->vq);
 struct send_queue *VAR_4 = &VAR_2->sq[VAR_3];
 struct netdev_queue *VAR_5 = FUNC_4(VAR_2->dev, VAR_3);

 if (!VAR_4->napi.weight || FUNC_3(VAR_2, VAR_3))
  return;

 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_4, 1);
  FUNC_1(VAR_5);
 }

 if (VAR_4->vq->num_free >= 2 + VAR_0)
  FUNC_5(VAR_5);
}
