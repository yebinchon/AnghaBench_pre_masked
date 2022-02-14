
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_root {scalar_t__ ino_cache_state; int ino_cache_lock; struct btrfs_free_space_ctl* free_ino_pinned; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int commit_root_sem; } ;
struct btrfs_free_space_ctl {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_fs_info*,struct btrfs_free_space_ctl*,int ,int) ;
 int FUNC_1 (struct btrfs_fs_info*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct btrfs_root*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct btrfs_root *VAR_2, u64 VAR_3)
{
 struct btrfs_fs_info *VAR_4 = VAR_2->fs_info;
 struct btrfs_free_space_ctl *VAR_5 = VAR_2->free_ino_pinned;

 if (!FUNC_1(VAR_4, VAR_1))
  return;
again:
 if (VAR_2->ino_cache_state == VAR_0) {
  FUNC_0(VAR_4, VAR_5, VAR_3, 1);
 } else {
  FUNC_2(&VAR_4->commit_root_sem);
  FUNC_3(&VAR_2->ino_cache_lock);
  if (VAR_2->ino_cache_state == VAR_0) {
   FUNC_4(&VAR_2->ino_cache_lock);
   FUNC_6(&VAR_4->commit_root_sem);
   goto again;
  }
  FUNC_4(&VAR_2->ino_cache_lock);

  FUNC_5(VAR_2);

  FUNC_0(VAR_4, VAR_5, VAR_3, 1);

  FUNC_6(&VAR_4->commit_root_sem);
 }
}
