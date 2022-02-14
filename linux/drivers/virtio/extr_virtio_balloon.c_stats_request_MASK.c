
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct virtio_balloon {int stop_update_lock; int update_balloon_stats_work; int stop_update; } ;
struct TYPE_2__ {struct virtio_balloon* priv; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct virtqueue *VAR_1)
{
 struct virtio_balloon *VAR_2 = VAR_1->vdev->priv;

 FUNC_1(&VAR_2->stop_update_lock);
 if (!VAR_2->stop_update)
  FUNC_0(VAR_0, &VAR_2->update_balloon_stats_work);
 FUNC_2(&VAR_2->stop_update_lock);
}
