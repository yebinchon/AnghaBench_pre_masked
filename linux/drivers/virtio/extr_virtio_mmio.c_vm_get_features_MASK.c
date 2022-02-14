
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct virtio_mmio_device {scalar_t__ base; } ;
struct virtio_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct virtio_mmio_device* FUNC_1 (struct virtio_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static u64 FUNC_3(struct virtio_device *VAR_2)
{
 struct virtio_mmio_device *VAR_3 = FUNC_1(VAR_2);
 u64 VAR_4;

 FUNC_2(1, VAR_3->base + VAR_1);
 VAR_4 = FUNC_0(VAR_3->base + VAR_0);
 VAR_4 <<= 32;

 FUNC_2(0, VAR_3->base + VAR_1);
 VAR_4 |= FUNC_0(VAR_3->base + VAR_0);

 return VAR_4;
}
