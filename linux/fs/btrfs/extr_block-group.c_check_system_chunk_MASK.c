
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_trans_handle {int chunk_bytes_reserved; struct btrfs_fs_info* fs_info; } ;
struct btrfs_space_info {scalar_t__ total_bytes; int lock; } ;
struct btrfs_fs_info {int chunk_block_rsv; int chunk_root; int chunk_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_trans_handle*,scalar_t__) ;
 int FUNC_1 (int ,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct btrfs_fs_info*,int) ;
 scalar_t__ FUNC_3 (struct btrfs_fs_info*,scalar_t__) ;
 int FUNC_4 (struct btrfs_fs_info*,struct btrfs_space_info*,int ,int ) ;
 struct btrfs_space_info* FUNC_5 (struct btrfs_fs_info*,int ) ;
 int FUNC_6 (struct btrfs_fs_info*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct btrfs_space_info*,int) ;
 scalar_t__ FUNC_8 (struct btrfs_fs_info*) ;
 scalar_t__ FUNC_9 (struct btrfs_fs_info*,int ) ;
 scalar_t__ FUNC_10 (struct btrfs_fs_info*,scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(struct btrfs_trans_handle *VAR_3, u64 VAR_4)
{
 struct btrfs_fs_info *VAR_5 = VAR_3->fs_info;
 struct btrfs_space_info *VAR_6;
 u64 VAR_7;
 u64 VAR_8;
 int VAR_9 = 0;
 u64 VAR_10;





 FUNC_11(&VAR_5->chunk_mutex);

 VAR_6 = FUNC_5(VAR_5, VAR_0);
 FUNC_12(&VAR_6->lock);
 VAR_7 = VAR_6->total_bytes - FUNC_7(VAR_6, 1);
 FUNC_13(&VAR_6->lock);

 VAR_10 = FUNC_10(VAR_5, VAR_4);


 VAR_8 = FUNC_3(VAR_5, VAR_10) +
  FUNC_2(VAR_5, 1);

 if (VAR_7 < VAR_8 && FUNC_9(VAR_5, VAR_2)) {
  FUNC_6(VAR_5, "left=%llu, need=%llu, flags=%llu",
      VAR_7, VAR_8, VAR_4);
  FUNC_4(VAR_5, VAR_6, 0, 0);
 }

 if (VAR_7 < VAR_8) {
  u64 VAR_11 = FUNC_8(VAR_5);







  VAR_9 = FUNC_0(VAR_3, VAR_11);
 }

 if (!VAR_9) {
  VAR_9 = FUNC_1(VAR_5->chunk_root,
       &VAR_5->chunk_block_rsv,
       VAR_8, VAR_1);
  if (!VAR_9)
   VAR_3->chunk_bytes_reserved += VAR_8;
 }
}
