
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_file {int flock; } ;
struct fuse_conn {scalar_t__ no_flock; } ;
struct file_lock {int dummy; } ;
struct file {struct fuse_file* private_data; } ;


 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,struct file_lock*,int) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct file*,struct file_lock*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, int VAR_1, struct file_lock *VAR_2)
{
 struct inode *VAR_3 = FUNC_0(VAR_0);
 struct fuse_conn *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 if (VAR_4->no_flock) {
  VAR_5 = FUNC_3(VAR_0, VAR_2);
 } else {
  struct fuse_file *VAR_6 = VAR_0->private_data;


  VAR_6->flock = 1;
  VAR_5 = FUNC_1(VAR_0, VAR_2, 1);
 }

 return VAR_5;
}
