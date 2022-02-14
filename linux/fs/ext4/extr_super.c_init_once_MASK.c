
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_inode_info {int vfs_inode; int i_mmap_sem; int i_data_sem; int xattr_sem; int i_orphan; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct ext4_inode_info *VAR_1 = (struct ext4_inode_info *) VAR_0;

 FUNC_0(&VAR_1->i_orphan);
 FUNC_1(&VAR_1->xattr_sem);
 FUNC_1(&VAR_1->i_data_sem);
 FUNC_1(&VAR_1->i_mmap_sem);
 FUNC_2(&VAR_1->vfs_inode);
}
