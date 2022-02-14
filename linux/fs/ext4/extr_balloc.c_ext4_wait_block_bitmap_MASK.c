
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;
typedef int ext4_group_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct super_block*,char*,int ,unsigned long long) ;
 struct ext4_group_desc* FUNC_4 (struct super_block*,int ,int *) ;
 int FUNC_5 (struct super_block*,int ,int ) ;
 int FUNC_6 (struct super_block*,struct ext4_group_desc*,int ,struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;

int FUNC_8(struct super_block *VAR_3, ext4_group_t VAR_4,
      struct buffer_head *VAR_5)
{
 struct ext4_group_desc *VAR_6;

 if (!FUNC_0(VAR_5))
  return 0;
 VAR_6 = FUNC_4(VAR_3, VAR_4, ((void*)0));
 if (!VAR_6)
  return -VAR_0;
 FUNC_7(VAR_5);
 if (!FUNC_1(VAR_5)) {
  FUNC_3(VAR_3, "Cannot read block bitmap - "
      "block_group = %u, block_bitmap = %llu",
      VAR_4, (unsigned long long) VAR_5->b_blocknr);
  FUNC_5(VAR_3, VAR_4,
     VAR_2);
  return -VAR_1;
 }
 FUNC_2(VAR_5);

 return FUNC_6(VAR_3, VAR_6, VAR_4, VAR_5);
}
