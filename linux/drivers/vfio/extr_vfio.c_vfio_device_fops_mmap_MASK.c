
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct vfio_device {int device_data; TYPE_1__* ops; } ;
struct file {struct vfio_device* private_data; } ;
struct TYPE_2__ {int (* mmap ) (int ,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct vm_area_struct*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct vfio_device *VAR_3 = VAR_1->private_data;

 if (FUNC_1(!VAR_3->ops->mmap))
  return -VAR_0;

 return VAR_3->ops->mmap(VAR_3->device_data, VAR_2);
}
