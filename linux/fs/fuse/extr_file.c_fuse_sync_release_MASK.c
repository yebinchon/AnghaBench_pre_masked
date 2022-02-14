
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_inode {int dummy; } ;
struct fuse_file {int count; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fuse_file*,int,int) ;
 int FUNC_2 (struct fuse_inode*,struct fuse_file*,int,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fuse_inode *VAR_1, struct fuse_file *VAR_2, int VAR_3)
{
 FUNC_0(FUNC_3(&VAR_2->count) > 1);
 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_0);




 FUNC_1(VAR_2, 1, 0);
}
