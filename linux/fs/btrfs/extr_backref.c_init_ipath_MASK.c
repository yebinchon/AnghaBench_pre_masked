
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_fs_paths {struct btrfs_root* fs_root; struct btrfs_data_container* fspath; struct btrfs_path* btrfs_path; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_data_container {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 struct inode_fs_paths* FUNC_0 (struct btrfs_data_container*) ;
 struct inode_fs_paths* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct btrfs_data_container*) ;
 struct btrfs_data_container* FUNC_3 (int ) ;
 struct inode_fs_paths* FUNC_4 (int,int ) ;
 int FUNC_5 (struct btrfs_data_container*) ;

struct inode_fs_paths *FUNC_6(s32 VAR_2, struct btrfs_root *VAR_3,
     struct btrfs_path *VAR_4)
{
 struct inode_fs_paths *VAR_5;
 struct btrfs_data_container *VAR_6;

 VAR_6 = FUNC_3(VAR_2);
 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  FUNC_5(VAR_6);
  return FUNC_1(-VAR_0);
 }

 VAR_5->btrfs_path = VAR_4;
 VAR_5->fspath = VAR_6;
 VAR_5->fs_root = VAR_3;

 return VAR_5;
}
