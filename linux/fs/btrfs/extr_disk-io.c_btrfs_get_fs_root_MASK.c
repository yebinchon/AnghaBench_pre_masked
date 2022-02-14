
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int state; int root_item; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ offset; int type; } ;
struct btrfs_fs_info {struct btrfs_root* tree_root; struct btrfs_root* free_space_root; struct btrfs_root* uuid_root; struct btrfs_root* quota_root; struct btrfs_root* csum_root; struct btrfs_root* dev_root; struct btrfs_root* chunk_root; struct btrfs_root* extent_root; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct btrfs_root* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct btrfs_root*) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_root*) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (struct btrfs_root*) ;
 int FUNC_6 (struct btrfs_fs_info*,struct btrfs_root*) ;
 struct btrfs_root* FUNC_7 (struct btrfs_fs_info*,scalar_t__) ;
 struct btrfs_root* FUNC_8 (struct btrfs_root*,struct btrfs_key*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_11 (int ,int *) ;

struct btrfs_root *FUNC_12(struct btrfs_fs_info *VAR_14,
         struct btrfs_key *VAR_15,
         bool VAR_16)
{
 struct btrfs_root *VAR_17;
 struct btrfs_path *VAR_18;
 struct btrfs_key VAR_19;
 int VAR_20;

 if (VAR_15->objectid == VAR_9)
  return VAR_14->tree_root;
 if (VAR_15->objectid == VAR_3)
  return VAR_14->extent_root;
 if (VAR_15->objectid == VAR_0)
  return VAR_14->chunk_root;
 if (VAR_15->objectid == VAR_2)
  return VAR_14->dev_root;
 if (VAR_15->objectid == VAR_1)
  return VAR_14->csum_root;
 if (VAR_15->objectid == VAR_7)
  return VAR_14->quota_root ? VAR_14->quota_root :
          FUNC_0(-VAR_12);
 if (VAR_15->objectid == VAR_10)
  return VAR_14->uuid_root ? VAR_14->uuid_root :
         FUNC_0(-VAR_12);
 if (VAR_15->objectid == VAR_4)
  return VAR_14->free_space_root ? VAR_14->free_space_root :
        FUNC_0(-VAR_12);
again:
 VAR_17 = FUNC_7(VAR_14, VAR_15->objectid);
 if (VAR_17) {
  if (VAR_16 && FUNC_9(&VAR_17->root_item) == 0)
   return FUNC_0(-VAR_12);
  return VAR_17;
 }

 VAR_17 = FUNC_8(VAR_14->tree_root, VAR_15);
 if (FUNC_1(VAR_17))
  return VAR_17;

 if (VAR_16 && FUNC_9(&VAR_17->root_item) == 0) {
  VAR_20 = -VAR_12;
  goto fail;
 }

 VAR_20 = FUNC_5(VAR_17);
 if (VAR_20)
  goto fail;

 VAR_18 = FUNC_2();
 if (!VAR_18) {
  VAR_20 = -VAR_13;
  goto fail;
 }
 VAR_19.objectid = VAR_6;
 VAR_19.type = VAR_5;
 VAR_19.offset = VAR_15->objectid;

 VAR_20 = FUNC_10(((void*)0), VAR_14->tree_root, &VAR_19, VAR_18, 0, 0);
 FUNC_4(VAR_18);
 if (VAR_20 < 0)
  goto fail;
 if (VAR_20 == 0)
  FUNC_11(VAR_8, &VAR_17->state);

 VAR_20 = FUNC_6(VAR_14, VAR_17);
 if (VAR_20) {
  if (VAR_20 == -VAR_11) {
   FUNC_3(VAR_17);
   goto again;
  }
  goto fail;
 }
 return VAR_17;
fail:
 FUNC_3(VAR_17);
 return FUNC_0(VAR_20);
}
