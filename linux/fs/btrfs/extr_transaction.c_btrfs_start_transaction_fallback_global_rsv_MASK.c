
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int transid; int bytes_reserved; int * block_rsv; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int trans_block_rsv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_trans_handle* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int VAR_2 ;
 int FUNC_3 (struct btrfs_fs_info*,unsigned int) ;
 int FUNC_4 (struct btrfs_fs_info*,int *,int ,int) ;
 int FUNC_5 (struct btrfs_trans_handle*) ;
 struct btrfs_trans_handle* FUNC_6 (struct btrfs_root*,int ) ;
 struct btrfs_trans_handle* FUNC_7 (struct btrfs_root*,unsigned int,int ,int ,int) ;
 int FUNC_8 (struct btrfs_fs_info*,char*,int ,int ,int) ;

struct btrfs_trans_handle *FUNC_9(
     struct btrfs_root *VAR_3,
     unsigned int VAR_4,
     int VAR_5)
{
 struct btrfs_fs_info *VAR_6 = VAR_3->fs_info;
 struct btrfs_trans_handle *VAR_7;
 u64 VAR_8;
 int VAR_9;







 VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_2,
      VAR_0, 0);
 if (!FUNC_1(VAR_7) || FUNC_2(VAR_7) != -VAR_1)
  return VAR_7;

 VAR_7 = FUNC_6(VAR_3, 0);
 if (FUNC_1(VAR_7))
  return VAR_7;

 VAR_8 = FUNC_3(VAR_6, VAR_4);
 VAR_9 = FUNC_4(VAR_6, &VAR_6->trans_block_rsv,
           VAR_8, VAR_5);
 if (VAR_9) {
  FUNC_5(VAR_7);
  return FUNC_0(VAR_9);
 }

 VAR_7->block_rsv = &VAR_6->trans_block_rsv;
 VAR_7->bytes_reserved = VAR_8;
 FUNC_8(VAR_6, "transaction",
          VAR_7->transid, VAR_8, 1);

 return VAR_7;
}
