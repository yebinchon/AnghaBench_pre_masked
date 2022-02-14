
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_trans_handle {TYPE_1__* fs_info; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * slots; int * nodes; int reada; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct TYPE_4__ {scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_block_group_cache {int free_space_lock; TYPE_2__ key; } ;
struct TYPE_3__ {scalar_t__ nodesize; struct btrfs_root* extent_root; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*) ;
 struct btrfs_path* FUNC_3 () ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (int ,struct btrfs_key*,int ) ;
 int FUNC_6 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_7 (struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct btrfs_trans_handle *VAR_5,
        struct btrfs_block_group_cache *VAR_6)
{
 struct btrfs_root *VAR_7 = VAR_5->fs_info->extent_root;
 struct btrfs_path *VAR_8, *VAR_9;
 struct btrfs_key VAR_10;
 u64 VAR_11, VAR_12;
 int VAR_13;

 VAR_8 = FUNC_3();
 if (!VAR_8)
  return -VAR_3;
 VAR_8->reada = VAR_4;

 VAR_9 = FUNC_3();
 if (!VAR_9) {
  FUNC_4(VAR_8);
  return -VAR_3;
 }

 VAR_13 = FUNC_2(VAR_5, VAR_6, VAR_9);
 if (VAR_13)
  goto out;

 FUNC_8(&VAR_6->free_space_lock);
 VAR_10.objectid = VAR_6->key.objectid;
 VAR_10.type = VAR_1;
 VAR_10.offset = 0;

 VAR_13 = FUNC_7(VAR_7, &VAR_10, VAR_8, 1, 0);
 if (VAR_13 < 0)
  goto out_locked;
 FUNC_0(VAR_13 == 0);

 VAR_11 = VAR_6->key.objectid;
 VAR_12 = VAR_6->key.objectid + VAR_6->key.offset;
 while (1) {
  FUNC_5(VAR_8->nodes[0], &VAR_10, VAR_8->slots[0]);

  if (VAR_10.type == VAR_1 ||
      VAR_10.type == VAR_2) {
   if (VAR_10.objectid >= VAR_12)
    break;

   if (VAR_11 < VAR_10.objectid) {
    VAR_13 = FUNC_1(VAR_5,
              VAR_6,
              VAR_9, VAR_11,
              VAR_10.objectid -
              VAR_11);
    if (VAR_13)
     goto out_locked;
   }
   VAR_11 = VAR_10.objectid;
   if (VAR_10.type == VAR_2)
    VAR_11 += VAR_5->fs_info->nodesize;
   else
    VAR_11 += VAR_10.offset;
  } else if (VAR_10.type == VAR_0) {
   if (VAR_10.objectid != VAR_6->key.objectid)
    break;
  }

  VAR_13 = FUNC_6(VAR_7, VAR_8);
  if (VAR_13 < 0)
   goto out_locked;
  if (VAR_13)
   break;
 }
 if (VAR_11 < VAR_12) {
  VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_9,
            VAR_11, VAR_12 - VAR_11);
  if (VAR_13)
   goto out_locked;
 }

 VAR_13 = 0;
out_locked:
 FUNC_9(&VAR_6->free_space_lock);
out:
 FUNC_4(VAR_9);
 FUNC_4(VAR_8);
 return VAR_13;
}
