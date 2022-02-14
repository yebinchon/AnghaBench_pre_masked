
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int dummy; } ;
struct file {int * f_op; struct vfio_group* private_data; } ;


 int VAR_0 ;
 struct vfio_group* FUNC_0 (int) ;
 int FUNC_1 (struct vfio_group*) ;
 int VAR_1 ;
 int FUNC_2 (struct vfio_group*) ;

struct vfio_group *FUNC_3(struct file *VAR_2)
{
 struct vfio_group *VAR_3 = VAR_2->private_data;
 int VAR_4;

 if (VAR_2->f_op != &VAR_1)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return FUNC_0(VAR_4);

 FUNC_2(VAR_3);

 return VAR_3;
}
