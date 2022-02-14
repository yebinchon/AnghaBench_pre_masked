
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int scrub_lock; int scrub_cancel_req; int scrubs_running; int scrub_pause_wait; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(struct btrfs_fs_info *VAR_1)
{
 FUNC_3(&VAR_1->scrub_lock);
 if (!FUNC_2(&VAR_1->scrubs_running)) {
  FUNC_4(&VAR_1->scrub_lock);
  return -VAR_0;
 }

 FUNC_1(&VAR_1->scrub_cancel_req);
 while (FUNC_2(&VAR_1->scrubs_running)) {
  FUNC_4(&VAR_1->scrub_lock);
  FUNC_5(VAR_1->scrub_pause_wait,
      FUNC_2(&VAR_1->scrubs_running) == 0);
  FUNC_3(&VAR_1->scrub_lock);
 }
 FUNC_0(&VAR_1->scrub_cancel_req);
 FUNC_4(&VAR_1->scrub_lock);

 return 0;
}
