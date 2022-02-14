
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int replace_wait; int bio_counter; } ;
struct btrfs_fs_info {int fs_state; TYPE_1__ dev_replace; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(struct btrfs_fs_info *VAR_1)
{
 while (1) {
  FUNC_2(&VAR_1->dev_replace.bio_counter);
  if (FUNC_1(!FUNC_3(VAR_0,
         &VAR_1->fs_state)))
   break;

  FUNC_0(VAR_1);
  FUNC_4(VAR_1->dev_replace.replace_wait,
      !FUNC_3(VAR_0,
         &VAR_1->fs_state));
 }
}
