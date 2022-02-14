
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scrub_bio {int work; struct bio* bio; int status; TYPE_1__* dev; } ;
struct btrfs_fs_info {int scrub_workers; } ;
struct bio {int bi_status; struct scrub_bio* bi_private; } ;
struct TYPE_2__ {struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0)
{
 struct scrub_bio *VAR_1 = VAR_0->bi_private;
 struct btrfs_fs_info *VAR_2 = VAR_1->dev->fs_info;

 VAR_1->status = VAR_0->bi_status;
 VAR_1->bio = VAR_0;

 FUNC_0(VAR_2->scrub_workers, &VAR_1->work);
}
