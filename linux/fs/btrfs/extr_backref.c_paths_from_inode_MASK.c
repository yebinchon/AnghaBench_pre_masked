
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode_fs_paths {int btrfs_path; int fs_root; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,struct inode_fs_paths*) ;

int FUNC_1(u64 VAR_1, struct inode_fs_paths *VAR_2)
{
 return FUNC_0(VAR_1, VAR_2->fs_root, VAR_2->btrfs_path,
        VAR_0, VAR_2);
}
