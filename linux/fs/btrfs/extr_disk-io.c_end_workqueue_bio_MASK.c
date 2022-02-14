
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_workqueue {int dummy; } ;
struct btrfs_fs_info {struct btrfs_workqueue* endio_workers; struct btrfs_workqueue* endio_meta_workers; struct btrfs_workqueue* endio_raid56_workers; struct btrfs_workqueue* endio_repair_workers; struct btrfs_workqueue* endio_write_workers; struct btrfs_workqueue* endio_freespace_worker; struct btrfs_workqueue* endio_meta_write_workers; } ;
struct btrfs_end_io_wq {scalar_t__ metadata; int work; int status; struct btrfs_fs_info* info; } ;
struct bio {int bi_status; struct btrfs_end_io_wq* bi_private; } ;
typedef int btrfs_work_func_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int ,int ,int *,int *) ;
 int FUNC_2 (struct btrfs_workqueue*,int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_13)
{
 struct btrfs_end_io_wq *VAR_14 = VAR_13->bi_private;
 struct btrfs_fs_info *VAR_15;
 struct btrfs_workqueue *VAR_16;
 btrfs_work_func_t VAR_17;

 VAR_15 = VAR_14->info;
 VAR_14->status = VAR_13->bi_status;

 if (FUNC_0(VAR_13) == VAR_4) {
  if (VAR_14->metadata == VAR_2) {
   VAR_16 = VAR_15->endio_meta_write_workers;
   VAR_17 = VAR_7;
  } else if (VAR_14->metadata == VAR_1) {
   VAR_16 = VAR_15->endio_freespace_worker;
   VAR_17 = VAR_11;
  } else if (VAR_14->metadata == VAR_3) {
   VAR_16 = VAR_15->endio_raid56_workers;
   VAR_17 = VAR_8;
  } else {
   VAR_16 = VAR_15->endio_write_workers;
   VAR_17 = VAR_10;
  }
 } else {
  if (FUNC_3(VAR_14->metadata ==
        VAR_0)) {
   VAR_16 = VAR_15->endio_repair_workers;
   VAR_17 = VAR_9;
  } else if (VAR_14->metadata == VAR_3) {
   VAR_16 = VAR_15->endio_raid56_workers;
   VAR_17 = VAR_8;
  } else if (VAR_14->metadata) {
   VAR_16 = VAR_15->endio_meta_workers;
   VAR_17 = VAR_6;
  } else {
   VAR_16 = VAR_15->endio_workers;
   VAR_17 = VAR_5;
  }
 }

 FUNC_1(&VAR_14->work, VAR_17, VAR_12, ((void*)0), ((void*)0));
 FUNC_2(VAR_16, &VAR_14->work);
}
