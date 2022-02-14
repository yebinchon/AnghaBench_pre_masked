
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct scrub_parity {int logic_start; int nsectors; int dbitmap; int ebitmap; int scrub_dev; scalar_t__ logic_end; struct scrub_ctx* sctx; } ;
struct TYPE_4__ {int malloc_errors; } ;
struct scrub_ctx {int stat_lock; TYPE_2__ stat; struct btrfs_fs_info* fs_info; } ;
struct btrfs_raid_bio {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_bio {int raid_map; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {int bi_end_io; struct scrub_parity* bi_private; TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct btrfs_fs_info*) ;
 int FUNC_4 (struct btrfs_fs_info*) ;
 struct bio* FUNC_5 (int ) ;
 int FUNC_6 (struct btrfs_fs_info*,int ,int,scalar_t__*,struct btrfs_bio**) ;
 int FUNC_7 (struct btrfs_bio*) ;
 struct btrfs_raid_bio* FUNC_8 (struct btrfs_fs_info*,struct bio*,struct btrfs_bio*,scalar_t__,int ,int ,int ) ;
 int FUNC_9 (struct btrfs_raid_bio*) ;
 int FUNC_10 (struct scrub_parity*) ;
 int VAR_1 ;
 int FUNC_11 (struct scrub_ctx*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct scrub_parity *VAR_2)
{
 struct scrub_ctx *VAR_3 = VAR_2->sctx;
 struct btrfs_fs_info *VAR_4 = VAR_3->fs_info;
 struct bio *VAR_5;
 struct btrfs_raid_bio *VAR_6;
 struct btrfs_bio *VAR_7 = ((void*)0);
 u64 VAR_8;
 int VAR_9;

 if (!FUNC_1(VAR_2->dbitmap, VAR_2->dbitmap, VAR_2->ebitmap,
      VAR_2->nsectors))
  goto out;

 VAR_8 = VAR_2->logic_end - VAR_2->logic_start;

 FUNC_4(VAR_4);
 VAR_9 = FUNC_6(VAR_4, VAR_0, VAR_2->logic_start,
          &VAR_8, &VAR_7);
 if (VAR_9 || !VAR_7 || !VAR_7->raid_map)
  goto bbio_out;

 VAR_5 = FUNC_5(0);
 VAR_5->bi_iter.bi_sector = VAR_2->logic_start >> 9;
 VAR_5->bi_private = VAR_2;
 VAR_5->bi_end_io = VAR_1;

 VAR_6 = FUNC_8(VAR_4, VAR_5, VAR_7,
           VAR_8, VAR_2->scrub_dev,
           VAR_2->dbitmap,
           VAR_2->nsectors);
 if (!VAR_6)
  goto rbio_out;

 FUNC_11(VAR_3);
 FUNC_9(VAR_6);
 return;

rbio_out:
 FUNC_0(VAR_5);
bbio_out:
 FUNC_3(VAR_4);
 FUNC_7(VAR_7);
 FUNC_2(VAR_2->ebitmap, VAR_2->ebitmap, VAR_2->dbitmap,
    VAR_2->nsectors);
 FUNC_12(&VAR_3->stat_lock);
 VAR_3->stat.malloc_errors++;
 FUNC_13(&VAR_3->stat_lock);
out:
 FUNC_10(VAR_2);
}
