
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_device {int device_data; TYPE_1__* ops; } ;
struct file {struct vfio_device* private_data; } ;
struct TYPE_2__ {long (* ioctl ) (int ,unsigned int,unsigned long) ;} ;


 long VAR_0 ;
 long FUNC_0 (int ,unsigned int,unsigned long) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_1,
           unsigned int VAR_2, unsigned long VAR_3)
{
 struct vfio_device *VAR_4 = VAR_1->private_data;

 if (FUNC_1(!VAR_4->ops->ioctl))
  return -VAR_0;

 return VAR_4->ops->ioctl(VAR_4->device_data, VAR_2, VAR_3);
}
