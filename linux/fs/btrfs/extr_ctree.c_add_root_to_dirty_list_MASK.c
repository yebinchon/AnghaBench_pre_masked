
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_root {int dirty_list; TYPE_1__ root_key; int state; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int trans_lock; int dirty_cowonly_roots; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct btrfs_root *VAR_3)
{
 struct btrfs_fs_info *VAR_4 = VAR_3->fs_info;

 if (FUNC_5(VAR_1, &VAR_3->state) ||
     !FUNC_5(VAR_2, &VAR_3->state))
  return;

 FUNC_2(&VAR_4->trans_lock);
 if (!FUNC_4(VAR_1, &VAR_3->state)) {

  if (VAR_3->root_key.objectid == VAR_0)
   FUNC_1(&VAR_3->dirty_list,
           &VAR_4->dirty_cowonly_roots);
  else
   FUNC_0(&VAR_3->dirty_list,
      &VAR_4->dirty_cowonly_roots);
 }
 FUNC_3(&VAR_4->trans_lock);
}
