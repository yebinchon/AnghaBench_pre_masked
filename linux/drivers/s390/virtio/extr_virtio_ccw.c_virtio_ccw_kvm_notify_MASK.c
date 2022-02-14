
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {int index; struct virtio_ccw_vq_info* priv; } ;
struct virtio_ccw_vq_info {scalar_t__ cookie; TYPE_1__* vq; } ;
struct virtio_ccw_device {int cdev; } ;
struct subchannel_id {int dummy; } ;
struct TYPE_2__ {int vdev; } ;


 int FUNC_0 (int ,struct subchannel_id*) ;
 scalar_t__ FUNC_1 (struct subchannel_id,int ,scalar_t__) ;
 struct virtio_ccw_device* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct virtqueue *VAR_0)
{
 struct virtio_ccw_vq_info *VAR_1 = VAR_0->priv;
 struct virtio_ccw_device *VAR_2;
 struct subchannel_id VAR_3;

 VAR_2 = FUNC_2(VAR_1->vq->vdev);
 FUNC_0(VAR_2->cdev, &VAR_3);
 VAR_1->cookie = FUNC_1(VAR_3, VAR_0->index, VAR_1->cookie);
 if (VAR_1->cookie < 0)
  return 0;
 return 1;
}
