
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int opened; } ;
struct inode {int dummy; } ;
struct file {struct vfio_group* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vfio_group*) ;
 int FUNC_2 (struct vfio_group*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct vfio_group *VAR_2 = VAR_1->private_data;

 VAR_1->private_data = ((void*)0);

 FUNC_2(VAR_2);

 FUNC_0(&VAR_2->opened);

 FUNC_1(VAR_2);

 return 0;
}
