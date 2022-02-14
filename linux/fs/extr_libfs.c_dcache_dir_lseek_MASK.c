
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* dentry; } ;
struct file {int f_pos; struct dentry* private_data; TYPE_1__ f_path; } ;
struct dentry {int d_inode; int d_lock; int d_child; int d_subdirs; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 struct dentry* FUNC_5 (struct dentry*,int *,int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

loff_t FUNC_8(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct dentry *VAR_4 = VAR_1->f_path.dentry;
 switch (VAR_3) {
  case 1:
   VAR_2 += VAR_1->f_pos;

  case 0:
   if (VAR_2 >= 0)
    break;

  default:
   return -VAR_0;
 }
 if (VAR_2 != VAR_1->f_pos) {
  struct dentry *VAR_5 = VAR_1->private_data;
  struct dentry *VAR_6 = ((void*)0);

  FUNC_1(VAR_4->d_inode);

  if (VAR_2 > 2)
   VAR_6 = FUNC_5(VAR_5, &VAR_4->d_subdirs,
         VAR_2 - 2, ((void*)0));
  FUNC_6(&VAR_4->d_lock);
  if (VAR_6)
   FUNC_4(&VAR_5->d_child, &VAR_6->d_child);
  else
   FUNC_3(&VAR_5->d_child);
  FUNC_7(&VAR_4->d_lock);
  FUNC_0(VAR_6);

  VAR_1->f_pos = VAR_2;

  FUNC_2(VAR_4->d_inode);
 }
 return VAR_2;
}
