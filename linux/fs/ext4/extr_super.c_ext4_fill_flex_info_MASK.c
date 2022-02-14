
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_sb_info {int s_log_groups_per_flex; int s_groups_count; TYPE_2__* s_flex_groups; TYPE_1__* s_es; } ;
struct ext4_group_desc {int dummy; } ;
typedef size_t ext4_group_t ;
struct TYPE_4__ {int used_dirs; int free_clusters; int free_inodes; } ;
struct TYPE_3__ {int s_log_groups_per_flex; } ;


 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct super_block*,int) ;
 size_t FUNC_4 (struct ext4_sb_info*,int) ;
 int FUNC_5 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_6 (struct super_block*,struct ext4_group_desc*) ;
 struct ext4_group_desc* FUNC_7 (struct super_block*,int,int *) ;
 int FUNC_8 (struct super_block*,struct ext4_group_desc*) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_0)
{
 struct ext4_sb_info *VAR_1 = FUNC_0(VAR_0);
 struct ext4_group_desc *VAR_2 = ((void*)0);
 ext4_group_t VAR_3;
 int VAR_4, VAR_5;

 VAR_1->s_log_groups_per_flex = VAR_1->s_es->s_log_groups_per_flex;
 if (VAR_1->s_log_groups_per_flex < 1 || VAR_1->s_log_groups_per_flex > 31) {
  VAR_1->s_log_groups_per_flex = 0;
  return 1;
 }

 VAR_5 = FUNC_3(VAR_0, VAR_1->s_groups_count);
 if (VAR_5)
  goto failed;

 for (VAR_4 = 0; VAR_4 < VAR_1->s_groups_count; VAR_4++) {
  VAR_2 = FUNC_7(VAR_0, VAR_4, ((void*)0));

  VAR_3 = FUNC_4(VAR_1, VAR_4);
  FUNC_2(FUNC_6(VAR_0, VAR_2),
      &VAR_1->s_flex_groups[VAR_3].free_inodes);
  FUNC_1(FUNC_5(VAR_0, VAR_2),
        &VAR_1->s_flex_groups[VAR_3].free_clusters);
  FUNC_2(FUNC_8(VAR_0, VAR_2),
      &VAR_1->s_flex_groups[VAR_3].used_dirs);
 }

 return 1;
failed:
 return 0;
}
