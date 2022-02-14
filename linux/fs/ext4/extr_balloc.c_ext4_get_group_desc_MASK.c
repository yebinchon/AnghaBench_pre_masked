
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {struct buffer_head** s_group_desc; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ext4_group_t ;
typedef int __u8 ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 unsigned int FUNC_2 (struct super_block*) ;
 struct ext4_sb_info* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,char*,int,unsigned int,...) ;
 int FUNC_5 (struct super_block*) ;

struct ext4_group_desc * FUNC_6(struct super_block *VAR_0,
          ext4_group_t VAR_1,
          struct buffer_head **VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 ext4_group_t VAR_5 = FUNC_5(VAR_0);
 struct ext4_group_desc *VAR_6;
 struct ext4_sb_info *VAR_7 = FUNC_3(VAR_0);

 if (VAR_1 >= VAR_5) {
  FUNC_4(VAR_0, "block_group >= groups_count - block_group = %u,"
      " groups_count = %u", VAR_1, VAR_5);

  return ((void*)0);
 }

 VAR_3 = VAR_1 >> FUNC_1(VAR_0);
 VAR_4 = VAR_1 & (FUNC_0(VAR_0) - 1);
 if (!VAR_7->s_group_desc[VAR_3]) {
  FUNC_4(VAR_0, "Group descriptor not loaded - "
      "block_group = %u, group_desc = %u, desc = %u",
      VAR_1, VAR_3, VAR_4);
  return ((void*)0);
 }

 VAR_6 = (struct ext4_group_desc *)(
  (__u8 *)VAR_7->s_group_desc[VAR_3]->b_data +
  VAR_4 * FUNC_2(VAR_0));
 if (VAR_2)
  *VAR_2 = VAR_7->s_group_desc[VAR_3];
 return VAR_6;
}
