
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_container {int kref; int group_lock; int group_list; } ;
struct inode {int dummy; } ;
struct file {struct vfio_container* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vfio_container* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 struct vfio_container *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->group_list);
 FUNC_1(&VAR_4->group_lock);
 FUNC_2(&VAR_4->kref);

 VAR_3->private_data = VAR_4;

 return 0;
}
