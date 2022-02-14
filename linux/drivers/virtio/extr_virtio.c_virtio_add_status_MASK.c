
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {TYPE_1__* config; } ;
struct TYPE_2__ {unsigned int (* get_status ) (struct virtio_device*) ;int (* set_status ) (struct virtio_device*,unsigned int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct virtio_device*,unsigned int) ;
 unsigned int FUNC_2 (struct virtio_device*) ;

void FUNC_3(struct virtio_device *VAR_0, unsigned int VAR_1)
{
 FUNC_0();
 VAR_0->config->set_status(VAR_0, VAR_0->config->get_status(VAR_0) | VAR_1);
}
