
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int b; } ;
typedef TYPE_2__ uuid_le ;
typedef void* u64 ;
struct extent_buffer {int len; int start; } ;
struct btrfs_trans_handle {int transid; struct btrfs_fs_info* fs_info; } ;
struct TYPE_15__ {scalar_t__ drop_level; int uuid; scalar_t__ byte_limit; scalar_t__ flags; } ;
struct TYPE_13__ {scalar_t__ offset; void* type; void* objectid; } ;
struct btrfs_root {struct extent_buffer* commit_root; TYPE_4__ root_item; int state; struct extent_buffer* node; TYPE_1__ root_key; } ;
struct btrfs_key {scalar_t__ offset; void* type; void* objectid; } ;
struct btrfs_fs_info {struct btrfs_root* tree_root; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btrfs_root* FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct btrfs_root*,struct btrfs_fs_info*,void*) ;
 struct btrfs_root* FUNC_4 (struct btrfs_fs_info*,int ) ;
 struct extent_buffer* FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,int ,void*,int *,int ,int ,int ) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,TYPE_4__*) ;
 int FUNC_7 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_8 (struct btrfs_root*) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (TYPE_4__*,int) ;
 int FUNC_15 (TYPE_4__*,int ) ;
 int FUNC_16 (struct extent_buffer*) ;
 int FUNC_17 (struct extent_buffer*) ;
 scalar_t__ FUNC_18 (void*) ;
 int FUNC_19 (struct btrfs_root*) ;
 int FUNC_20 (unsigned int) ;
 unsigned int FUNC_21 () ;
 int FUNC_22 (int ,int ,int ) ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (TYPE_2__*) ;

struct btrfs_root *FUNC_25(struct btrfs_trans_handle *VAR_6,
         u64 VAR_7)
{
 struct btrfs_fs_info *VAR_8 = VAR_6->fs_info;
 struct extent_buffer *VAR_9;
 struct btrfs_root *VAR_10 = VAR_8->tree_root;
 struct btrfs_root *VAR_11;
 struct btrfs_key VAR_12;
 unsigned int VAR_13;
 int VAR_14 = 0;
 uuid_le VAR_15 = VAR_5;





 VAR_13 = FUNC_21();
 VAR_11 = FUNC_4(VAR_8, VAR_4);
 FUNC_20(VAR_13);
 if (!VAR_11)
  return FUNC_0(-VAR_3);

 FUNC_3(VAR_11, VAR_8, VAR_7);
 VAR_11->root_key.objectid = VAR_7;
 VAR_11->root_key.type = VAR_0;
 VAR_11->root_key.offset = 0;

 VAR_9 = FUNC_5(VAR_6, VAR_11, 0, VAR_7, ((void*)0), 0, 0, 0);
 if (FUNC_1(VAR_9)) {
  VAR_14 = FUNC_2(VAR_9);
  VAR_9 = ((void*)0);
  goto fail;
 }

 VAR_11->node = VAR_9;
 FUNC_7(VAR_9);

 VAR_11->commit_root = FUNC_8(VAR_11);
 FUNC_23(VAR_1, &VAR_11->state);

 VAR_11->root_item.flags = 0;
 VAR_11->root_item.byte_limit = 0;
 FUNC_9(&VAR_11->root_item, VAR_9->start);
 FUNC_11(&VAR_11->root_item, VAR_6->transid);
 FUNC_13(&VAR_11->root_item, 0);
 FUNC_14(&VAR_11->root_item, 1);
 FUNC_15(&VAR_11->root_item, VAR_9->len);
 FUNC_12(&VAR_11->root_item, 0);
 FUNC_10(&VAR_11->root_item, 0);
 if (FUNC_18(VAR_7))
  FUNC_24(&VAR_15);
 FUNC_22(VAR_11->root_item.uuid, VAR_15.b, VAR_2);
 VAR_11->root_item.drop_level = 0;

 VAR_12.objectid = VAR_7;
 VAR_12.type = VAR_0;
 VAR_12.offset = 0;
 VAR_14 = FUNC_6(VAR_6, VAR_10, &VAR_12, &VAR_11->root_item);
 if (VAR_14)
  goto fail;

 FUNC_16(VAR_9);

 return VAR_11;

fail:
 if (VAR_9) {
  FUNC_16(VAR_9);
  FUNC_17(VAR_11->commit_root);
  FUNC_17(VAR_9);
 }
 FUNC_19(VAR_11);

 return FUNC_0(VAR_14);
}
