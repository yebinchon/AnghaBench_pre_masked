
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct btrfs_fs_info {int thread_pool_size; void* qgroup_rescan_workers; void* delayed_workers; void* fixup_workers; void* readahead_workers; void* caching_workers; void* rmw_workers; void* endio_freespace_worker; void* endio_raid56_workers; void* endio_write_workers; void* endio_repair_workers; void* endio_meta_write_workers; void* endio_meta_workers; void* endio_workers; void* flush_workers; void* submit_workers; void* delalloc_workers; void* workers; } ;
struct btrfs_fs_devices {int num_devices; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 void* FUNC_0 (struct btrfs_fs_info*,char*,unsigned int,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct btrfs_fs_info *VAR_6,
  struct btrfs_fs_devices *VAR_7)
{
 u32 VAR_8 = VAR_6->thread_pool_size;
 unsigned int VAR_9 = VAR_3 | VAR_1 | VAR_4;

 VAR_6->workers =
  FUNC_0(VAR_6, "worker",
          VAR_9 | VAR_2, VAR_8, 16);

 VAR_6->delalloc_workers =
  FUNC_0(VAR_6, "delalloc",
          VAR_9, VAR_8, 2);

 VAR_6->flush_workers =
  FUNC_0(VAR_6, "flush_delalloc",
          VAR_9, VAR_8, 0);

 VAR_6->caching_workers =
  FUNC_0(VAR_6, "cache", VAR_9, VAR_8, 0);






 VAR_6->submit_workers =
  FUNC_0(VAR_6, "submit", VAR_9,
          FUNC_1(VAR_5, VAR_7->num_devices,
         VAR_8), 64);

 VAR_6->fixup_workers =
  FUNC_0(VAR_6, "fixup", VAR_9, 1, 0);





 VAR_6->endio_workers =
  FUNC_0(VAR_6, "endio", VAR_9, VAR_8, 4);
 VAR_6->endio_meta_workers =
  FUNC_0(VAR_6, "endio-meta", VAR_9,
          VAR_8, 4);
 VAR_6->endio_meta_write_workers =
  FUNC_0(VAR_6, "endio-meta-write", VAR_9,
          VAR_8, 2);
 VAR_6->endio_raid56_workers =
  FUNC_0(VAR_6, "endio-raid56", VAR_9,
          VAR_8, 4);
 VAR_6->endio_repair_workers =
  FUNC_0(VAR_6, "endio-repair", VAR_9, 1, 0);
 VAR_6->rmw_workers =
  FUNC_0(VAR_6, "rmw", VAR_9, VAR_8, 2);
 VAR_6->endio_write_workers =
  FUNC_0(VAR_6, "endio-write", VAR_9,
          VAR_8, 2);
 VAR_6->endio_freespace_worker =
  FUNC_0(VAR_6, "freespace-write", VAR_9,
          VAR_8, 0);
 VAR_6->delayed_workers =
  FUNC_0(VAR_6, "delayed-meta", VAR_9,
          VAR_8, 0);
 VAR_6->readahead_workers =
  FUNC_0(VAR_6, "readahead", VAR_9,
          VAR_8, 2);
 VAR_6->qgroup_rescan_workers =
  FUNC_0(VAR_6, "qgroup-rescan", VAR_9, 1, 0);

 if (!(VAR_6->workers && VAR_6->delalloc_workers &&
       VAR_6->submit_workers && VAR_6->flush_workers &&
       VAR_6->endio_workers && VAR_6->endio_meta_workers &&
       VAR_6->endio_meta_write_workers &&
       VAR_6->endio_repair_workers &&
       VAR_6->endio_write_workers && VAR_6->endio_raid56_workers &&
       VAR_6->endio_freespace_worker && VAR_6->rmw_workers &&
       VAR_6->caching_workers && VAR_6->readahead_workers &&
       VAR_6->fixup_workers && VAR_6->delayed_workers &&
       VAR_6->qgroup_rescan_workers)) {
  return -VAR_0;
 }

 return 0;
}
