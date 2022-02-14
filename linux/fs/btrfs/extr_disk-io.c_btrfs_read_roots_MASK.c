
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int state; } ;
struct btrfs_key {int objectid; scalar_t__ offset; int type; } ;
struct btrfs_fs_info {struct btrfs_root* free_space_root; struct btrfs_root* uuid_root; struct btrfs_root* quota_root; int flags; struct btrfs_root* csum_root; struct btrfs_root* dev_root; struct btrfs_root* extent_root; struct btrfs_root* tree_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct btrfs_root*) ;
 int FUNC_2 (struct btrfs_root*) ;
 scalar_t__ FUNC_3 (struct btrfs_fs_info*,int ) ;
 int FUNC_4 (struct btrfs_fs_info*) ;
 struct btrfs_root* FUNC_5 (struct btrfs_root*,struct btrfs_key*) ;
 int FUNC_6 (struct btrfs_fs_info*,char*,int ,int) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct btrfs_fs_info *VAR_11)
{
 struct btrfs_root *VAR_12 = VAR_11->tree_root;
 struct btrfs_root *VAR_13;
 struct btrfs_key VAR_14;
 int VAR_15;

 FUNC_0(!VAR_11->tree_root);

 VAR_14.objectid = VAR_2;
 VAR_14.type = VAR_6;
 VAR_14.offset = 0;

 VAR_13 = FUNC_5(VAR_12, &VAR_14);
 if (FUNC_1(VAR_13)) {
  VAR_15 = FUNC_2(VAR_13);
  goto out;
 }
 FUNC_7(VAR_7, &VAR_13->state);
 VAR_11->extent_root = VAR_13;

 VAR_14.objectid = VAR_1;
 VAR_13 = FUNC_5(VAR_12, &VAR_14);
 if (FUNC_1(VAR_13)) {
  VAR_15 = FUNC_2(VAR_13);
  goto out;
 }
 FUNC_7(VAR_7, &VAR_13->state);
 VAR_11->dev_root = VAR_13;
 FUNC_4(VAR_11);

 VAR_14.objectid = VAR_0;
 VAR_13 = FUNC_5(VAR_12, &VAR_14);
 if (FUNC_1(VAR_13)) {
  VAR_15 = FUNC_2(VAR_13);
  goto out;
 }
 FUNC_7(VAR_7, &VAR_13->state);
 VAR_11->csum_root = VAR_13;

 VAR_14.objectid = VAR_5;
 VAR_13 = FUNC_5(VAR_12, &VAR_14);
 if (!FUNC_1(VAR_13)) {
  FUNC_7(VAR_7, &VAR_13->state);
  FUNC_7(VAR_4, &VAR_11->flags);
  VAR_11->quota_root = VAR_13;
 }

 VAR_14.objectid = VAR_8;
 VAR_13 = FUNC_5(VAR_12, &VAR_14);
 if (FUNC_1(VAR_13)) {
  VAR_15 = FUNC_2(VAR_13);
  if (VAR_15 != -VAR_9)
   goto out;
 } else {
  FUNC_7(VAR_7, &VAR_13->state);
  VAR_11->uuid_root = VAR_13;
 }

 if (FUNC_3(VAR_11, VAR_10)) {
  VAR_14.objectid = VAR_3;
  VAR_13 = FUNC_5(VAR_12, &VAR_14);
  if (FUNC_1(VAR_13)) {
   VAR_15 = FUNC_2(VAR_13);
   goto out;
  }
  FUNC_7(VAR_7, &VAR_13->state);
  VAR_11->free_space_root = VAR_13;
 }

 return 0;
out:
 FUNC_6(VAR_11, "failed to read root (objectid=%llu): %d",
     VAR_14.objectid, VAR_15);
 return VAR_15;
}
