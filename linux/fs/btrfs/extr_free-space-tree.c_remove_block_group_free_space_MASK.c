
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {TYPE_2__* fs_info; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct TYPE_3__ {scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_block_group_cache {TYPE_1__ key; scalar_t__ needs_free_space; } ;
struct TYPE_4__ {struct btrfs_root* free_space_root; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct btrfs_trans_handle*,int) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,scalar_t__,int) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct extent_buffer*,struct btrfs_key*,scalar_t__) ;
 int FUNC_7 (struct btrfs_path*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;

int FUNC_9(struct btrfs_trans_handle *VAR_5,
      struct btrfs_block_group_cache *VAR_6)
{
 struct btrfs_root *VAR_7 = VAR_5->fs_info->free_space_root;
 struct btrfs_path *VAR_8;
 struct btrfs_key VAR_9, VAR_10;
 struct extent_buffer *VAR_11;
 u64 VAR_12, VAR_13;
 int VAR_14 = 0, VAR_15;
 int VAR_16;

 if (!FUNC_5(VAR_5->fs_info, VAR_4))
  return 0;

 if (VAR_6->needs_free_space) {

  return 0;
 }

 VAR_8 = FUNC_2();
 if (!VAR_8) {
  VAR_16 = -VAR_3;
  goto out;
 }

 VAR_12 = VAR_6->key.objectid;
 VAR_13 = VAR_6->key.objectid + VAR_6->key.offset;

 VAR_9.objectid = VAR_13 - 1;
 VAR_9.type = (u8)-1;
 VAR_9.offset = (u64)-1;

 while (!VAR_14) {
  VAR_16 = FUNC_8(VAR_5, VAR_7, &VAR_9, VAR_8, -1, 1);
  if (VAR_16)
   goto out;

  VAR_11 = VAR_8->nodes[0];
  VAR_15 = 0;
  VAR_8->slots[0]++;
  while (VAR_8->slots[0] > 0) {
   FUNC_6(VAR_11, &VAR_10, VAR_8->slots[0] - 1);

   if (VAR_10.type == VAR_2) {
    FUNC_0(VAR_10.objectid == VAR_6->key.objectid);
    FUNC_0(VAR_10.offset == VAR_6->key.offset);
    VAR_14 = 1;
    VAR_15++;
    VAR_8->slots[0]--;
    break;
   } else if (VAR_10.type == VAR_1 ||
       VAR_10.type == VAR_0) {
    FUNC_0(VAR_10.objectid >= VAR_12);
    FUNC_0(VAR_10.objectid < VAR_13);
    FUNC_0(VAR_10.objectid + VAR_10.offset <= VAR_13);
    VAR_15++;
    VAR_8->slots[0]--;
   } else {
    FUNC_0(0);
   }
  }

  VAR_16 = FUNC_3(VAR_5, VAR_7, VAR_8, VAR_8->slots[0], VAR_15);
  if (VAR_16)
   goto out;
  FUNC_7(VAR_8);
 }

 VAR_16 = 0;
out:
 FUNC_4(VAR_8);
 if (VAR_16)
  FUNC_1(VAR_5, VAR_16);
 return VAR_16;
}
