
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_sb_info {int dummy; } ;
struct ext4_inode_info {int i_block_reservation_lock; int i_reserved_data_blocks; } ;


 int VAR_0 ;
 int FUNC_0 (struct ext4_sb_info*,int) ;
 struct ext4_inode_info* FUNC_1 (struct inode*) ;
 struct ext4_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,int ) ;
 scalar_t__ FUNC_5 (struct ext4_sb_info*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1)
{
 struct ext4_sb_info *VAR_2 = FUNC_2(VAR_1->i_sb);
 struct ext4_inode_info *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;






 VAR_4 = FUNC_4(VAR_1, FUNC_0(VAR_2, 1));
 if (VAR_4)
  return VAR_4;

 FUNC_6(&VAR_3->i_block_reservation_lock);
 if (FUNC_5(VAR_2, 1, 0)) {
  FUNC_7(&VAR_3->i_block_reservation_lock);
  FUNC_3(VAR_1, FUNC_0(VAR_2, 1));
  return -VAR_0;
 }
 VAR_3->i_reserved_data_blocks++;
 FUNC_8(VAR_1);
 FUNC_7(&VAR_3->i_block_reservation_lock);

 return 0;
}
