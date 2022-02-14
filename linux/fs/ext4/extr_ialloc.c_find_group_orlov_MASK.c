
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int s_root; } ;
struct qstr {int len; int name; } ;
struct orlov_stats {unsigned int free_inodes; int used_dirs; scalar_t__ free_clusters; } ;
struct inode {int dummy; } ;
struct ext4_sb_info {int s_log_groups_per_flex; int s_hash_seed; int s_dirs_counter; int s_freeclusters_counter; int s_freeinodes_counter; } ;
struct ext4_group_desc {int dummy; } ;
struct dx_hash_info {int hash; int seed; int hash_version; } ;
typedef scalar_t__ ext4_grpblk_t ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int i_block_group; int i_last_alloc_group; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ext4_sb_info*,unsigned int) ;
 int FUNC_1 (struct super_block*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct super_block*) ;
 int VAR_1 ;
 struct ext4_sb_info* FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (int ) ;
 struct inode* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (struct ext4_sb_info*) ;
 unsigned int FUNC_9 (struct super_block*,struct ext4_group_desc*) ;
 struct ext4_group_desc* FUNC_10 (struct super_block*,int,int *) ;
 int FUNC_11 (struct super_block*) ;
 scalar_t__ FUNC_12 (struct inode*,int ) ;
 int FUNC_13 (struct inode*,int ,int ,struct dx_hash_info*) ;
 int FUNC_14 (struct super_block*,int,int,struct orlov_stats*) ;
 unsigned int FUNC_15 (int *) ;
 int FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct super_block *VAR_2, struct inode *VAR_3,
       ext4_group_t *VAR_4, umode_t VAR_5,
       const struct qstr *VAR_6)
{
 ext4_group_t VAR_7 = FUNC_2(VAR_3)->i_block_group;
 struct ext4_sb_info *VAR_8 = FUNC_4(VAR_2);
 ext4_group_t VAR_9 = FUNC_11(VAR_2);
 int VAR_10 = FUNC_3(VAR_2);
 unsigned int VAR_11, VAR_12, VAR_13;
 ext4_fsblk_t VAR_14, VAR_15;
 unsigned int VAR_16;
 int VAR_17, VAR_18;
 ext4_grpblk_t VAR_19;
 ext4_group_t VAR_20, VAR_21, VAR_22, VAR_23;
 struct ext4_group_desc *VAR_24;
 struct orlov_stats VAR_25;
 int VAR_26 = FUNC_8(VAR_8);
 struct dx_hash_info VAR_27;

 VAR_23 = VAR_9;
 if (VAR_26 > 1) {
  VAR_23 = (VAR_9 + VAR_26 - 1) >>
   VAR_8->s_log_groups_per_flex;
  VAR_7 >>= VAR_8->s_log_groups_per_flex;
 }

 VAR_11 = FUNC_15(&VAR_8->s_freeinodes_counter);
 VAR_12 = VAR_11 / VAR_23;
 VAR_14 = FUNC_0(VAR_8,
  FUNC_15(&VAR_8->s_freeclusters_counter));
 VAR_15 = VAR_14;
 FUNC_7(VAR_15, VAR_23);
 VAR_16 = FUNC_15(&VAR_8->s_dirs_counter);

 if (FUNC_5(VAR_5) &&
     ((VAR_3 == FUNC_6(VAR_2->s_root)) ||
      (FUNC_12(VAR_3, VAR_1)))) {
  int VAR_28 = VAR_10;
  int VAR_29 = -1;

  if (VAR_6) {
   VAR_27.hash_version = VAR_0;
   VAR_27.seed = VAR_8->s_hash_seed;
   FUNC_13(VAR_3, VAR_6->name, VAR_6->len, &VAR_27);
   VAR_21 = VAR_27.hash;
  } else
   VAR_21 = FUNC_16();
  VAR_7 = (unsigned)VAR_21 % VAR_23;
  for (VAR_20 = 0; VAR_20 < VAR_23; VAR_20++) {
   VAR_22 = (VAR_7 + VAR_20) % VAR_23;
   FUNC_14(VAR_2, VAR_22, VAR_26, &VAR_25);
   if (!VAR_25.free_inodes)
    continue;
   if (VAR_25.used_dirs >= VAR_28)
    continue;
   if (VAR_25.free_inodes < VAR_12)
    continue;
   if (VAR_25.free_clusters < VAR_15)
    continue;
   VAR_21 = VAR_22;
   VAR_29 = 0;
   VAR_28 = VAR_25.used_dirs;
  }
  if (VAR_29)
   goto fallback;
 found_flex_bg:
  if (VAR_26 == 1) {
   *VAR_4 = VAR_21;
   return 0;
  }
  VAR_21 *= VAR_26;
  for (VAR_20 = 0; VAR_20 < VAR_26; VAR_20++) {
   if (VAR_21+VAR_20 >= VAR_9)
    break;
   VAR_24 = FUNC_10(VAR_2, VAR_21+VAR_20, ((void*)0));
   if (VAR_24 && FUNC_9(VAR_2, VAR_24)) {
    *VAR_4 = VAR_21+VAR_20;
    return 0;
   }
  }
  goto fallback;
 }

 VAR_17 = VAR_16 / VAR_23 + VAR_10 / 16;
 VAR_18 = VAR_12 - VAR_10*VAR_26 / 4;
 if (VAR_18 < 1)
  VAR_18 = 1;
 VAR_19 = VAR_15 - FUNC_1(VAR_2)*VAR_26 / 4;





 if (FUNC_2(VAR_3)->i_last_alloc_group != ~0) {
  VAR_7 = FUNC_2(VAR_3)->i_last_alloc_group;
  if (VAR_26 > 1)
   VAR_7 >>= VAR_8->s_log_groups_per_flex;
 }

 for (VAR_20 = 0; VAR_20 < VAR_23; VAR_20++) {
  VAR_21 = (VAR_7 + VAR_20) % VAR_23;
  FUNC_14(VAR_2, VAR_21, VAR_26, &VAR_25);
  if (VAR_25.used_dirs >= VAR_17)
   continue;
  if (VAR_25.free_inodes < VAR_18)
   continue;
  if (VAR_25.free_clusters < VAR_19)
   continue;
  goto found_flex_bg;
 }

fallback:
 VAR_23 = VAR_9;
 VAR_12 = VAR_11 / VAR_23;
fallback_retry:
 VAR_7 = FUNC_2(VAR_3)->i_block_group;
 for (VAR_20 = 0; VAR_20 < VAR_23; VAR_20++) {
  VAR_21 = (VAR_7 + VAR_20) % VAR_23;
  VAR_24 = FUNC_10(VAR_2, VAR_21, ((void*)0));
  if (VAR_24) {
   VAR_13 = FUNC_9(VAR_2, VAR_24);
   if (VAR_13 && VAR_13 >= VAR_12) {
    *VAR_4 = VAR_21;
    return 0;
   }
  }
 }

 if (VAR_12) {




  VAR_12 = 0;
  goto fallback_retry;
 }

 return -1;
}
