
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct buffer_head {scalar_t__ b_data; } ;
struct btrfs_super_block {int dummy; } ;
struct block_device {int bd_inode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct buffer_head* FUNC_0 (struct block_device*,int,scalar_t__) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct btrfs_super_block*) ;
 scalar_t__ FUNC_4 (struct btrfs_super_block*) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(struct block_device *VAR_5, int VAR_6,
   struct buffer_head **VAR_7)
{
 struct buffer_head *VAR_8;
 struct btrfs_super_block *VAR_9;
 u64 VAR_10;

 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10 + VAR_2 >= FUNC_5(VAR_5->bd_inode))
  return -VAR_3;

 VAR_8 = FUNC_0(VAR_5, VAR_10 / VAR_0, VAR_2);




 if (!VAR_8)
  return -VAR_4;

 VAR_9 = (struct btrfs_super_block *)VAR_8->b_data;
 if (FUNC_3(VAR_9) != VAR_10 ||
      FUNC_4(VAR_9) != VAR_1) {
  FUNC_1(VAR_8);
  return -VAR_3;
 }

 *VAR_7 = VAR_8;
 return 0;
}
