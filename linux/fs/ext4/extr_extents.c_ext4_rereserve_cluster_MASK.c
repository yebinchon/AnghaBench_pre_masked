
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_sb_info {int s_freeclusters_counter; int s_dirtyclusters_counter; } ;
struct ext4_inode_info {int i_block_reservation_lock; int i_reserved_data_blocks; } ;
typedef int ext4_lblk_t ;


 int FUNC_0 (struct ext4_sb_info*,int) ;
 struct ext4_inode_info* FUNC_1 (struct inode*) ;
 struct ext4_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct inode *VAR_0, ext4_lblk_t VAR_1)
{
 struct ext4_sb_info *VAR_2 = FUNC_2(VAR_0->i_sb);
 struct ext4_inode_info *VAR_3 = FUNC_1(VAR_0);

 FUNC_3(VAR_0, FUNC_0(VAR_2, 1));

 FUNC_6(&VAR_3->i_block_reservation_lock);
 VAR_3->i_reserved_data_blocks++;
 FUNC_5(&VAR_2->s_dirtyclusters_counter, 1);
 FUNC_7(&VAR_3->i_block_reservation_lock);

 FUNC_5(&VAR_2->s_freeclusters_counter, 1);
 FUNC_4(VAR_0, VAR_1);
}
