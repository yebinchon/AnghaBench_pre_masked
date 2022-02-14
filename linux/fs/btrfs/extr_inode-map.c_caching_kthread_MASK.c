
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int ino_cache_progress; int highest_objectid; int ino_cache_wait; int ino_cache_lock; int ino_cache_state; struct btrfs_free_space_ctl* free_ino_ctl; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int skip_locking; int search_commit_root; int* slots; struct extent_buffer** nodes; int reada; } ;
struct btrfs_key {int objectid; scalar_t__ type; scalar_t__ offset; } ;
struct btrfs_fs_info {int commit_root_sem; } ;
struct btrfs_free_space_ctl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_fs_info*,struct btrfs_free_space_ctl*,int,int) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_path*) ;
 scalar_t__ FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_7 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_8 (struct btrfs_path*) ;
 int FUNC_9 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_10 (struct btrfs_fs_info*,int ) ;
 scalar_t__ FUNC_11 (struct btrfs_fs_info*) ;
 int FUNC_12 (struct btrfs_root*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct btrfs_root*) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(void *VAR_6)
{
 struct btrfs_root *VAR_7 = VAR_6;
 struct btrfs_fs_info *VAR_8 = VAR_7->fs_info;
 struct btrfs_free_space_ctl *VAR_9 = VAR_7->free_ino_ctl;
 struct btrfs_key VAR_10;
 struct btrfs_path *VAR_11;
 struct extent_buffer *VAR_12;
 u64 VAR_13 = (u64)-1;
 int VAR_14;
 int VAR_15;

 if (!FUNC_10(VAR_8, VAR_4))
  return 0;

 VAR_11 = FUNC_2();
 if (!VAR_11) {
  FUNC_14(VAR_7);
  return -VAR_3;
 }


 VAR_11->skip_locking = 1;
 VAR_11->search_commit_root = 1;
 VAR_11->reada = VAR_5;

 VAR_10.objectid = VAR_1;
 VAR_10.offset = 0;
 VAR_10.type = VAR_2;
again:

 FUNC_13(&VAR_8->commit_root_sem);

 VAR_15 = FUNC_9(((void*)0), VAR_7, &VAR_10, VAR_11, 0, 0);
 if (VAR_15 < 0)
  goto out;

 while (1) {
  if (FUNC_4(VAR_8))
   goto out;

  VAR_12 = VAR_11->nodes[0];
  VAR_14 = VAR_11->slots[0];
  if (VAR_14 >= FUNC_5(VAR_12)) {
   VAR_15 = FUNC_7(VAR_7, VAR_11);
   if (VAR_15 < 0)
    goto out;
   else if (VAR_15 > 0)
    break;

   if (FUNC_15() ||
       FUNC_11(VAR_8)) {
    VAR_12 = VAR_11->nodes[0];

    if (FUNC_0(FUNC_5(VAR_12) == 0))
     break;





    FUNC_6(VAR_12, &VAR_10, 0);
    FUNC_8(VAR_11);
    VAR_7->ino_cache_progress = VAR_13;
    FUNC_19(&VAR_8->commit_root_sem);
    FUNC_16(1);
    goto again;
   } else
    continue;
  }

  FUNC_6(VAR_12, &VAR_10, VAR_14);

  if (VAR_10.type != VAR_2)
   goto next;

  if (VAR_10.objectid >= VAR_7->highest_objectid)
   break;

  if (VAR_13 != (u64)-1 && VAR_13 + 1 != VAR_10.objectid) {
   FUNC_1(VAR_8, VAR_9, VAR_13 + 1,
            VAR_10.objectid - VAR_13 - 1);
   FUNC_20(&VAR_7->ino_cache_wait);
  }

  VAR_13 = VAR_10.objectid;
next:
  VAR_11->slots[0]++;
 }

 if (VAR_13 < VAR_7->highest_objectid - 1) {
  FUNC_1(VAR_8, VAR_9, VAR_13 + 1,
           VAR_7->highest_objectid - VAR_13 - 1);
 }

 FUNC_17(&VAR_7->ino_cache_lock);
 VAR_7->ino_cache_state = VAR_0;
 FUNC_18(&VAR_7->ino_cache_lock);

 VAR_7->ino_cache_progress = (u64)-1;
 FUNC_12(VAR_7);
out:
 FUNC_20(&VAR_7->ino_cache_wait);
 FUNC_19(&VAR_8->commit_root_sem);

 FUNC_3(VAR_11);

 return VAR_15;
}
