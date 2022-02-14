
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct hfs_readdir_data {int list; } ;
struct file {struct hfs_readdir_data* private_data; } ;
struct TYPE_2__ {int open_dir_lock; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct hfs_readdir_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct hfs_readdir_data *VAR_2 = VAR_1->private_data;
 if (VAR_2) {
  FUNC_3(&FUNC_0(VAR_0)->open_dir_lock);
  FUNC_2(&VAR_2->list);
  FUNC_4(&FUNC_0(VAR_0)->open_dir_lock);
  FUNC_1(VAR_2);
 }
 return 0;
}
