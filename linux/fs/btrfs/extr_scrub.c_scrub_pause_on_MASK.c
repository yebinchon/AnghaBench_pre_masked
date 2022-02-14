
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int scrub_pause_wait; int scrubs_paused; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct btrfs_fs_info *VAR_0)
{
 FUNC_0(&VAR_0->scrubs_paused);
 FUNC_1(&VAR_0->scrub_pause_wait);
}
