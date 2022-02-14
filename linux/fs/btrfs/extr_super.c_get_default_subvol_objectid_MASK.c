
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int leave_spinning; int * nodes; } ;
struct btrfs_key {int objectid; } ;
struct btrfs_fs_info {int super_copy; struct btrfs_root* tree_root; } ;
struct btrfs_dir_item {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_dir_item*) ;
 int FUNC_1 (struct btrfs_dir_item*) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (int ,struct btrfs_dir_item*,struct btrfs_key*) ;
 int FUNC_4 (struct btrfs_path*) ;
 struct btrfs_dir_item* FUNC_5 (int *,struct btrfs_root*,struct btrfs_path*,int ,char*,int,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct btrfs_fs_info *VAR_2, u64 *VAR_3)
{
 struct btrfs_root *VAR_4 = VAR_2->tree_root;
 struct btrfs_dir_item *VAR_5;
 struct btrfs_path *VAR_6;
 struct btrfs_key VAR_7;
 u64 VAR_8;

 VAR_6 = FUNC_2();
 if (!VAR_6)
  return -VAR_1;
 VAR_6->leave_spinning = 1;






 VAR_8 = FUNC_6(VAR_2->super_copy);
 VAR_5 = FUNC_5(((void*)0), VAR_4, VAR_6, VAR_8, "default", 7, 0);
 if (FUNC_0(VAR_5)) {
  FUNC_4(VAR_6);
  return FUNC_1(VAR_5);
 }
 if (!VAR_5) {





  FUNC_4(VAR_6);
  *VAR_3 = VAR_0;
  return 0;
 }

 FUNC_3(VAR_6->nodes[0], VAR_5, &VAR_7);
 FUNC_4(VAR_6);
 *VAR_3 = VAR_7.objectid;
 return 0;
}
