
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {int dummy; } ;
struct virtio_ccw_device {TYPE_1__* cdev; } ;
struct TYPE_2__ {int dev; } ;


 char const* FUNC_0 (int *) ;
 struct virtio_ccw_device* FUNC_1 (struct virtio_device*) ;

__attribute__((used)) static const char *FUNC_2(struct virtio_device *VAR_0)
{
 struct virtio_ccw_device *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_1->cdev->dev);
}
