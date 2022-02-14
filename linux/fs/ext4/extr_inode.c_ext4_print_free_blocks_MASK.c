
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct ext4_sb_info {int s_dirtyclusters_counter; int s_freeclusters_counter; } ;
struct ext4_inode_info {long long i_reserved_data_blocks; } ;


 long long FUNC_0 (struct ext4_sb_info*,int ) ;
 struct ext4_inode_info* FUNC_1 (struct inode*) ;
 struct ext4_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,int ,char*,...) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_1)
{
 struct ext4_sb_info *VAR_2 = FUNC_2(VAR_1->i_sb);
 struct super_block *VAR_3 = VAR_1->i_sb;
 struct ext4_inode_info *VAR_4 = FUNC_1(VAR_1);

 FUNC_4(VAR_3, VAR_0, "Total free blocks count %lld",
        FUNC_0(FUNC_2(VAR_1->i_sb),
   FUNC_3(VAR_3)));
 FUNC_4(VAR_3, VAR_0, "Free/Dirty block details");
 FUNC_4(VAR_3, VAR_0, "free_blocks=%lld",
        (long long) FUNC_0(FUNC_2(VAR_3),
  FUNC_5(&VAR_2->s_freeclusters_counter)));
 FUNC_4(VAR_3, VAR_0, "dirty_blocks=%lld",
        (long long) FUNC_0(FUNC_2(VAR_3),
  FUNC_5(&VAR_2->s_dirtyclusters_counter)));
 FUNC_4(VAR_3, VAR_0, "Block reservation details");
 FUNC_4(VAR_3, VAR_0, "i_reserved_data_blocks=%u",
   VAR_4->i_reserved_data_blocks);
 return;
}
