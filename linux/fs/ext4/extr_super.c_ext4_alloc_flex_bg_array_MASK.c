
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct flex_groups {int dummy; } ;
struct ext4_sb_info {int s_flex_groups_allocated; struct flex_groups* s_flex_groups; int s_log_groups_per_flex; } ;
typedef scalar_t__ ext4_group_t ;


 int VAR_0 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ext4_sb_info*,scalar_t__) ;
 int FUNC_2 (struct super_block*,int ,char*,int) ;
 int FUNC_3 (struct flex_groups*) ;
 struct flex_groups* FUNC_4 (int,int ) ;
 int FUNC_5 (struct flex_groups*,struct flex_groups*,int) ;
 int FUNC_6 (int) ;

int FUNC_7(struct super_block *VAR_3, ext4_group_t VAR_4)
{
 struct ext4_sb_info *VAR_5 = FUNC_0(VAR_3);
 struct flex_groups *VAR_6;
 int VAR_7;

 if (!VAR_5->s_log_groups_per_flex)
  return 0;

 VAR_7 = FUNC_1(VAR_5, VAR_4 - 1) + 1;
 if (VAR_7 <= VAR_5->s_flex_groups_allocated)
  return 0;

 VAR_7 = FUNC_6(VAR_7 * sizeof(struct flex_groups));
 VAR_6 = FUNC_4(VAR_7, VAR_1);
 if (!VAR_6) {
  FUNC_2(VAR_3, VAR_2, "not enough memory for %d flex groups",
    VAR_7 / (int) sizeof(struct flex_groups));
  return -VAR_0;
 }

 if (VAR_5->s_flex_groups) {
  FUNC_5(VAR_6, VAR_5->s_flex_groups,
         (VAR_5->s_flex_groups_allocated *
   sizeof(struct flex_groups)));
  FUNC_3(VAR_5->s_flex_groups);
 }
 VAR_5->s_flex_groups = VAR_6;
 VAR_5->s_flex_groups_allocated = VAR_7 / sizeof(struct flex_groups);
 return 0;
}
