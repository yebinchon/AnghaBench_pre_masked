
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int scrub_pause_wait; int scrub_lock; int scrubs_paused; } ;


 int FUNC_0 (struct btrfs_fs_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct btrfs_fs_info *VAR_0)
{
 FUNC_2(&VAR_0->scrub_lock);
 FUNC_0(VAR_0);
 FUNC_1(&VAR_0->scrubs_paused);
 FUNC_3(&VAR_0->scrub_lock);

 FUNC_4(&VAR_0->scrub_pause_wait);
}
