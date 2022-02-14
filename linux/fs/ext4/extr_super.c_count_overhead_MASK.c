
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_sb_info {int s_itb_per_group; TYPE_1__* s_es; } ;
struct ext4_group_desc {int dummy; } ;
typedef scalar_t__ ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int s_first_data_block; } ;


 int FUNC_0 (struct ext4_sb_info*,scalar_t__) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 struct ext4_sb_info* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,scalar_t__) ;
 int FUNC_5 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct super_block*,char*,int) ;
 struct ext4_group_desc* FUNC_9 (struct super_block*,scalar_t__,int *) ;
 scalar_t__ FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct super_block*) ;
 scalar_t__ FUNC_12 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_13 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_14 (int,char*) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct super_block *VAR_0, ext4_group_t VAR_1,
     char *VAR_2)
{
 struct ext4_sb_info *VAR_3 = FUNC_3(VAR_0);
 struct ext4_group_desc *VAR_4;
 ext4_fsblk_t VAR_5, VAR_6, VAR_7;
 ext4_group_t VAR_8, VAR_9 = FUNC_10(VAR_0);
 int VAR_10, VAR_11, VAR_12 = 0;

 if (!FUNC_11(VAR_0))
  return (FUNC_4(VAR_0, VAR_1) + FUNC_5(VAR_0, VAR_1) +
   VAR_3->s_itb_per_group + 2);

 VAR_5 = FUNC_15(VAR_3->s_es->s_first_data_block) +
  (VAR_1 * FUNC_1(VAR_0));
 VAR_6 = VAR_5 + FUNC_1(VAR_0) - 1;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_4 = FUNC_9(VAR_0, VAR_8, ((void*)0));
  VAR_7 = FUNC_6(VAR_0, VAR_4);
  if (VAR_7 >= VAR_5 && VAR_7 <= VAR_6) {
   FUNC_14(FUNC_0(VAR_3, VAR_7 - VAR_5), VAR_2);
   VAR_12++;
  }
  VAR_7 = FUNC_12(VAR_0, VAR_4);
  if (VAR_7 >= VAR_5 && VAR_7 <= VAR_6) {
   FUNC_14(FUNC_0(VAR_3, VAR_7 - VAR_5), VAR_2);
   VAR_12++;
  }
  VAR_7 = FUNC_13(VAR_0, VAR_4);
  if (VAR_7 >= VAR_5 && VAR_7 + VAR_3->s_itb_per_group <= VAR_6)
   for (VAR_11 = 0; VAR_11 < VAR_3->s_itb_per_group; VAR_11++, VAR_7++) {
    int VAR_13 = FUNC_0(VAR_3, VAR_7 - VAR_5);
    FUNC_14(VAR_13, VAR_2);
    VAR_12++;
   }
  if (VAR_8 != VAR_1)
   continue;
  VAR_10 = 0;
  if (FUNC_4(VAR_0, VAR_1)) {
   FUNC_14(VAR_10++, VAR_2);
   VAR_12++;
  }
  VAR_11 = FUNC_5(VAR_0, VAR_1);
  if (VAR_10 + VAR_11 > FUNC_1(VAR_0)) {
   FUNC_8(VAR_0, "Invalid number of block group "
       "descriptor blocks: %d", VAR_11);
   VAR_11 = FUNC_1(VAR_0) - VAR_10;
  }
  VAR_12 += VAR_11;
  for (; VAR_11 > 0; VAR_11--)
   FUNC_14(FUNC_0(VAR_3, VAR_10++), VAR_2);
 }
 if (!VAR_12)
  return 0;
 return FUNC_2(VAR_0) -
  FUNC_7(VAR_2, FUNC_2(VAR_0) / 8);
}
