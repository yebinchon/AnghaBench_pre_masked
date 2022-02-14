
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int replace_wait; int rwsem; int lock_finishing_cancel_unmount; } ;
struct btrfs_fs_info {TYPE_1__ dev_replace; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct btrfs_fs_info *VAR_0)
{
 FUNC_2(&VAR_0->dev_replace.lock_finishing_cancel_unmount);
 FUNC_0(&VAR_0->dev_replace.rwsem);
 FUNC_1(&VAR_0->dev_replace.replace_wait);
}
