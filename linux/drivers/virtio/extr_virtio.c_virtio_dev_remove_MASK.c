
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtio_driver {int (* remove ) (struct virtio_device*) ;} ;
struct TYPE_3__ {int driver; } ;
struct virtio_device {TYPE_2__* config; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int (* get_status ) (struct virtio_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct virtio_device* FUNC_1 (struct device*) ;
 struct virtio_driver* FUNC_2 (int ) ;
 int FUNC_3 (struct virtio_device*) ;
 int FUNC_4 (struct virtio_device*) ;
 int FUNC_5 (struct virtio_device*,int ) ;
 int FUNC_6 (struct virtio_device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1)
{
 struct virtio_device *VAR_2 = FUNC_1(VAR_1);
 struct virtio_driver *VAR_3 = FUNC_2(VAR_2->dev.driver);

 FUNC_6(VAR_2);

 VAR_3->remove(VAR_2);


 FUNC_0(VAR_2->config->get_status(VAR_2));


 FUNC_5(VAR_2, VAR_0);
 return 0;
}
