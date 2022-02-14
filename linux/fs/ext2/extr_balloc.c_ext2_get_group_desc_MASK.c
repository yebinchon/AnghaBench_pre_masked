
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext2_sb_info {unsigned int s_groups_count; struct buffer_head** s_group_desc; } ;
struct ext2_group_desc {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (struct super_block*) ;
 unsigned int FUNC_1 (struct super_block*) ;
 struct ext2_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,char*,char*,unsigned int,unsigned long,...) ;

struct ext2_group_desc * FUNC_4(struct super_block * VAR_0,
          unsigned int VAR_1,
          struct buffer_head ** VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 struct ext2_group_desc * VAR_5;
 struct ext2_sb_info *VAR_6 = FUNC_2(VAR_0);

 if (VAR_1 >= VAR_6->s_groups_count) {
  FUNC_3 (VAR_0, "ext2_get_group_desc",
       "block_group >= groups_count - "
       "block_group = %d, groups_count = %lu",
       VAR_1, VAR_6->s_groups_count);

  return ((void*)0);
 }

 VAR_3 = VAR_1 >> FUNC_1(VAR_0);
 VAR_4 = VAR_1 & (FUNC_0(VAR_0) - 1);
 if (!VAR_6->s_group_desc[VAR_3]) {
  FUNC_3 (VAR_0, "ext2_get_group_desc",
       "Group descriptor not loaded - "
       "block_group = %d, group_desc = %lu, desc = %lu",
        VAR_1, VAR_3, VAR_4);
  return ((void*)0);
 }

 VAR_5 = (struct ext2_group_desc *) VAR_6->s_group_desc[VAR_3]->b_data;
 if (VAR_2)
  *VAR_2 = VAR_6->s_group_desc[VAR_3];
 return VAR_5 + VAR_4;
}
