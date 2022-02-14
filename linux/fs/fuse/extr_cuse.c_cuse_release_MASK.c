
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_file {struct fuse_conn* fc; } ;
struct fuse_conn {int dummy; } ;
struct file {int f_flags; struct fuse_file* private_data; } ;


 int FUNC_0 (struct fuse_conn*) ;
 int FUNC_1 (int *,struct fuse_file*,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct fuse_file *VAR_2 = VAR_1->private_data;
 struct fuse_conn *VAR_3 = VAR_2->fc;

 FUNC_1(((void*)0), VAR_2, VAR_1->f_flags);
 FUNC_0(VAR_3);

 return 0;
}
