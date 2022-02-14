
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_mmio_device {scalar_t__ base; } ;
struct virtio_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct virtio_mmio_device* FUNC_0 (struct virtio_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct virtio_device *VAR_1)
{
 struct virtio_mmio_device *VAR_2 = FUNC_0(VAR_1);


 FUNC_1(0, VAR_2->base + VAR_0);
}
