
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct ext4_sb_info {scalar_t__ s_itb_per_group; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {unsigned int b_size; int b_data; } ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct ext4_sb_info*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*,int ) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_5 (struct super_block*,scalar_t__,int ) ;
 int FUNC_6 (struct super_block*,int ,struct ext4_group_desc*) ;
 scalar_t__ FUNC_7 (struct super_block*,int ) ;
 scalar_t__ FUNC_8 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_9 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (struct super_block*,int ,int) ;
 unsigned int FUNC_12 (struct super_block*,int ) ;
 int FUNC_13 (unsigned int,int ) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_16(struct super_block *VAR_4,
       struct buffer_head *VAR_5,
       ext4_group_t VAR_6,
       struct ext4_group_desc *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 struct ext4_sb_info *VAR_10 = FUNC_1(VAR_4);
 ext4_fsblk_t VAR_11, VAR_12;

 FUNC_2(VAR_5, FUNC_3(VAR_5));



 if (!FUNC_6(VAR_4, VAR_6, VAR_7)) {
  FUNC_11(VAR_4, VAR_6,
     VAR_2 |
     VAR_3);
  return -VAR_0;
 }
 FUNC_14(VAR_5->b_data, 0, VAR_4->s_blocksize);

 VAR_9 = FUNC_12(VAR_4, VAR_6);
 if ((VAR_9 >> 3) >= VAR_5->b_size)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  FUNC_13(VAR_8, VAR_5->b_data);

 VAR_11 = FUNC_7(VAR_4, VAR_6);


 VAR_12 = FUNC_4(VAR_4, VAR_7);
 if (FUNC_5(VAR_4, VAR_12, VAR_6))
  FUNC_13(FUNC_0(VAR_10, VAR_12 - VAR_11), VAR_5->b_data);

 VAR_12 = FUNC_8(VAR_4, VAR_7);
 if (FUNC_5(VAR_4, VAR_12, VAR_6))
  FUNC_13(FUNC_0(VAR_10, VAR_12 - VAR_11), VAR_5->b_data);

 VAR_12 = FUNC_9(VAR_4, VAR_7);
 for (; VAR_12 < FUNC_9(VAR_4, VAR_7) +
       VAR_10->s_itb_per_group; VAR_12++) {
  if (FUNC_5(VAR_4, VAR_12, VAR_6))
   FUNC_13(FUNC_0(VAR_10, VAR_12 - VAR_11), VAR_5->b_data);
 }






 FUNC_10(FUNC_15(VAR_4, VAR_6),
        VAR_4->s_blocksize * 8, VAR_5->b_data);
 return 0;
}
