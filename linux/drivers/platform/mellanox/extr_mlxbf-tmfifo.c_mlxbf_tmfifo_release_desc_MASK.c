
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef struct vring_desc* u32 ;
typedef size_t u16 ;
struct vring_desc {int dummy; } ;
struct vring {size_t num; int desc; TYPE_2__* used; } ;
struct virtio_device {int dummy; } ;
struct mlxbf_tmfifo_vring {TYPE_3__* vq; } ;
struct TYPE_6__ {struct virtio_device* vdev; } ;
struct TYPE_5__ {int idx; TYPE_1__* ring; } ;
struct TYPE_4__ {void* len; void* id; } ;


 int FUNC_0 (struct virtio_device*,size_t) ;
 void* FUNC_1 (struct virtio_device*,struct vring_desc*) ;
 int FUNC_2 () ;
 size_t FUNC_3 (struct virtio_device*,int ) ;
 struct vring* FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct mlxbf_tmfifo_vring *VAR_0,
          struct vring_desc *VAR_1, u32 VAR_2)
{
 const struct vring *VAR_3 = FUNC_4(VAR_0->vq);
 struct virtio_device *VAR_4 = VAR_0->vq->vdev;
 u16 VAR_5, VAR_6;

 VAR_6 = FUNC_3(VAR_4, VAR_3->used->idx);
 VAR_5 = VAR_6 % VAR_3->num;
 VAR_3->used->ring[VAR_5].id = FUNC_1(VAR_4, VAR_1 - VAR_3->desc);
 VAR_3->used->ring[VAR_5].len = FUNC_1(VAR_4, VAR_2);






 FUNC_2();
 VAR_3->used->idx = FUNC_0(VAR_4, VAR_6 + 1);
}
