
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtnet_info {int curr_queue_pairs; int max_queue_pairs; int dev; TYPE_1__* sq; TYPE_2__* rq; int refill; } ;
struct virtio_device {struct virtnet_info* priv; } ;
struct TYPE_4__ {int napi; int vq; } ;
struct TYPE_3__ {int napi; int vq; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtnet_info*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct virtnet_info*,TYPE_2__*,int ) ;
 int FUNC_7 (struct virtio_device*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct virtnet_info*,int ,int *) ;

__attribute__((used)) static int FUNC_10(struct virtio_device *VAR_1)
{
 struct virtnet_info *VAR_2 = VAR_1->priv;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_7(VAR_1);

 if (FUNC_2(VAR_2->dev)) {
  for (VAR_4 = 0; VAR_4 < VAR_2->curr_queue_pairs; VAR_4++)
   if (!FUNC_6(VAR_2, &VAR_2->rq[VAR_4], VAR_0))
    FUNC_5(&VAR_2->refill, 0);

  for (VAR_4 = 0; VAR_4 < VAR_2->max_queue_pairs; VAR_4++) {
   FUNC_8(VAR_2->rq[VAR_4].vq, &VAR_2->rq[VAR_4].napi);
   FUNC_9(VAR_2, VAR_2->sq[VAR_4].vq,
            &VAR_2->sq[VAR_4].napi);
  }
 }

 FUNC_3(VAR_2->dev);
 FUNC_1(VAR_2->dev);
 FUNC_4(VAR_2->dev);
 return VAR_3;
}
