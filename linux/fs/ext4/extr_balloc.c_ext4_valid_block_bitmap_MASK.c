
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {scalar_t__ s_itb_per_group; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {int b_data; } ;
typedef scalar_t__ ext4_grpblk_t ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;


 scalar_t__ FUNC_0 (struct ext4_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 struct ext4_sb_info* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct super_block*,int ) ;
 scalar_t__ FUNC_6 (struct super_block*) ;
 scalar_t__ FUNC_7 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_8 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_9 (scalar_t__,int ) ;

__attribute__((used)) static ext4_fsblk_t FUNC_10(struct super_block *VAR_0,
         struct ext4_group_desc *VAR_1,
         ext4_group_t VAR_2,
         struct buffer_head *VAR_3)
{
 struct ext4_sb_info *VAR_4 = FUNC_2(VAR_0);
 ext4_grpblk_t VAR_5;
 ext4_grpblk_t VAR_6;
 ext4_grpblk_t VAR_7 = FUNC_1(VAR_0);
 ext4_fsblk_t VAR_8;
 ext4_fsblk_t VAR_9;

 if (FUNC_6(VAR_0)) {






  return 0;
 }
 VAR_9 = FUNC_5(VAR_0, VAR_2);


 VAR_8 = FUNC_3(VAR_0, VAR_1);
 VAR_5 = VAR_8 - VAR_9;
 if (VAR_5 < 0 || FUNC_0(VAR_4, VAR_5) >= VAR_7 ||
     !FUNC_9(FUNC_0(VAR_4, VAR_5), VAR_3->b_data))

  return VAR_8;


 VAR_8 = FUNC_7(VAR_0, VAR_1);
 VAR_5 = VAR_8 - VAR_9;
 if (VAR_5 < 0 || FUNC_0(VAR_4, VAR_5) >= VAR_7 ||
     !FUNC_9(FUNC_0(VAR_4, VAR_5), VAR_3->b_data))

  return VAR_8;


 VAR_8 = FUNC_8(VAR_0, VAR_1);
 VAR_5 = VAR_8 - VAR_9;
 if (VAR_5 < 0 || FUNC_0(VAR_4, VAR_5) >= VAR_7 ||
     FUNC_0(VAR_4, VAR_5 + VAR_4->s_itb_per_group) >= VAR_7)
  return VAR_8;
 VAR_6 = FUNC_4(VAR_3->b_data,
   FUNC_0(VAR_4, VAR_5 + VAR_4->s_itb_per_group),
   FUNC_0(VAR_4, VAR_5));
 if (VAR_6 <
     FUNC_0(VAR_4, VAR_5 + VAR_4->s_itb_per_group))

  return VAR_8;
 return 0;
}
