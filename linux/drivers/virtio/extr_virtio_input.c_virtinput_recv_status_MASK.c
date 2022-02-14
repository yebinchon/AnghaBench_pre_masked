
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct virtio_input_event {int dummy; } ;
struct virtio_input {int lock; int sts; } ;
struct TYPE_2__ {struct virtio_input* priv; } ;


 int FUNC_0 (struct virtio_input_event*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct virtio_input_event* FUNC_3 (int ,unsigned int*) ;

__attribute__((used)) static void FUNC_4(struct virtqueue *VAR_0)
{
 struct virtio_input *VAR_1 = VAR_0->vdev->priv;
 struct virtio_input_event *VAR_2;
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_1(&VAR_1->lock, VAR_3);
 while ((VAR_2 = FUNC_3(VAR_1->sts, &VAR_4)) != ((void*)0))
  FUNC_0(VAR_2);
 FUNC_2(&VAR_1->lock, VAR_3);
}
