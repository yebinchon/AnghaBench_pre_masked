
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct virtio_mmio_device {int version; scalar_t__ base; } ;
struct virtio_device {int features; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct virtio_device*,int ) ;
 int FUNC_1 (int *,char*) ;
 struct virtio_mmio_device* FUNC_2 (struct virtio_device*) ;
 int FUNC_3 (struct virtio_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct virtio_device *VAR_4)
{
 struct virtio_mmio_device *VAR_5 = FUNC_2(VAR_4);


 FUNC_3(VAR_4);


 if (VAR_5->version == 2 &&
   !FUNC_0(VAR_4, VAR_1)) {
  FUNC_1(&VAR_4->dev, "New virtio-mmio devices (version 2) must provide VIRTIO_F_VERSION_1 feature!\n");
  return -VAR_0;
 }

 FUNC_4(1, VAR_5->base + VAR_3);
 FUNC_4((u32)(VAR_4->features >> 32),
   VAR_5->base + VAR_2);

 FUNC_4(0, VAR_5->base + VAR_3);
 FUNC_4((u32)VAR_4->features,
   VAR_5->base + VAR_2);

 return 0;
}
