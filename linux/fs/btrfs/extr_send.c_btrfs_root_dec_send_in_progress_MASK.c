
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int objectid; } ;
struct btrfs_root {scalar_t__ send_in_progress; int root_item_lock; TYPE_1__ root_key; int fs_info; } ;


 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct btrfs_root* VAR_0)
{
 FUNC_1(&VAR_0->root_item_lock);
 VAR_0->send_in_progress--;




 if (VAR_0->send_in_progress < 0)
  FUNC_0(VAR_0->fs_info,
     "send_in_progress unbalanced %d root %llu",
     VAR_0->send_in_progress, VAR_0->root_key.objectid);
 FUNC_2(&VAR_0->root_item_lock);
}
