
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_group_info {int dummy; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int ext4_group_t ;
typedef int ext4_fsblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct ext4_group_info*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct super_block*,char*,int ,int ) ;
 struct ext4_group_info* FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_6 (struct super_block*,int ,struct ext4_group_desc*,struct buffer_head*,int) ;
 int FUNC_7 (struct super_block*,int ) ;
 int FUNC_8 (struct super_block*,int ,int ) ;
 int FUNC_9 (struct super_block*,int ) ;
 int FUNC_10 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_3,
          struct ext4_group_desc *VAR_4,
          ext4_group_t VAR_5,
          struct buffer_head *VAR_6)
{
 ext4_fsblk_t VAR_7;
 struct ext4_group_info *VAR_8 = FUNC_4(VAR_3, VAR_5);

 if (FUNC_2(VAR_6))
  return 0;
 if (FUNC_1(VAR_8))
  return -VAR_1;

 FUNC_7(VAR_3, VAR_5);
 if (FUNC_2(VAR_6))
  goto verified;
 VAR_7 = FUNC_5(VAR_3, VAR_4);
 if (!FUNC_6(VAR_3, VAR_5, VAR_4, VAR_6,
        FUNC_0(VAR_3) / 8)) {
  FUNC_9(VAR_3, VAR_5);
  FUNC_3(VAR_3, "Corrupt inode bitmap - block_group = %u, "
      "inode_bitmap = %llu", VAR_5, VAR_7);
  FUNC_8(VAR_3, VAR_5,
     VAR_2);
  return -VAR_0;
 }
 FUNC_10(VAR_6);
verified:
 FUNC_9(VAR_3, VAR_5);
 return 0;
}
