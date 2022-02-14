
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_inode_info {int vfs_inode; int sem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct jffs2_inode_info *VAR_1 = VAR_0;

 FUNC_1(&VAR_1->sem);
 FUNC_0(&VAR_1->vfs_inode);
}
