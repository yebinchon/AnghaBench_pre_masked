
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct scrub_page {int logical; int page; } ;
struct TYPE_4__ {int malloc_errors; } ;
struct scrub_ctx {int stat_lock; TYPE_2__ stat; int is_dev_replace; struct btrfs_fs_info* fs_info; } ;
struct scrub_block {int page_count; int work; struct scrub_page** pagev; struct scrub_ctx* sctx; } ;
struct btrfs_raid_bio {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_bio {int map_type; int raid_map; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {int bi_end_io; struct scrub_block* bi_private; TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct btrfs_fs_info*) ;
 int FUNC_3 (struct btrfs_fs_info*) ;
 int FUNC_4 (int *,int ,int ,int *,int *) ;
 struct bio* FUNC_5 (int ) ;
 int FUNC_6 (struct btrfs_fs_info*,int ,int,int*,struct btrfs_bio**) ;
 int FUNC_7 (struct btrfs_bio*) ;
 int VAR_3 ;
 int FUNC_8 (struct btrfs_raid_bio*,int ,int) ;
 struct btrfs_raid_bio* FUNC_9 (struct btrfs_fs_info*,struct bio*,struct btrfs_bio*,int) ;
 int FUNC_10 (struct btrfs_raid_bio*) ;
 int FUNC_11 (struct scrub_block*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (struct scrub_ctx*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct scrub_block *VAR_6)
{
 struct scrub_ctx *VAR_7 = VAR_6->sctx;
 struct btrfs_fs_info *VAR_8 = VAR_7->fs_info;
 u64 VAR_9 = VAR_6->page_count * VAR_2;
 u64 VAR_10 = VAR_6->pagev[0]->logical;
 struct btrfs_bio *VAR_11 = ((void*)0);
 struct bio *VAR_12;
 struct btrfs_raid_bio *VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_3(VAR_8);
 VAR_14 = FUNC_6(VAR_8, VAR_1, VAR_10,
   &VAR_9, &VAR_11);
 if (VAR_14 || !VAR_11 || !VAR_11->raid_map)
  goto bbio_out;

 if (FUNC_0(!VAR_7->is_dev_replace ||
      !(VAR_11->map_type & VAR_0))) {






  goto bbio_out;
 }

 VAR_12 = FUNC_5(0);
 VAR_12->bi_iter.bi_sector = VAR_10 >> 9;
 VAR_12->bi_private = VAR_6;
 VAR_12->bi_end_io = VAR_4;

 VAR_13 = FUNC_9(VAR_8, VAR_12, VAR_11, VAR_9);
 if (!VAR_13)
  goto rbio_out;

 for (VAR_15 = 0; VAR_15 < VAR_6->page_count; VAR_15++) {
  struct scrub_page *VAR_16 = VAR_6->pagev[VAR_15];

  FUNC_8(VAR_13, VAR_16->page, VAR_16->logical);
 }

 FUNC_4(&VAR_6->work, VAR_3,
   VAR_5, ((void*)0), ((void*)0));
 FUNC_11(VAR_6);
 FUNC_12(VAR_7);
 FUNC_10(VAR_13);
 return;

rbio_out:
 FUNC_1(VAR_12);
bbio_out:
 FUNC_2(VAR_8);
 FUNC_7(VAR_11);
 FUNC_13(&VAR_7->stat_lock);
 VAR_7->stat.malloc_errors++;
 FUNC_14(&VAR_7->stat_lock);
}
