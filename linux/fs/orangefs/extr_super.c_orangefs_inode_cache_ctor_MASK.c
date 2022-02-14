
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_inode_s {int xattr_sem; int vfs_inode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct orangefs_inode_s *VAR_1 = VAR_0;

 FUNC_1(&VAR_1->vfs_inode);
 FUNC_0(&VAR_1->xattr_sem);
}
