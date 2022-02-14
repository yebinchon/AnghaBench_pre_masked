
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_root {int commit_root; int node; int root_item; int root_key; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {int objectid; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btrfs_root* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct btrfs_root*,struct btrfs_fs_info*,int ) ;
 struct btrfs_path* FUNC_4 () ;
 struct btrfs_root* FUNC_5 (struct btrfs_fs_info*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int *,int *) ;
 int FUNC_8 (struct btrfs_path*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct btrfs_root*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct btrfs_root*) ;
 int FUNC_15 (struct btrfs_fs_info*,int ,int ,int,int *) ;

__attribute__((used)) static struct btrfs_root *FUNC_16(struct btrfs_root *VAR_4,
            struct btrfs_key *VAR_5)
{
 struct btrfs_root *VAR_6;
 struct btrfs_fs_info *VAR_7 = VAR_4->fs_info;
 struct btrfs_path *VAR_8;
 u64 VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_4();
 if (!VAR_8)
  return FUNC_0(-VAR_2);

 VAR_6 = FUNC_5(VAR_7, VAR_3);
 if (!VAR_6) {
  VAR_10 = -VAR_2;
  goto alloc_fail;
 }

 FUNC_3(VAR_6, VAR_7, VAR_5->objectid);

 VAR_10 = FUNC_7(VAR_4, VAR_5, VAR_8,
         &VAR_6->root_item, &VAR_6->root_key);
 if (VAR_10) {
  if (VAR_10 > 0)
   VAR_10 = -VAR_1;
  goto find_fail;
 }

 VAR_9 = FUNC_10(&VAR_6->root_item);
 VAR_11 = FUNC_11(&VAR_6->root_item);
 VAR_6->node = FUNC_15(VAR_7,
         FUNC_9(&VAR_6->root_item),
         VAR_9, VAR_11, ((void*)0));
 if (FUNC_1(VAR_6->node)) {
  VAR_10 = FUNC_2(VAR_6->node);
  goto find_fail;
 } else if (!FUNC_6(VAR_6->node, VAR_9, 0)) {
  VAR_10 = -VAR_0;
  FUNC_13(VAR_6->node);
  goto find_fail;
 }
 VAR_6->commit_root = FUNC_12(VAR_6);
out:
 FUNC_8(VAR_8);
 return VAR_6;

find_fail:
 FUNC_14(VAR_6);
alloc_fail:
 VAR_6 = FUNC_0(VAR_10);
 goto out;
}
