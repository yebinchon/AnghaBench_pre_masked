
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int bytes_reserved; int * block_rsv; int transid; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int trans_block_rsv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_fs_info*,int *,int ) ;
 int FUNC_2 (struct btrfs_fs_info*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct btrfs_trans_handle *VAR_0)

{
 struct btrfs_fs_info *VAR_1 = VAR_0->fs_info;

 if (!VAR_0->block_rsv) {
  FUNC_0(!VAR_0->bytes_reserved);
  return;
 }

 if (!VAR_0->bytes_reserved)
  return;

 FUNC_0(VAR_0->block_rsv == &VAR_1->trans_block_rsv);
 FUNC_2(VAR_1, "transaction",
          VAR_0->transid, VAR_0->bytes_reserved, 0);
 FUNC_1(VAR_1, VAR_0->block_rsv,
    VAR_0->bytes_reserved);
 VAR_0->bytes_reserved = 0;
}
