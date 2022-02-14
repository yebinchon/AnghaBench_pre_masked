
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btrfs_fs_info {int scrub_wr_completion_workers; int readahead_workers; int delayed_workers; int endio_freespace_worker; int endio_write_workers; int endio_meta_write_workers; int endio_meta_workers; int endio_workers; int caching_workers; int submit_workers; int delalloc_workers; int workers; scalar_t__ thread_pool_size; } ;


 int FUNC_0 (struct btrfs_fs_info*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct btrfs_fs_info *VAR_0,
         u32 VAR_1, u32 VAR_2)
{
 if (VAR_1 == VAR_2)
  return;

 VAR_0->thread_pool_size = VAR_1;

 FUNC_0(VAR_0, "resize thread pool %d -> %d",
        VAR_2, VAR_1);

 FUNC_1(VAR_0->workers, VAR_1);
 FUNC_1(VAR_0->delalloc_workers, VAR_1);
 FUNC_1(VAR_0->submit_workers, VAR_1);
 FUNC_1(VAR_0->caching_workers, VAR_1);
 FUNC_1(VAR_0->endio_workers, VAR_1);
 FUNC_1(VAR_0->endio_meta_workers, VAR_1);
 FUNC_1(VAR_0->endio_meta_write_workers,
    VAR_1);
 FUNC_1(VAR_0->endio_write_workers, VAR_1);
 FUNC_1(VAR_0->endio_freespace_worker, VAR_1);
 FUNC_1(VAR_0->delayed_workers, VAR_1);
 FUNC_1(VAR_0->readahead_workers, VAR_1);
 FUNC_1(VAR_0->scrub_wr_completion_workers,
    VAR_1);
}
