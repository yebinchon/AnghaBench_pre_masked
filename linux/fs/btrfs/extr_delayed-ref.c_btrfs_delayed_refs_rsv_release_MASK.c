
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_block_rsv {int dummy; } ;
struct btrfs_fs_info {struct btrfs_block_rsv delayed_refs_rsv; } ;


 scalar_t__ FUNC_0 (struct btrfs_fs_info*,struct btrfs_block_rsv*,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (struct btrfs_fs_info*,int) ;
 int FUNC_2 (struct btrfs_fs_info*,char*,int ,scalar_t__,int ) ;

void FUNC_3(struct btrfs_fs_info *VAR_0, int VAR_1)
{
 struct btrfs_block_rsv *VAR_2 = &VAR_0->delayed_refs_rsv;
 u64 VAR_3 = FUNC_1(VAR_0, VAR_1);
 u64 VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3,
          ((void*)0));
 if (VAR_4)
  FUNC_2(VAR_0, "delayed_refs_rsv",
           0, VAR_4, 0);
}
