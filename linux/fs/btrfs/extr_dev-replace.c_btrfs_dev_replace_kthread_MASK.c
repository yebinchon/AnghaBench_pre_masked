
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_dev_replace {int scrub_progress; TYPE_1__* srcdev; int committed_cursor_left; TYPE_1__* tgtdev; } ;
struct btrfs_fs_info {int flags; struct btrfs_dev_replace dev_replace; } ;
struct TYPE_3__ {int devid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct btrfs_fs_info*,int) ;
 scalar_t__ FUNC_3 (struct btrfs_fs_info*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct btrfs_fs_info*,char*,int ,int ,int ,unsigned int) ;
 int FUNC_6 (struct btrfs_fs_info*,int ,int ,int ,int *,int ,int) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(void *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_2;
 struct btrfs_dev_replace *VAR_4 = &VAR_3->dev_replace;
 u64 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_3);
 VAR_5 = FUNC_8(VAR_5, 10);
 FUNC_5(VAR_3,
  "continuing dev_replace from %s (devid %llu) to target %s @%u%%",
  FUNC_1(VAR_4->srcdev),
  VAR_4->srcdev->devid,
  FUNC_1(VAR_4->tgtdev),
  (unsigned int)VAR_5);

 VAR_6 = FUNC_6(VAR_3, VAR_4->srcdev->devid,
         VAR_4->committed_cursor_left,
         FUNC_4(VAR_4->srcdev),
         &VAR_4->scrub_progress, 0, 1);
 VAR_6 = FUNC_2(VAR_3, VAR_6);
 FUNC_0(VAR_6 && VAR_6 != -VAR_1);

 FUNC_7(VAR_0, &VAR_3->flags);
 return 0;
}
