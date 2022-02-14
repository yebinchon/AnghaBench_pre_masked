
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int ino_cache_wait; int ino_cache_lock; int ino_cache_state; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_fs_info*,int ,char*) ;
 int FUNC_1 (struct btrfs_fs_info*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct btrfs_root *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_2->fs_info;

 FUNC_1(VAR_3, "failed to start inode caching task");
 FUNC_0(VAR_3, VAR_1,
         "disabling inode map caching");
 FUNC_2(&VAR_2->ino_cache_lock);
 VAR_2->ino_cache_state = VAR_0;
 FUNC_3(&VAR_2->ino_cache_lock);
 FUNC_4(&VAR_2->ino_cache_wait);
}
