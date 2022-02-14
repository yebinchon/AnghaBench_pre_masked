
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct virtio_mmio_device {int version; scalar_t__ base; } ;
struct virtio_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct virtio_mmio_device* FUNC_1 (struct virtio_device*) ;

__attribute__((used)) static u32 FUNC_2(struct virtio_device *VAR_1)
{
 struct virtio_mmio_device *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->version == 1)
  return 0;
 else
  return FUNC_0(VAR_2->base + VAR_0);
}
