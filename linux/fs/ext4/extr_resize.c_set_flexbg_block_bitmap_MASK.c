
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_sb_info {int dummy; } ;
struct ext4_new_flex_group_data {int* bg_flags; int count; TYPE_1__* groups; } ;
struct buffer_head {int b_data; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int block_bitmap; scalar_t__ group; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct ext4_sb_info*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ext4_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct super_block*) ;
 struct ext4_sb_info* FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_8 (struct super_block*,int ) ;
 int FUNC_9 (struct super_block*,scalar_t__) ;
 int FUNC_10 (int *,int *,struct buffer_head*) ;
 int FUNC_11 (int *,struct buffer_head*) ;
 int FUNC_12 (int ,scalar_t__,scalar_t__) ;
 int FUNC_13 (int *,int) ;
 struct buffer_head* FUNC_14 (struct super_block*,int ) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct super_block *VAR_2, handle_t *VAR_3,
   struct ext4_new_flex_group_data *VAR_4,
   ext4_fsblk_t VAR_5, ext4_fsblk_t VAR_6)
{
 struct ext4_sb_info *VAR_7 = FUNC_5(VAR_2);
 ext4_group_t VAR_8 = VAR_6 - VAR_5 + 1;
 ext4_group_t VAR_9;

 FUNC_7("mark clusters [%llu-%llu] used\n", VAR_5,
     VAR_6);
 for (VAR_9 = VAR_8; VAR_8 > 0;
      VAR_8 -= VAR_9, VAR_5 += VAR_9) {
  ext4_fsblk_t VAR_10;
  struct buffer_head *VAR_11;
  ext4_group_t VAR_12;
  int VAR_13;

  VAR_12 = FUNC_8(VAR_2, FUNC_3(VAR_7, VAR_5));
  VAR_10 = FUNC_2(VAR_7, FUNC_9(VAR_2, VAR_12));
  VAR_12 -= VAR_4->groups[0].group;

  VAR_9 = FUNC_4(VAR_2) - (VAR_5 - VAR_10);
  if (VAR_9 > VAR_8)
   VAR_9 = VAR_8;

  if (VAR_4->bg_flags[VAR_12] & VAR_1) {
   FUNC_1(VAR_4->count > 1);
   continue;
  }

  VAR_13 = FUNC_13(VAR_3, 1);
  if (VAR_13)
   return VAR_13;

  VAR_11 = FUNC_14(VAR_2, VAR_4->groups[VAR_12].block_bitmap);
  if (FUNC_15(!VAR_11))
   return -VAR_0;

  FUNC_0(VAR_11, "get_write_access");
  VAR_13 = FUNC_11(VAR_3, VAR_11);
  if (VAR_13) {
   FUNC_6(VAR_11);
   return VAR_13;
  }
  FUNC_7("mark block bitmap %#04llx (+%llu/%u)\n",
      VAR_5, VAR_5 - VAR_10, VAR_9);
  FUNC_12(VAR_11->b_data, VAR_5 - VAR_10, VAR_9);

  VAR_13 = FUNC_10(VAR_3, ((void*)0), VAR_11);
  FUNC_6(VAR_11);
  if (FUNC_15(VAR_13))
   return VAR_13;
 }

 return 0;
}
