
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_block_rsv {scalar_t__ space_info; int full; } ;
struct btrfs_fs_info {struct btrfs_block_rsv delayed_refs_rsv; struct btrfs_block_rsv global_block_rsv; } ;


 int FUNC_0 (struct btrfs_fs_info*,struct btrfs_block_rsv*,struct btrfs_block_rsv*,int ,int *) ;

u64 FUNC_1(struct btrfs_fs_info *VAR_0,
         struct btrfs_block_rsv *VAR_1,
         u64 VAR_2, u64 *VAR_3)
{
 struct btrfs_block_rsv *VAR_4 = &VAR_0->global_block_rsv;
 struct btrfs_block_rsv *VAR_5 = &VAR_0->delayed_refs_rsv;
 struct btrfs_block_rsv *VAR_6 = ((void*)0);





 if (VAR_1 == VAR_5)
  VAR_6 = VAR_4;
 else if (VAR_1 != VAR_4 && !VAR_5->full)
  VAR_6 = VAR_5;

 if (VAR_6 && VAR_1->space_info != VAR_6->space_info)
  VAR_6 = ((void*)0);

 return FUNC_0(VAR_0, VAR_1, VAR_6, VAR_2,
           VAR_3);
}
