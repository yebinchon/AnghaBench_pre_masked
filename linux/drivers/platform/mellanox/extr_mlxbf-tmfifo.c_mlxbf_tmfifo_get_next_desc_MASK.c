
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vring_desc {int dummy; } ;
struct vring {unsigned int num; struct vring_desc* desc; TYPE_1__* avail; } ;
struct virtio_device {int dummy; } ;
struct mlxbf_tmfifo_vring {unsigned int next_avail; TYPE_2__* vq; } ;
struct TYPE_4__ {struct virtio_device* vdev; } ;
struct TYPE_3__ {int * ring; int idx; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct virtio_device*,int ) ;
 struct vring* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static struct vring_desc *
FUNC_3(struct mlxbf_tmfifo_vring *VAR_0)
{
 const struct vring *VAR_1 = FUNC_2(VAR_0->vq);
 struct virtio_device *VAR_2 = VAR_0->vq->vdev;
 unsigned int VAR_3, VAR_4;

 if (VAR_0->next_avail == FUNC_1(VAR_2, VAR_1->avail->idx))
  return ((void*)0);

 VAR_3 = VAR_0->next_avail % VAR_1->num;
 VAR_4 = FUNC_1(VAR_2, VAR_1->avail->ring[VAR_3]);
 if (FUNC_0(VAR_4 >= VAR_1->num))
  return ((void*)0);

 VAR_0->next_avail++;

 return &VAR_1->desc[VAR_4];
}
