
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct btrfs_dev_replace {int replace_state; int rwsem; TYPE_1__* tgtdev; } ;
struct btrfs_fs_info {int flags; struct btrfs_dev_replace dev_replace; } ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;





 int FUNC_0 (struct task_struct*) ;
 int VAR_1 ;
 int FUNC_1 (struct btrfs_fs_info*,char*) ;
 int FUNC_2 (int *) ;
 struct task_struct* FUNC_3 (int ,struct btrfs_fs_info*,char*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct btrfs_fs_info *VAR_2)
{
 struct task_struct *VAR_3;
 struct btrfs_dev_replace *VAR_4 = &VAR_2->dev_replace;

 FUNC_2(&VAR_4->rwsem);

 switch (VAR_4->replace_state) {
 case 130:
 case 131:
 case 132:
  FUNC_5(&VAR_4->rwsem);
  return 0;
 case 129:
  break;
 case 128:
  VAR_4->replace_state =
   129;
  break;
 }
 if (!VAR_4->tgtdev || !VAR_4->tgtdev->bdev) {
  FUNC_1(VAR_2,
      "cannot continue dev_replace, tgtdev is missing");
  FUNC_1(VAR_2,
      "you may cancel the operation after 'mount -o degraded'");
  VAR_4->replace_state =
     128;
  FUNC_5(&VAR_4->rwsem);
  return 0;
 }
 FUNC_5(&VAR_4->rwsem);






 if (FUNC_4(VAR_0, &VAR_2->flags)) {
  FUNC_2(&VAR_4->rwsem);
  VAR_4->replace_state =
     128;
  FUNC_5(&VAR_4->rwsem);
  FUNC_1(VAR_2,
  "cannot resume dev-replace, other exclusive operation running");
  return 0;
 }

 VAR_3 = FUNC_3(VAR_1, VAR_2, "btrfs-devrepl");
 return FUNC_0(VAR_3);
}
