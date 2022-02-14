
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_rsv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,struct btrfs_block_rsv*,unsigned short) ;
 struct btrfs_block_rsv* FUNC_1 (int,int ) ;

struct btrfs_block_rsv *FUNC_2(struct btrfs_fs_info *VAR_1,
           unsigned short VAR_2)
{
 struct btrfs_block_rsv *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_1, VAR_3, VAR_2);
 return VAR_3;
}
