
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; } ;
struct ext4_super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ ext4_grpblk_t ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct ext4_super_block*) ;
 int FUNC_3 (struct super_block*,scalar_t__,int *,scalar_t__*) ;
 int FUNC_4 (struct super_block*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct super_block*,int ,char*,scalar_t__,...) ;
 int FUNC_6 (struct super_block*,char*,...) ;
 struct buffer_head* FUNC_7 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct super_block*,int ) ;

int FUNC_9(struct super_block *VAR_6, struct ext4_super_block *VAR_7,
        ext4_fsblk_t VAR_8)
{
 ext4_fsblk_t VAR_9;
 ext4_grpblk_t VAR_10;
 ext4_grpblk_t VAR_11;
 struct buffer_head *VAR_12;
 int VAR_13;
 ext4_group_t VAR_14;

 VAR_9 = FUNC_2(VAR_7);

 if (FUNC_8(VAR_6, VAR_0))
  FUNC_5(VAR_6, VAR_4,
    "extending last group from %llu to %llu blocks",
    VAR_9, VAR_8);

 if (VAR_8 == 0 || VAR_8 == VAR_9)
  return 0;

 if (VAR_8 > (sector_t)(~0ULL) >> (VAR_6->s_blocksize_bits - 9)) {
  FUNC_5(VAR_6, VAR_5,
    "filesystem too large to resize to %llu blocks safely",
    VAR_8);
  return -VAR_1;
 }

 if (VAR_8 < VAR_9) {
  FUNC_6(VAR_6, "can't shrink FS - resize aborted");
  return -VAR_1;
 }


 FUNC_3(VAR_6, VAR_9, &VAR_14, &VAR_10);

 if (VAR_10 == 0) {
  FUNC_6(VAR_6, "need to use ext2online to resize further");
  return -VAR_3;
 }

 VAR_11 = FUNC_0(VAR_6) - VAR_10;

 if (VAR_9 + VAR_11 < VAR_9) {
  FUNC_6(VAR_6, "blocks_count overflow");
  return -VAR_1;
 }

 if (VAR_9 + VAR_11 > VAR_8)
  VAR_11 = VAR_8 - VAR_9;

 if (VAR_9 + VAR_11 < VAR_8)
  FUNC_6(VAR_6, "will only finish group (%llu blocks, %u new)",
        VAR_9 + VAR_11, VAR_11);


 VAR_12 = FUNC_7(VAR_6, VAR_9 + VAR_11 - 1);
 if (!VAR_12) {
  FUNC_6(VAR_6, "can't read last block, resize aborted");
  return -VAR_2;
 }
 FUNC_1(VAR_12);

 VAR_13 = FUNC_4(VAR_6, VAR_9, VAR_11);
 return VAR_13;
}
