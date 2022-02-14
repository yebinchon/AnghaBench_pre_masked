
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_mmio_device {TYPE_1__* pdev; } ;
struct virtio_device {int dummy; } ;
struct TYPE_2__ {char const* name; } ;


 struct virtio_mmio_device* FUNC_0 (struct virtio_device*) ;

__attribute__((used)) static const char *FUNC_1(struct virtio_device *VAR_0)
{
 struct virtio_mmio_device *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->pdev->name;
}
