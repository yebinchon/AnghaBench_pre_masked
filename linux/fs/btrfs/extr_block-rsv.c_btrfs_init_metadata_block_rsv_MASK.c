
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_rsv {int space_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,int ) ;
 int FUNC_1 (struct btrfs_block_rsv*,unsigned short) ;

void FUNC_2(struct btrfs_fs_info *VAR_1,
       struct btrfs_block_rsv *VAR_2,
       unsigned short VAR_3)
{
 FUNC_1(VAR_2, VAR_3);
 VAR_2->space_info = FUNC_0(VAR_1,
         VAR_0);
}
