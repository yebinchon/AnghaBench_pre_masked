
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_driver {int (* config_changed ) (struct virtio_device*) ;} ;
struct TYPE_2__ {int driver; } ;
struct virtio_device {int config_change_pending; int config_enabled; TYPE_1__ dev; } ;


 struct virtio_driver* FUNC_0 (int ) ;
 int FUNC_1 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_2(struct virtio_device *VAR_0)
{
 struct virtio_driver *VAR_1 = FUNC_0(VAR_0->dev.driver);

 if (!VAR_0->config_enabled)
  VAR_0->config_change_pending = 1;
 else if (VAR_1 && VAR_1->config_changed)
  VAR_1->config_changed(VAR_0);
}
