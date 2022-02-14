
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_conn {int dummy; } ;
struct file {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct fuse_conn*) ;
 long FUNC_2 (struct file*,unsigned int,unsigned long,unsigned int) ;
 struct fuse_conn* FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;

long FUNC_5(struct file *VAR_2, unsigned int VAR_3,
         unsigned long VAR_4, unsigned int VAR_5)
{
 struct inode *VAR_6 = FUNC_0(VAR_2);
 struct fuse_conn *VAR_7 = FUNC_3(VAR_6);

 if (!FUNC_1(VAR_7))
  return -VAR_0;

 if (FUNC_4(VAR_6))
  return -VAR_1;

 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
}
