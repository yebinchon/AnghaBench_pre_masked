
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_conn {scalar_t__ writeback_cache; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,int) ;
 struct fuse_conn* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct fuse_conn *VAR_2 = FUNC_1(VAR_0);


 if (VAR_2->writeback_cache)
  FUNC_2(VAR_0, 1);

 FUNC_0(VAR_1, 0);


 return 0;
}
