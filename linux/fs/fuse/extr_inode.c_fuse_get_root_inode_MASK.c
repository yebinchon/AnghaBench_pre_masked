
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_attr {unsigned int mode; int nlink; int ino; } ;
typedef int attr ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct super_block*,int,int ,struct fuse_attr*,int ,int ) ;
 int FUNC_1 (struct fuse_attr*,int ,int) ;

__attribute__((used)) static struct inode *FUNC_2(struct super_block *VAR_1, unsigned VAR_2)
{
 struct fuse_attr VAR_3;
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.mode = VAR_2;
 VAR_3.ino = VAR_0;
 VAR_3.nlink = 1;
 return FUNC_0(VAR_1, 1, 0, &VAR_3, 0, 0);
}
