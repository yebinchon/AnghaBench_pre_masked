
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtnet_info {struct virtio_device* vdev; } ;
struct virtio_device {TYPE_1__* config; } ;
struct TYPE_2__ {int (* del_vqs ) (struct virtio_device*) ;} ;


 int FUNC_0 (struct virtio_device*) ;
 int FUNC_1 (struct virtnet_info*) ;
 int FUNC_2 (struct virtnet_info*) ;

__attribute__((used)) static void FUNC_3(struct virtnet_info *VAR_0)
{
 struct virtio_device *VAR_1 = VAR_0->vdev;

 FUNC_1(VAR_0);

 VAR_1->config->del_vqs(VAR_1);

 FUNC_2(VAR_0);
}
