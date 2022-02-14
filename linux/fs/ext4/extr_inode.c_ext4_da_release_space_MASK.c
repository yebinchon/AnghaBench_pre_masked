
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;
struct ext4_sb_info {int s_dirtyclusters_counter; } ;
struct ext4_inode_info {int i_reserved_data_blocks; int i_block_reservation_lock; } ;


 int FUNC_0 (struct ext4_sb_info*,int) ;
 struct ext4_inode_info* FUNC_1 (struct inode*) ;
 struct ext4_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int ,char*,int ,int,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,int) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct inode *VAR_0, int VAR_1)
{
 struct ext4_sb_info *VAR_2 = FUNC_2(VAR_0->i_sb);
 struct ext4_inode_info *VAR_3 = FUNC_1(VAR_0);

 if (!VAR_1)
  return;

 FUNC_7(&FUNC_1(VAR_0)->i_block_reservation_lock);

 FUNC_9(VAR_0, VAR_1);
 if (FUNC_10(VAR_1 > VAR_3->i_reserved_data_blocks)) {






  FUNC_5(VAR_0->i_sb, "ext4_da_release_space: "
    "ino %lu, to_free %d with only %d reserved "
    "data blocks", VAR_0->i_ino, VAR_1,
    VAR_3->i_reserved_data_blocks);
  FUNC_3(1);
  VAR_1 = VAR_3->i_reserved_data_blocks;
 }
 VAR_3->i_reserved_data_blocks -= VAR_1;


 FUNC_6(&VAR_2->s_dirtyclusters_counter, VAR_1);

 FUNC_8(&FUNC_1(VAR_0)->i_block_reservation_lock);

 FUNC_4(VAR_0, FUNC_0(VAR_2, VAR_1));
}
