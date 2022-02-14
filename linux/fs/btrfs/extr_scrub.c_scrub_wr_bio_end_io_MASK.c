
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scrub_bio {int work; struct bio* bio; int status; TYPE_1__* dev; } ;
struct btrfs_fs_info {int scrub_wr_completion_workers; } ;
struct bio {int bi_status; struct scrub_bio* bi_private; } ;
struct TYPE_2__ {struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (int *,int ,int ,int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_2)
{
 struct scrub_bio *VAR_3 = VAR_2->bi_private;
 struct btrfs_fs_info *VAR_4 = VAR_3->dev->fs_info;

 VAR_3->status = VAR_2->bi_status;
 VAR_3->bio = VAR_2;

 FUNC_0(&VAR_3->work, VAR_0,
    VAR_1, ((void*)0), ((void*)0));
 FUNC_1(VAR_4->scrub_wr_completion_workers, &VAR_3->work);
}
