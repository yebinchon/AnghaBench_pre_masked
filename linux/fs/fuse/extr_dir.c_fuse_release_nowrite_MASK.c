
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_inode {int lock; } ;


 int FUNC_0 (struct inode*) ;
 struct fuse_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct inode *VAR_0)
{
 struct fuse_inode *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->lock);
 FUNC_0(VAR_0);
 FUNC_3(&VAR_1->lock);
}
