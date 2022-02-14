
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_inode {int state; } ;


 int VAR_0 ;
 struct fuse_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_1)
{
 struct fuse_inode *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, &VAR_2->state);
}
