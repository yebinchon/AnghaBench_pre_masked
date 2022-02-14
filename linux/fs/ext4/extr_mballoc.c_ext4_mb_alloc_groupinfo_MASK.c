
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {unsigned int s_group_info_size; struct ext4_group_info*** s_group_info; } ;
struct ext4_group_info {int dummy; } ;
typedef int ext4_group_t ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 struct ext4_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (struct super_block*,int ,char*) ;
 int FUNC_5 (struct ext4_group_info***) ;
 struct ext4_group_info*** FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (struct ext4_group_info***,struct ext4_group_info***,int) ;
 unsigned int FUNC_8 (int) ;

int FUNC_9(struct super_block *VAR_3, ext4_group_t VAR_4)
{
 struct ext4_sb_info *VAR_5 = FUNC_2(VAR_3);
 unsigned VAR_6;
 struct ext4_group_info ***VAR_7;

 VAR_6 = (VAR_4 + FUNC_0(VAR_3) - 1) >>
  FUNC_1(VAR_3);
 if (VAR_6 <= VAR_5->s_group_info_size)
  return 0;

 VAR_6 = FUNC_8(sizeof(*VAR_5->s_group_info) * VAR_6);
 VAR_7 = FUNC_6(VAR_6, VAR_1);
 if (!VAR_7) {
  FUNC_4(VAR_3, VAR_2, "can't allocate buddy meta group");
  return -VAR_0;
 }
 if (VAR_5->s_group_info) {
  FUNC_7(VAR_7, VAR_5->s_group_info,
         VAR_5->s_group_info_size * sizeof(*VAR_5->s_group_info));
  FUNC_5(VAR_5->s_group_info);
 }
 VAR_5->s_group_info = VAR_7;
 VAR_5->s_group_info_size = VAR_6 / sizeof(*VAR_5->s_group_info);
 FUNC_3("allocated s_groupinfo array for %d meta_bg's\n",
     VAR_5->s_group_info_size);
 return 0;
}
