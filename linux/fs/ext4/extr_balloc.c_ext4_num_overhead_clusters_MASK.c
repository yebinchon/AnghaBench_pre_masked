
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {int s_itb_per_group; } ;
struct ext4_group_desc {int dummy; } ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int FUNC_0 (struct ext4_sb_info*,scalar_t__) ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_3 (struct super_block*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct super_block*,int ) ;
 scalar_t__ FUNC_5 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_6 (struct super_block*,struct ext4_group_desc*) ;
 unsigned int FUNC_7 (struct super_block*,int ) ;

__attribute__((used)) static unsigned FUNC_8(struct super_block *VAR_0,
        ext4_group_t VAR_1,
        struct ext4_group_desc *VAR_2)
{
 unsigned VAR_3;
 int VAR_4 = -1, VAR_5 = -1, VAR_6 = -1, VAR_7, VAR_8;
 ext4_fsblk_t VAR_9 = FUNC_4(VAR_0, VAR_1);
 ext4_fsblk_t VAR_10;
 struct ext4_sb_info *VAR_11 = FUNC_1(VAR_0);




 VAR_3 = FUNC_7(VAR_0, VAR_1);
 if (FUNC_3(VAR_0, FUNC_2(VAR_0, VAR_2), VAR_1)) {
  VAR_4 = FUNC_0(VAR_11,
      FUNC_2(VAR_0, VAR_2) - VAR_9);
  if (VAR_4 < VAR_3)
   VAR_4 = -1;
  else if (VAR_4 == VAR_3) {
   VAR_3++;
   VAR_4 = -1;
  }
 }

 if (FUNC_3(VAR_0, FUNC_5(VAR_0, VAR_2), VAR_1)) {
  VAR_5 = FUNC_0(VAR_11,
      FUNC_5(VAR_0, VAR_2) - VAR_9);
  if (VAR_5 < VAR_3)
   VAR_5 = -1;
  else if (VAR_5 == VAR_3) {
   VAR_3++;
   VAR_5 = -1;
  }
 }

 VAR_10 = FUNC_6(VAR_0, VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_11->s_itb_per_group; VAR_7++) {
  if (FUNC_3(VAR_0, VAR_10 + VAR_7, VAR_1)) {
   VAR_8 = FUNC_0(VAR_11, VAR_10 + VAR_7 - VAR_9);
   if ((VAR_8 < VAR_3) || (VAR_8 == VAR_5) ||
       (VAR_8 == VAR_4) || (VAR_8 == VAR_6))
    continue;
   if (VAR_8 == VAR_3) {
    VAR_3++;
    continue;
   }
   VAR_3++;
   VAR_6 = VAR_8;
  }
 }

 if (VAR_4 != -1)
  VAR_3++;
 if (VAR_5 != -1)
  VAR_3++;

 return VAR_3;
}
