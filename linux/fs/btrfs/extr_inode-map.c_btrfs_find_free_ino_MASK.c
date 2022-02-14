
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_root {scalar_t__ ino_cache_state; TYPE_1__* free_ino_ctl; int ino_cache_wait; int fs_info; } ;
struct TYPE_2__ {scalar_t__ free_space; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct btrfs_root*,int *) ;
 int FUNC_1 (struct btrfs_root*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct btrfs_root*) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(struct btrfs_root *VAR_4, u64 *VAR_5)
{
 if (!FUNC_2(VAR_4->fs_info, VAR_3))
  return FUNC_0(VAR_4, VAR_5);

again:
 *VAR_5 = FUNC_1(VAR_4);

 if (*VAR_5 != 0)
  return 0;

 FUNC_3(VAR_4);

 FUNC_4(VAR_4->ino_cache_wait,
     VAR_4->ino_cache_state == VAR_1 ||
     VAR_4->ino_cache_state == VAR_0 ||
     VAR_4->free_ino_ctl->free_space > 0);

 if (VAR_4->ino_cache_state == VAR_1 &&
     VAR_4->free_ino_ctl->free_space == 0)
  return -VAR_2;
 else if (VAR_4->ino_cache_state == VAR_0)
  return FUNC_0(VAR_4, VAR_5);
 else
  goto again;
}
