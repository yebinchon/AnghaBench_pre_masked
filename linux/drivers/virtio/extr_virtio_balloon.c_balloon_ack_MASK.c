
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct virtio_balloon {int acked; } ;
struct TYPE_2__ {struct virtio_balloon* priv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct virtqueue *VAR_0)
{
 struct virtio_balloon *VAR_1 = VAR_0->vdev->priv;

 FUNC_0(&VAR_1->acked);
}
