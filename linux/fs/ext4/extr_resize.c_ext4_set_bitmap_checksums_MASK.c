
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_new_group_data {int block_bitmap; int inode_bitmap; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int ext4_group_t ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct super_block*,int ,struct ext4_group_desc*,struct buffer_head*) ;
 struct buffer_head* FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*,int ,struct ext4_group_desc*,struct buffer_head*,int) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_1,
         ext4_group_t VAR_2,
         struct ext4_group_desc *VAR_3,
         struct ext4_new_group_data *VAR_4)
{
 struct buffer_head *VAR_5;

 if (!FUNC_4(VAR_1))
  return 0;

 VAR_5 = FUNC_3(VAR_1, VAR_4->inode_bitmap);
 if (!VAR_5)
  return -VAR_0;
 FUNC_5(VAR_1, VAR_2, VAR_3, VAR_5,
       FUNC_0(VAR_1) / 8);
 FUNC_1(VAR_5);

 VAR_5 = FUNC_3(VAR_1, VAR_4->block_bitmap);
 if (!VAR_5)
  return -VAR_0;
 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5);
 FUNC_1(VAR_5);

 return 0;
}
