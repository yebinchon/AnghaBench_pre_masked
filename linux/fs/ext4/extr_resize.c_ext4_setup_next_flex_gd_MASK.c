
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_super_block {int dummy; } ;
struct ext4_sb_info {struct ext4_super_block* s_es; } ;
struct ext4_new_group_data {unsigned long group; int mdata_blocks; void* free_clusters_count; int blocks_count; } ;
struct ext4_new_flex_group_data {unsigned long count; int* bg_flags; struct ext4_new_group_data* groups; } ;
typedef int ext4_grpblk_t ;
typedef unsigned long ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct ext4_sb_info*,int) ;
 void* FUNC_3 (struct super_block*) ;
 struct ext4_sb_info* FUNC_4 (struct super_block*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct ext4_super_block*) ;
 int FUNC_6 (struct super_block*,scalar_t__,unsigned long*,int*) ;
 int FUNC_7 (struct super_block*,unsigned long) ;
 scalar_t__ FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_4,
        struct ext4_new_flex_group_data *VAR_5,
        ext4_fsblk_t VAR_6,
        unsigned long VAR_7)
{
 struct ext4_sb_info *VAR_8 = FUNC_4(VAR_4);
 struct ext4_super_block *VAR_9 = VAR_8->s_es;
 struct ext4_new_group_data *VAR_10 = VAR_5->groups;
 ext4_fsblk_t VAR_11;
 ext4_group_t VAR_12;
 ext4_group_t VAR_13;
 ext4_group_t VAR_14;
 ext4_grpblk_t VAR_15;
 ext4_grpblk_t VAR_16;
 unsigned long VAR_17;

 VAR_16 = FUNC_3(VAR_4);

 VAR_11 = FUNC_5(VAR_9);

 if (VAR_11 == VAR_6)
  return 0;

 FUNC_6(VAR_4, VAR_11, &VAR_13, &VAR_15);
 FUNC_0(VAR_15);
 FUNC_6(VAR_4, VAR_6 - 1, &VAR_12, &VAR_15);

 VAR_14 = VAR_13 | (VAR_7 - 1);
 if (VAR_14 > VAR_12)
  VAR_14 = VAR_12;

 VAR_5->count = VAR_14 - VAR_13 + 1;

 for (VAR_17 = 0; VAR_17 < VAR_5->count; VAR_17++) {
  int VAR_18;

  VAR_10[VAR_17].group = VAR_13 + VAR_17;
  VAR_10[VAR_17].blocks_count = FUNC_1(VAR_4);
  VAR_18 = FUNC_7(VAR_4, VAR_13 + VAR_17);
  VAR_10[VAR_17].mdata_blocks = VAR_18;
  VAR_10[VAR_17].free_clusters_count = FUNC_3(VAR_4);
  if (FUNC_8(VAR_4)) {
   VAR_5->bg_flags[VAR_17] = VAR_0 |
            VAR_1;
   if (!FUNC_9(VAR_4, VAR_3))
    VAR_5->bg_flags[VAR_17] |= VAR_2;
  } else
   VAR_5->bg_flags[VAR_17] = VAR_2;
 }

 if (VAR_14 == VAR_12 && FUNC_8(VAR_4))

  VAR_5->bg_flags[VAR_17 - 1] &= ~VAR_0;

 if ((VAR_14 == VAR_12) && (VAR_15 != VAR_16 - 1)) {
  VAR_10[VAR_17 - 1].blocks_count = FUNC_2(VAR_8, VAR_15 + 1);
  VAR_10[VAR_17 - 1].free_clusters_count -= VAR_16 -
             VAR_15 - 1;
 }

 return 1;
}
