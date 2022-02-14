
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_inode {int page_waitq; } ;
typedef int pgoff_t ;


 int FUNC_0 (struct inode*,int ) ;
 struct fuse_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_0, pgoff_t VAR_1)
{
 struct fuse_inode *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(VAR_2->page_waitq, !FUNC_0(VAR_0, VAR_1));
}
