
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct virtio_input_event {int value; int code; int type; } ;
struct virtio_input {int lock; int idev; int evt; scalar_t__ ready; } ;
struct TYPE_2__ {struct virtio_input* priv; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct virtio_input*,struct virtio_input_event*) ;
 struct virtio_input_event* FUNC_6 (int ,unsigned int*) ;
 int FUNC_7 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_8(struct virtqueue *VAR_0)
{
 struct virtio_input *VAR_1 = VAR_0->vdev->priv;
 struct virtio_input_event *VAR_2;
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_3(&VAR_1->lock, VAR_3);
 if (VAR_1->ready) {
  while ((VAR_2 = FUNC_6(VAR_1->evt, &VAR_4)) != ((void*)0)) {
   FUNC_4(&VAR_1->lock, VAR_3);
   FUNC_0(VAR_1->idev,
        FUNC_1(VAR_2->type),
        FUNC_1(VAR_2->code),
        FUNC_2(VAR_2->value));
   FUNC_3(&VAR_1->lock, VAR_3);
   FUNC_5(VAR_1, VAR_2);
  }
  FUNC_7(VAR_0);
 }
 FUNC_4(&VAR_1->lock, VAR_3);
}
