
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {struct buffer_head** s_group_desc; } ;
struct ext4_new_group_data {int group; int free_clusters_count; int inode_table; int inode_bitmap; int block_bitmap; } ;
struct ext4_new_flex_group_data {int count; int * bg_flags; struct ext4_new_group_data* groups; } ;
struct ext4_group_desc {int bg_flags; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef int ext4_group_t ;
typedef int __u16 ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 struct ext4_sb_info* FUNC_3 (struct super_block*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct super_block*,struct ext4_group_desc*,int ) ;
 int FUNC_6 (struct super_block*,struct ext4_group_desc*,int ) ;
 int FUNC_7 (struct super_block*,struct ext4_group_desc*,int ) ;
 int FUNC_8 (struct super_block*,int,struct ext4_group_desc*) ;
 int FUNC_9 (int *,int *,struct buffer_head*) ;
 scalar_t__ FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct super_block*,struct ext4_group_desc*,int ) ;
 int FUNC_12 (struct super_block*,struct ext4_group_desc*,int ) ;
 int FUNC_13 (struct super_block*,struct ext4_group_desc*,int ) ;
 int FUNC_14 (struct super_block*,int,struct ext4_group_desc*) ;
 int FUNC_15 (struct super_block*,int,struct ext4_group_desc*,struct ext4_new_group_data*) ;
 int FUNC_16 (struct super_block*,int) ;
 int FUNC_17 (struct ext4_group_desc*,int ,int) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(handle_t *VAR_0, struct super_block *VAR_1,
    struct ext4_new_flex_group_data *VAR_2)
{
 struct ext4_new_group_data *VAR_3 = VAR_2->groups;
 struct ext4_group_desc *VAR_4;
 struct ext4_sb_info *VAR_5 = FUNC_3(VAR_1);
 struct buffer_head *VAR_6;
 ext4_group_t VAR_7;
 __u16 *VAR_8 = VAR_2->bg_flags;
 int VAR_9, VAR_10, VAR_11, VAR_12 = 0;


 for (VAR_9 = 0; VAR_9 < VAR_2->count; VAR_9++, VAR_3++, VAR_8++) {
  VAR_7 = VAR_3->group;

  VAR_10 = VAR_7 % FUNC_0(VAR_1);
  VAR_11 = VAR_7 / FUNC_0(VAR_1);




  VAR_6 = VAR_5->s_group_desc[VAR_11];

  VAR_4 = (struct ext4_group_desc *)(VAR_6->b_data +
       VAR_10 * FUNC_1(VAR_1));

  FUNC_17(VAR_4, 0, FUNC_1(VAR_1));
  FUNC_5(VAR_1, VAR_4, VAR_3->block_bitmap);
  FUNC_11(VAR_1, VAR_4, VAR_3->inode_bitmap);
  VAR_12 = FUNC_15(VAR_1, VAR_7, VAR_4, VAR_3);
  if (VAR_12) {
   FUNC_16(VAR_1, VAR_12);
   break;
  }

  FUNC_12(VAR_1, VAR_4, VAR_3->inode_table);
  FUNC_6(VAR_1, VAR_4,
          VAR_3->free_clusters_count);
  FUNC_7(VAR_1, VAR_4, FUNC_2(VAR_1));
  if (FUNC_10(VAR_1))
   FUNC_13(VAR_1, VAR_4,
            FUNC_2(VAR_1));
  VAR_4->bg_flags = FUNC_4(*VAR_8);
  FUNC_8(VAR_1, VAR_7, VAR_4);

  VAR_12 = FUNC_9(VAR_0, ((void*)0), VAR_6);
  if (FUNC_18(VAR_12)) {
   FUNC_16(VAR_1, VAR_12);
   break;
  }





  VAR_12 = FUNC_14(VAR_1, VAR_7, VAR_4);
  if (VAR_12)
   break;
 }
 return VAR_12;
}
