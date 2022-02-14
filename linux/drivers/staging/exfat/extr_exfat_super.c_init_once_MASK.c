
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exfat_inode_info {int vfs_inode; int i_hash_fat; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct exfat_inode_info *VAR_1 = (struct exfat_inode_info *)VAR_0;

 FUNC_0(&VAR_1->i_hash_fat);
 FUNC_1(&VAR_1->vfs_inode);
}
