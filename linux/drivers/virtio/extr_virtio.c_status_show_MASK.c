
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {TYPE_1__* config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_status ) (struct virtio_device*) ;} ;


 struct virtio_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct virtio_device*) ;
 int FUNC_3 (struct virtio_device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct virtio_device *VAR_3 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2, "0x%08x\n", VAR_3->config->get_status(VAR_3));
}
