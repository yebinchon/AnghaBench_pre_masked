
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scrub_ctx {int cancel_req; } ;
struct btrfs_fs_info {int scrub_lock; int scrub_pause_wait; } ;
struct btrfs_device {struct scrub_ctx* scrub_ctx; struct btrfs_fs_info* fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct btrfs_device *VAR_1)
{
 struct btrfs_fs_info *VAR_2 = VAR_1->fs_info;
 struct scrub_ctx *VAR_3;

 FUNC_1(&VAR_2->scrub_lock);
 VAR_3 = VAR_1->scrub_ctx;
 if (!VAR_3) {
  FUNC_2(&VAR_2->scrub_lock);
  return -VAR_0;
 }
 FUNC_0(&VAR_3->cancel_req);
 while (VAR_1->scrub_ctx) {
  FUNC_2(&VAR_2->scrub_lock);
  FUNC_3(VAR_2->scrub_pause_wait,
      VAR_1->scrub_ctx == ((void*)0));
  FUNC_1(&VAR_2->scrub_lock);
 }
 FUNC_2(&VAR_2->scrub_lock);

 return 0;
}
