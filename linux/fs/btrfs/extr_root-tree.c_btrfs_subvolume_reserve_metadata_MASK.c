
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_block_rsv {int space_info; } ;
struct btrfs_fs_info {int nodesize; int flags; struct btrfs_block_rsv global_block_rsv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct btrfs_root*,struct btrfs_block_rsv*,int,int ) ;
 int FUNC_1 (struct btrfs_block_rsv*,struct btrfs_block_rsv*,int,int) ;
 int FUNC_2 (struct btrfs_fs_info*,int) ;
 int FUNC_3 (struct btrfs_fs_info*,int ) ;
 int FUNC_4 (struct btrfs_root*,int) ;
 int FUNC_5 (struct btrfs_root*,int,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct btrfs_root *VAR_4,
         struct btrfs_block_rsv *VAR_5, int VAR_6,
         bool VAR_7)
{
 u64 VAR_8 = 0;
 u64 VAR_9;
 int VAR_10;
 struct btrfs_fs_info *VAR_11 = VAR_4->fs_info;
 struct btrfs_block_rsv *VAR_12 = &VAR_11->global_block_rsv;

 if (FUNC_6(VAR_1, &VAR_11->flags)) {

  VAR_8 = 3 * VAR_11->nodesize;
  VAR_10 = FUNC_5(VAR_4,
    VAR_8, 1);
  if (VAR_10)
   return VAR_10;
 }

 VAR_9 = FUNC_2(VAR_11, VAR_6);
 VAR_5->space_info = FUNC_3(VAR_11,
         VAR_0);
 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_9,
      VAR_2);

 if (VAR_10 == -VAR_3 && VAR_7)
  VAR_10 = FUNC_1(VAR_12, VAR_5, VAR_9, 1);

 if (VAR_10 && VAR_8)
  FUNC_4(VAR_4, VAR_8);

 return VAR_10;
}
