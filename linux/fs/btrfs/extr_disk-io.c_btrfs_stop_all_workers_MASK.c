
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int endio_meta_write_workers; int endio_meta_workers; int qgroup_rescan_workers; int flush_workers; int readahead_workers; int caching_workers; int delayed_workers; int submit_workers; int endio_freespace_worker; int endio_write_workers; int rmw_workers; int endio_repair_workers; int endio_raid56_workers; int endio_workers; int workers; int delalloc_workers; int fixup_workers; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct btrfs_fs_info *VAR_0)
{
 FUNC_0(VAR_0->fixup_workers);
 FUNC_0(VAR_0->delalloc_workers);
 FUNC_0(VAR_0->workers);
 FUNC_0(VAR_0->endio_workers);
 FUNC_0(VAR_0->endio_raid56_workers);
 FUNC_0(VAR_0->endio_repair_workers);
 FUNC_0(VAR_0->rmw_workers);
 FUNC_0(VAR_0->endio_write_workers);
 FUNC_0(VAR_0->endio_freespace_worker);
 FUNC_0(VAR_0->submit_workers);
 FUNC_0(VAR_0->delayed_workers);
 FUNC_0(VAR_0->caching_workers);
 FUNC_0(VAR_0->readahead_workers);
 FUNC_0(VAR_0->flush_workers);
 FUNC_0(VAR_0->qgroup_rescan_workers);





 FUNC_0(VAR_0->endio_meta_workers);
 FUNC_0(VAR_0->endio_meta_write_workers);
}
