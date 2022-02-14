
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int dummy; } ;
struct file {int * f_op; struct vfio_group* private_data; } ;


 int VAR_0 ;

bool FUNC_0(struct vfio_group *VAR_1,
        struct file *VAR_2)
{
 struct vfio_group *VAR_3 = VAR_2->private_data;

 return (VAR_2->f_op == &VAR_0) && (VAR_3 == VAR_1);
}
