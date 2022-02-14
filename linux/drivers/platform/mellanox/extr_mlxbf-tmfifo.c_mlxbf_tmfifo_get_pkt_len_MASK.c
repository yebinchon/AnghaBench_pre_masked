
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct vring_desc {int next; int flags; int len; } ;
struct vring {struct vring_desc* desc; } ;
struct virtio_device {int dummy; } ;
struct mlxbf_tmfifo_vring {TYPE_1__* vq; } ;
struct TYPE_2__ {struct virtio_device* vdev; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct virtio_device*,int ) ;
 scalar_t__ FUNC_1 (struct virtio_device*,int ) ;
 struct vring* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static u32 FUNC_3(struct mlxbf_tmfifo_vring *VAR_1,
        struct vring_desc *VAR_2)
{
 const struct vring *VAR_3 = FUNC_2(VAR_1->vq);
 struct virtio_device *VAR_4 = VAR_1->vq->vdev;
 u32 VAR_5 = 0, VAR_6;

 while (VAR_2) {
  VAR_5 += FUNC_1(VAR_4, VAR_2->len);
  if (!(FUNC_0(VAR_4, VAR_2->flags) & VAR_0))
   break;
  VAR_6 = FUNC_0(VAR_4, VAR_2->next);
  VAR_2 = &VAR_3->desc[VAR_6];
 }

 return VAR_5;
}
