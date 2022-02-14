
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {int dummy; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {scalar_t__ ino_cache_state; TYPE_1__ root_key; int ino_cache_wait; int ino_cache_lock; struct btrfs_free_space_ctl* free_ino_ctl; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_free_space_ctl {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct btrfs_fs_info*,struct btrfs_free_space_ctl*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct btrfs_root*,scalar_t__*) ;
 int FUNC_3 (struct btrfs_fs_info*,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct btrfs_root*) ;
 struct task_struct* FUNC_5 (int ,struct btrfs_root*,char*,int ) ;
 int FUNC_6 (struct btrfs_fs_info*,struct btrfs_root*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct btrfs_root *VAR_6)
{
 struct btrfs_fs_info *VAR_7 = VAR_6->fs_info;
 struct btrfs_free_space_ctl *VAR_8 = VAR_6->free_ino_ctl;
 struct task_struct *VAR_9;
 int VAR_10;
 u64 VAR_11;

 if (!FUNC_3(VAR_7, VAR_4))
  return;

 FUNC_7(&VAR_6->ino_cache_lock);
 if (VAR_6->ino_cache_state != VAR_1) {
  FUNC_8(&VAR_6->ino_cache_lock);
  return;
 }

 VAR_6->ino_cache_state = VAR_2;
 FUNC_8(&VAR_6->ino_cache_lock);

 VAR_10 = FUNC_6(VAR_7, VAR_6);
 if (VAR_10 == 1) {
  FUNC_7(&VAR_6->ino_cache_lock);
  VAR_6->ino_cache_state = VAR_0;
  FUNC_8(&VAR_6->ino_cache_lock);
  FUNC_9(&VAR_6->ino_cache_wait);
  return;
 }
 VAR_10 = FUNC_2(VAR_6, &VAR_11);
 if (!VAR_10 && VAR_11 <= VAR_3) {
  FUNC_1(VAR_7, VAR_8, VAR_11,
           VAR_3 - VAR_11 + 1);
  FUNC_9(&VAR_6->ino_cache_wait);
 }

 VAR_9 = FUNC_5(VAR_5, VAR_6, "btrfs-ino-cache-%llu",
     VAR_6->root_key.objectid);
 if (FUNC_0(VAR_9))
  FUNC_4(VAR_6);
}
