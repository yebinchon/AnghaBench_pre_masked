
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int objectid; } ;
struct btrfs_root {int alloc_bytenr; TYPE_2__* fs_info; TYPE_1__ root_key; int node; } ;
struct btrfs_fs_info {int flags; } ;
struct TYPE_5__ {struct btrfs_root* fs_root; struct btrfs_root* quota_root; struct btrfs_root* tree_root; struct btrfs_root* extent_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct btrfs_root*) ;
 int FUNC_1 (struct btrfs_root*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,int) ;
 struct btrfs_fs_info* FUNC_3 (int,int) ;
 struct btrfs_root* FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (struct btrfs_fs_info*) ;
 int FUNC_6 (struct btrfs_root*) ;
 int FUNC_7 (TYPE_2__*,struct btrfs_root*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct btrfs_root*,int,int) ;
 int FUNC_14 (struct btrfs_root*,int,int) ;
 int FUNC_15 (int ) ;

int FUNC_16(u32 VAR_6, u32 VAR_7)
{
 struct btrfs_fs_info *VAR_8 = ((void*)0);
 struct btrfs_root *VAR_9;
 struct btrfs_root *VAR_10;
 int VAR_11 = 0;

 VAR_8 = FUNC_3(VAR_7, VAR_6);
 if (!VAR_8) {
  FUNC_15(VAR_4);
  return -VAR_3;
 }

 VAR_9 = FUNC_4(VAR_8);
 if (FUNC_0(VAR_9)) {
  FUNC_15(VAR_5);
  VAR_11 = FUNC_1(VAR_9);
  goto out;
 }


 VAR_9->fs_info->extent_root = VAR_9;





 VAR_9->fs_info->tree_root = VAR_9;
 VAR_9->fs_info->quota_root = VAR_9;
 FUNC_10(VAR_1, &VAR_8->flags);





 VAR_9->node = FUNC_2(VAR_9->fs_info, VAR_7);
 if (!VAR_9->node) {
  FUNC_11("couldn't allocate dummy buffer");
  VAR_11 = -VAR_3;
  goto out;
 }
 FUNC_8(VAR_9->node, 0);
 FUNC_9(VAR_9->node, 0);
 VAR_9->alloc_bytenr += 2 * VAR_7;

 VAR_10 = FUNC_4(VAR_8);
 if (FUNC_0(VAR_10)) {
  FUNC_15(VAR_5);
  VAR_11 = FUNC_1(VAR_10);
  goto out;
 }

 VAR_10->root_key.objectid = VAR_2;
 VAR_9->fs_info->fs_root = VAR_10;
 VAR_11 = FUNC_7(VAR_9->fs_info, VAR_10);
 if (VAR_11) {
  FUNC_11("couldn't insert fs root %d", VAR_11);
  goto out;
 }

 VAR_10 = FUNC_4(VAR_8);
 if (FUNC_0(VAR_10)) {
  FUNC_15(VAR_5);
  VAR_11 = FUNC_1(VAR_10);
  goto out;
 }

 VAR_10->root_key.objectid = VAR_0;
 VAR_11 = FUNC_7(VAR_9->fs_info, VAR_10);
 if (VAR_11) {
  FUNC_11("couldn't insert fs root %d", VAR_11);
  goto out;
 }

 FUNC_12("running qgroup tests");
 VAR_11 = FUNC_14(VAR_9, VAR_6, VAR_7);
 if (VAR_11)
  goto out;
 VAR_11 = FUNC_13(VAR_9, VAR_6, VAR_7);
out:
 FUNC_6(VAR_9);
 FUNC_5(VAR_8);
 return VAR_11;
}
