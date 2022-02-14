
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtnet_info {int max_queue_pairs; TYPE_2__* sq; TYPE_1__* rq; int dev; int refill; int config_work; } ;
struct virtio_device {struct virtnet_info* priv; } ;
struct TYPE_4__ {int napi; } ;
struct TYPE_3__ {int napi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct virtio_device *VAR_0)
{
 struct virtnet_info *VAR_1 = VAR_0->priv;
 int VAR_2;


 FUNC_1(&VAR_1->config_work);

 FUNC_5(VAR_1->dev);
 FUNC_3(VAR_1->dev);
 FUNC_6(VAR_1->dev);
 FUNC_0(&VAR_1->refill);

 if (FUNC_4(VAR_1->dev)) {
  for (VAR_2 = 0; VAR_2 < VAR_1->max_queue_pairs; VAR_2++) {
   FUNC_2(&VAR_1->rq[VAR_2].napi);
   FUNC_7(&VAR_1->sq[VAR_2].napi);
  }
 }
}
