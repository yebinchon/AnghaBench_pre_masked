
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_device {int group; int device_data; TYPE_1__* ops; } ;
struct inode {int dummy; } ;
struct file {struct vfio_device* private_data; } ;
struct TYPE_2__ {int (* release ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vfio_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct vfio_device *VAR_2 = VAR_1->private_data;

 VAR_2->ops->release(VAR_2->device_data);

 FUNC_2(VAR_2->group);

 FUNC_1(VAR_2);

 return 0;
}
