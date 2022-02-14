
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int index; int vdev; } ;
struct virtio_mmio_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct virtio_mmio_device* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct virtqueue *VAR_1)
{
 struct virtio_mmio_device *VAR_2 = FUNC_0(VAR_1->vdev);



 FUNC_1(VAR_1->index, VAR_2->base + VAR_0);
 return 1;
}
