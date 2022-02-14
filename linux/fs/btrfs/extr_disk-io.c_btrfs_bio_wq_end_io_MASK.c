
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int dummy; } ;
struct btrfs_end_io_wq {int metadata; struct bio* bio; scalar_t__ status; struct btrfs_fs_info* info; int end_io; struct btrfs_end_io_wq* private; } ;
struct bio {int bi_end_io; struct btrfs_end_io_wq* bi_private; } ;
typedef enum btrfs_wq_endio_type { ____Placeholder_btrfs_wq_endio_type } btrfs_wq_endio_type ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btrfs_end_io_wq* FUNC_0 (int ,int ) ;

blk_status_t FUNC_1(struct btrfs_fs_info *VAR_4, struct bio *VAR_5,
   enum btrfs_wq_endio_type VAR_6)
{
 struct btrfs_end_io_wq *VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_7)
  return VAR_0;

 VAR_7->private = VAR_5->bi_private;
 VAR_7->end_io = VAR_5->bi_end_io;
 VAR_7->info = VAR_4;
 VAR_7->status = 0;
 VAR_7->bio = VAR_5;
 VAR_7->metadata = VAR_6;

 VAR_5->bi_private = VAR_7;
 VAR_5->bi_end_io = VAR_3;
 return 0;
}
