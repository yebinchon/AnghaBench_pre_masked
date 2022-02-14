
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_block_rsv {int dummy; } ;


 int FUNC_0 (struct btrfs_block_rsv*,int ,int) ;
 int FUNC_1 (struct btrfs_block_rsv*,int ) ;

int FUNC_2(struct btrfs_block_rsv *VAR_0,
       struct btrfs_block_rsv *VAR_1, u64 VAR_2,
       bool VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_1, VAR_2, VAR_3);
 return 0;
}
