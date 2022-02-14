
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_inode {int lock; int write_files; } ;
struct fuse_file {int write_entry; } ;
struct file {struct fuse_file* private_data; } ;


 struct inode* FUNC_0 (struct file*) ;
 struct fuse_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct file *VAR_0)
{
 struct inode *VAR_1 = FUNC_0(VAR_0);
 struct fuse_inode *VAR_2 = FUNC_1(VAR_1);
 struct fuse_file *VAR_3 = VAR_0->private_data;




 FUNC_4(&VAR_2->lock);
 if (FUNC_3(&VAR_3->write_entry))
  FUNC_2(&VAR_3->write_entry, &VAR_2->write_files);
 FUNC_5(&VAR_2->lock);
}
