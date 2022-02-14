
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_inode_info {int vfs_inode; int i_bmap_data; int * i_bmap; int i_btnode_cache; int xattr_sem; int i_dirty; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct nilfs_inode_info *VAR_1 = VAR_0;

 FUNC_0(&VAR_1->i_dirty);



 FUNC_1(&VAR_1->i_btnode_cache);
 VAR_1->i_bmap = &VAR_1->i_bmap_data;
 FUNC_3(&VAR_1->vfs_inode);
}
