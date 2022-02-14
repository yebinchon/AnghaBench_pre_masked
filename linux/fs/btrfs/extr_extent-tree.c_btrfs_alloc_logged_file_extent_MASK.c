
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {struct btrfs_fs_info* fs_info; } ;
struct btrfs_space_info {int lock; int bytes_reserved; } ;
struct btrfs_key {int offset; int objectid; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_group_cache {int lock; int reserved; struct btrfs_space_info* space_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_fs_info*,int ,int ) ;
 int FUNC_1 (struct btrfs_trans_handle*,int ,int ,int ,int ,int ,struct btrfs_key*,int) ;
 int FUNC_2 (struct btrfs_fs_info*,int ) ;
 struct btrfs_block_group_cache* FUNC_3 (struct btrfs_fs_info*,int ) ;
 int FUNC_4 (struct btrfs_block_group_cache*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct btrfs_trans_handle *VAR_2,
       u64 VAR_3, u64 VAR_4, u64 VAR_5,
       struct btrfs_key *VAR_6)
{
 struct btrfs_fs_info *VAR_7 = VAR_2->fs_info;
 int VAR_8;
 struct btrfs_block_group_cache *VAR_9;
 struct btrfs_space_info *VAR_10;





 if (!FUNC_2(VAR_7, VAR_1)) {
  VAR_8 = FUNC_0(VAR_7, VAR_6->objectid,
           VAR_6->offset);
  if (VAR_8)
   return VAR_8;
 }

 VAR_9 = FUNC_3(VAR_7, VAR_6->objectid);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = VAR_9->space_info;
 FUNC_5(&VAR_10->lock);
 FUNC_5(&VAR_9->lock);
 VAR_10->bytes_reserved += VAR_6->offset;
 VAR_9->reserved += VAR_6->offset;
 FUNC_6(&VAR_9->lock);
 FUNC_6(&VAR_10->lock);

 VAR_8 = FUNC_1(VAR_2, 0, VAR_3, 0, VAR_4,
      VAR_5, VAR_6, 1);
 FUNC_4(VAR_9);
 return VAR_8;
}
