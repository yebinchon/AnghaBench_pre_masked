
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int chunk_bytes_reserved; int new_bgs; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int chunk_block_rsv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_fs_info*,int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct btrfs_trans_handle *VAR_0)
{
 struct btrfs_fs_info *VAR_1 = VAR_0->fs_info;

 if (!VAR_0->chunk_bytes_reserved)
  return;

 FUNC_0(!FUNC_2(&VAR_0->new_bgs));

 FUNC_1(VAR_1, &VAR_1->chunk_block_rsv,
    VAR_0->chunk_bytes_reserved);
 VAR_0->chunk_bytes_reserved = 0;
}
