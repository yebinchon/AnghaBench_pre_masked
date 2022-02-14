
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {unsigned int index; struct virtio_mmio_vq_info* priv; int vdev; } ;
struct virtio_mmio_vq_info {int node; } ;
struct virtio_mmio_device {int version; scalar_t__ base; int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct virtio_mmio_vq_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct virtio_mmio_device* FUNC_6 (int ) ;
 int FUNC_7 (struct virtqueue*) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct virtqueue *VAR_3)
{
 struct virtio_mmio_device *VAR_4 = FUNC_6(VAR_3->vdev);
 struct virtio_mmio_vq_info *VAR_5 = VAR_3->priv;
 unsigned long VAR_6;
 unsigned int VAR_7 = VAR_3->index;

 FUNC_4(&VAR_4->lock, VAR_6);
 FUNC_2(&VAR_5->node);
 FUNC_5(&VAR_4->lock, VAR_6);


 FUNC_8(VAR_7, VAR_4->base + VAR_2);
 if (VAR_4->version == 1) {
  FUNC_8(0, VAR_4->base + VAR_0);
 } else {
  FUNC_8(0, VAR_4->base + VAR_1);
  FUNC_0(FUNC_3(VAR_4->base + VAR_1));
 }

 FUNC_7(VAR_3);

 FUNC_1(VAR_5);
}
