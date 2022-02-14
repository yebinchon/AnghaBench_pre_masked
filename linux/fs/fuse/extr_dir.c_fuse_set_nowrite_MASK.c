
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_inode {scalar_t__ writectr; int page_waitq; int lock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct fuse_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct inode *VAR_1)
{
 struct fuse_inode *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(!FUNC_2(VAR_1));

 FUNC_3(&VAR_2->lock);
 FUNC_0(VAR_2->writectr < 0);
 VAR_2->writectr += VAR_0;
 FUNC_4(&VAR_2->lock);
 FUNC_5(VAR_2->page_waitq, VAR_2->writectr == VAR_0);
}
