
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct extent_buffer {scalar_t__ lock_owner; int log_index; scalar_t__ len; scalar_t__ start; int bflags; } ;
struct btrfs_trans_handle {int dirty; TYPE_3__* transaction; int transid; } ;
struct TYPE_6__ {scalar_t__ objectid; } ;
struct btrfs_root {int log_transid; int dirty_log_pages; TYPE_2__ root_key; struct btrfs_fs_info* fs_info; } ;
struct btrfs_header {int dummy; } ;
struct btrfs_fs_info {int chunk_tree_uuid; TYPE_1__* fs_devices; } ;
struct TYPE_8__ {scalar_t__ pid; } ;
struct TYPE_7__ {int dirty_pages; } ;
struct TYPE_5__ {int metadata_uuid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct extent_buffer* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct btrfs_fs_info*,char*,scalar_t__,int ,scalar_t__) ;
 struct extent_buffer* FUNC_4 (struct btrfs_fs_info*,int ) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (scalar_t__,struct extent_buffer*,int) ;
 int FUNC_7 (struct extent_buffer*,int ) ;
 int FUNC_8 (struct extent_buffer*,scalar_t__) ;
 int FUNC_9 (struct extent_buffer*,int ) ;
 int FUNC_10 (struct extent_buffer*,int) ;
 int FUNC_11 (struct extent_buffer*,int ) ;
 int FUNC_12 (struct extent_buffer*) ;
 int FUNC_13 (struct extent_buffer*) ;
 int FUNC_14 (int ,int *) ;
 TYPE_4__* VAR_5 ;
 int FUNC_15 (struct extent_buffer*) ;
 int FUNC_16 (struct extent_buffer*,int ,int) ;
 int FUNC_17 (struct extent_buffer*) ;
 int FUNC_18 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_19 (int *,scalar_t__,scalar_t__) ;
 int FUNC_20 (struct extent_buffer*,int ) ;
 int FUNC_21 (struct extent_buffer*,int ) ;

__attribute__((used)) static struct extent_buffer *
FUNC_22(struct btrfs_trans_handle *VAR_6, struct btrfs_root *VAR_7,
        u64 VAR_8, int VAR_9, u64 VAR_10)
{
 struct btrfs_fs_info *VAR_11 = VAR_7->fs_info;
 struct extent_buffer *VAR_12;

 VAR_12 = FUNC_4(VAR_11, VAR_8);
 if (FUNC_1(VAR_12))
  return VAR_12;






 if (VAR_12->lock_owner == VAR_5->pid) {
  FUNC_3(VAR_11,
"tree block %llu owner %llu already locked by pid=%d, extent tree corruption detected",
   VAR_12->start, FUNC_5(VAR_12), VAR_5->pid);
  FUNC_15(VAR_12);
  return FUNC_0(-VAR_2);
 }

 FUNC_6(VAR_7->root_key.objectid, VAR_12, VAR_9);
 FUNC_13(VAR_12);
 FUNC_2(VAR_12);
 FUNC_14(VAR_3, &VAR_12->bflags);

 FUNC_12(VAR_12);
 FUNC_17(VAR_12);

 FUNC_16(VAR_12, 0, sizeof(struct btrfs_header));
 FUNC_10(VAR_12, VAR_9);
 FUNC_8(VAR_12, VAR_12->start);
 FUNC_9(VAR_12, VAR_6->transid);
 FUNC_7(VAR_12, VAR_0);
 FUNC_11(VAR_12, VAR_10);
 FUNC_21(VAR_12, VAR_11->fs_devices->metadata_uuid);
 FUNC_20(VAR_12, VAR_11->chunk_tree_uuid);
 if (VAR_7->root_key.objectid == VAR_1) {
  VAR_12->log_index = VAR_7->log_transid % 2;




  if (VAR_12->log_index == 0)
   FUNC_18(&VAR_7->dirty_log_pages, VAR_12->start,
     VAR_12->start + VAR_12->len - 1, VAR_4);
  else
   FUNC_19(&VAR_7->dirty_log_pages, VAR_12->start,
     VAR_12->start + VAR_12->len - 1);
 } else {
  VAR_12->log_index = -1;
  FUNC_18(&VAR_6->transaction->dirty_pages, VAR_12->start,
    VAR_12->start + VAR_12->len - 1, VAR_4);
 }
 VAR_6->dirty = 1;

 return VAR_12;
}
