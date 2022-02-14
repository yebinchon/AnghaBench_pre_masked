
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scrub_block {int work; scalar_t__ no_io_error_seen; TYPE_1__* sctx; } ;
struct btrfs_fs_info {int scrub_workers; } ;
struct bio {scalar_t__ bi_status; struct scrub_block* bi_private; } ;
struct TYPE_2__ {struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 struct scrub_block *VAR_1 = VAR_0->bi_private;
 struct btrfs_fs_info *VAR_2 = VAR_1->sctx->fs_info;

 if (VAR_0->bi_status)
  VAR_1->no_io_error_seen = 0;

 FUNC_0(VAR_0);

 FUNC_1(VAR_2->scrub_workers, &VAR_1->work);
}
