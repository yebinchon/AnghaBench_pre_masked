
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_trans_handle {int allocating_chunk; scalar_t__ chunk_bytes_reserved; struct btrfs_fs_info* fs_info; } ;
struct btrfs_space_info {int force_alloc; int full; int chunk_alloc; int lock; scalar_t__ max_extent_size; } ;
struct btrfs_fs_info {int metadata_ratio; int data_chunk_allocations; int chunk_mutex; } ;
typedef enum btrfs_chunk_alloc_enum { ____Placeholder_btrfs_chunk_alloc_enum } btrfs_chunk_alloc_enum ;


 int FUNC_0 (struct btrfs_space_info*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct btrfs_trans_handle*,scalar_t__) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 struct btrfs_space_info* FUNC_3 (struct btrfs_fs_info*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct btrfs_space_info*) ;
 int FUNC_5 (struct btrfs_trans_handle*,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (struct btrfs_fs_info*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct btrfs_fs_info*,struct btrfs_space_info*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct btrfs_trans_handle *VAR_5, u64 VAR_6,
        enum btrfs_chunk_alloc_enum VAR_7)
{
 struct btrfs_fs_info *VAR_8 = VAR_5->fs_info;
 struct btrfs_space_info *VAR_9;
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 int VAR_12 = 0;


 if (VAR_5->allocating_chunk)
  return -VAR_3;

 VAR_9 = FUNC_3(VAR_8, VAR_6);
 FUNC_0(VAR_9);

 do {
  FUNC_11(&VAR_9->lock);
  if (VAR_7 < VAR_9->force_alloc)
   VAR_7 = VAR_9->force_alloc;
  VAR_11 = FUNC_10(VAR_8, VAR_9, VAR_7);
  if (VAR_9->full) {

   if (VAR_11)
    VAR_12 = -VAR_3;
   else
    VAR_12 = 0;
   FUNC_12(&VAR_9->lock);
   return VAR_12;
  } else if (!VAR_11) {
   FUNC_12(&VAR_9->lock);
   return 0;
  } else if (VAR_9->chunk_alloc) {






   VAR_10 = 1;
   FUNC_12(&VAR_9->lock);
   FUNC_8(&VAR_8->chunk_mutex);
   FUNC_9(&VAR_8->chunk_mutex);
  } else {

   VAR_9->chunk_alloc = 1;
   VAR_10 = 0;
   FUNC_12(&VAR_9->lock);
  }

  FUNC_6();
 } while (VAR_10);

 FUNC_8(&VAR_8->chunk_mutex);
 VAR_5->allocating_chunk = 1;





 if (FUNC_4(VAR_9))
  VAR_6 |= (VAR_0 | VAR_1);






 if (VAR_6 & VAR_0 && VAR_8->metadata_ratio) {
  VAR_8->data_chunk_allocations++;
  if (!(VAR_8->data_chunk_allocations %
        VAR_8->metadata_ratio))
   FUNC_7(VAR_8);
 }





 FUNC_5(VAR_5, VAR_6);

 VAR_12 = FUNC_1(VAR_5, VAR_6);
 VAR_5->allocating_chunk = 0;

 FUNC_11(&VAR_9->lock);
 if (VAR_12 < 0) {
  if (VAR_12 == -VAR_3)
   VAR_9->full = 1;
  else
   goto out;
 } else {
  VAR_12 = 1;
  VAR_9->max_extent_size = 0;
 }

 VAR_9->force_alloc = VAR_2;
out:
 VAR_9->chunk_alloc = 0;
 FUNC_12(&VAR_9->lock);
 FUNC_9(&VAR_8->chunk_mutex);
 if (VAR_5->chunk_bytes_reserved >= (u64)VAR_4)
  FUNC_2(VAR_5);

 return VAR_12;
}
