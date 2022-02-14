
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef struct btrfs_free_space_op {int use_bitmap; int recalc_thresholds; } const btrfs_free_space_op ;
struct btrfs_block_group_cache {TYPE_1__* free_space_ctl; } ;
struct TYPE_2__ {int free_space; struct btrfs_free_space_op const* op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct btrfs_block_group_cache*,int,int) ;
 int FUNC_2 (struct btrfs_block_group_cache*,int ,int,int ,int*) ;
 int FUNC_3 (struct btrfs_block_group_cache*,int,int) ;
 int FUNC_4 (struct btrfs_block_group_cache*) ;
 int FUNC_5 (struct btrfs_block_group_cache*,int,int) ;
 int FUNC_6 (struct btrfs_block_group_cache*,int,int,int) ;
 scalar_t__ FUNC_7 (struct btrfs_block_group_cache*,int,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_10(struct btrfs_block_group_cache *VAR_11,
           u32 VAR_12)
{
 int VAR_13;
 u64 VAR_14;
 u64 VAR_15;
 const struct btrfs_free_space_op VAR_16 = {
  .recalc_thresholds = VAR_11->free_space_ctl->op->recalc_thresholds,
  .use_bitmap = VAR_10,
 };
 const struct btrfs_free_space_op *VAR_17;

 FUNC_9("running space stealing from bitmap to extent tests");
 VAR_17 = VAR_11->free_space_ctl->op;
 VAR_11->free_space_ctl->op = &VAR_16;




 VAR_13 = FUNC_6(VAR_11, VAR_3 - VAR_7, VAR_2, 0);
 if (VAR_13) {
  FUNC_8("couldn't add extent entry %d", VAR_13);
  return VAR_13;
 }


 VAR_13 = FUNC_6(VAR_11, VAR_3 + VAR_9,
     VAR_3 - VAR_9, 1);
 if (VAR_13) {
  FUNC_8("couldn't add bitmap entry %d", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_5(VAR_11, 2, 1);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_3(VAR_11,
          VAR_3 + 768 * VAR_5,
          VAR_3 - 768 * VAR_5);
 if (VAR_13) {
  FUNC_8("failed to free part of bitmap space %d", VAR_13);
  return VAR_13;
 }


 if (!FUNC_7(VAR_11, VAR_3 - VAR_7, VAR_2)) {
  FUNC_8("free space range missing");
  return -VAR_1;
 }
 if (!FUNC_7(VAR_11, VAR_3 + VAR_9, VAR_7)) {
  FUNC_8("free space range missing");
  return -VAR_1;
 }





 if (FUNC_7(VAR_11, VAR_3 + 768 * VAR_5,
         VAR_3 - 768 * VAR_5)) {
  FUNC_8("bitmap region not removed from space cache");
  return -VAR_0;
 }





 if (FUNC_7(VAR_11, VAR_3 + VAR_7, VAR_7)) {
  FUNC_8("invalid bitmap region marked as free");
  return -VAR_0;
 }





 if (FUNC_7(VAR_11, VAR_3, VAR_7)) {
  FUNC_8("invalid bitmap region marked as free");
  return -VAR_0;
 }






 VAR_13 = FUNC_1(VAR_11, VAR_3, VAR_9);
 if (VAR_13) {
  FUNC_8("error adding free space: %d", VAR_13);
  return VAR_13;
 }

 if (!FUNC_7(VAR_11, VAR_3, VAR_9)) {
  FUNC_8("bitmap region not marked as free");
  return -VAR_1;
 }





 VAR_13 = FUNC_5(VAR_11, 2, 1);
 if (VAR_13)
  return VAR_13;







 VAR_13 = FUNC_1(VAR_11, VAR_3 + VAR_4, VAR_12);
 if (VAR_13) {
  FUNC_8("error adding free space: %d", VAR_13);
  return VAR_13;
 }





 VAR_13 = FUNC_5(VAR_11, 2, 1);
 if (VAR_13)
  return VAR_13;






 VAR_13 = FUNC_1(VAR_11, VAR_3 - VAR_2, VAR_2);
 if (VAR_13) {
  FUNC_8("error adding free space: %d", VAR_13);
  return VAR_13;
 }

 if (!FUNC_7(VAR_11, VAR_3 - VAR_2, VAR_2)) {
  FUNC_8("extent region not marked as free");
  return -VAR_1;
 }





 VAR_13 = FUNC_5(VAR_11, 2, 1);
 if (VAR_13)
  return VAR_13;
 if (!FUNC_7(VAR_11, VAR_3 - VAR_7, VAR_6)) {
  FUNC_8("expected region not marked as free");
  return -VAR_1;
 }

 if (VAR_11->free_space_ctl->free_space != (VAR_6 + VAR_12)) {
  FUNC_8("cache free space is not 1Mb + %u", VAR_12);
  return -VAR_0;
 }

 VAR_14 = FUNC_2(VAR_11,
         0, VAR_6, 0,
         &VAR_15);
 if (VAR_14 != (VAR_3 - VAR_7)) {
  FUNC_8(
 "failed to allocate 1Mb from space cache, returned offset is: %llu",
    VAR_14);
  return -VAR_0;
 }





 VAR_13 = FUNC_5(VAR_11, 1, 1);
 if (VAR_13)
  return VAR_13;

 if (VAR_11->free_space_ctl->free_space != VAR_12) {
  FUNC_8("cache free space is not %u", VAR_12);
  return -VAR_0;
 }

 VAR_14 = FUNC_2(VAR_11,
         0, VAR_12, 0,
         &VAR_15);
 if (VAR_14 != (VAR_3 + VAR_4)) {
  FUNC_8("failed to allocate %u, returned offset : %llu",
    VAR_12, VAR_14);
  return -VAR_0;
 }

 VAR_13 = FUNC_4(VAR_11);
 if (VAR_13)
  return VAR_13;

 FUNC_0(VAR_11->free_space_ctl);
 VAR_13 = FUNC_6(VAR_11, VAR_3 + VAR_2, VAR_2, 0);
 if (VAR_13) {
  FUNC_8("couldn't add extent entry %d", VAR_13);
  return VAR_13;
 }


 VAR_13 = FUNC_6(VAR_11, 0, VAR_3 - VAR_9, 1);
 if (VAR_13) {
  FUNC_8("couldn't add bitmap entry %d", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_5(VAR_11, 2, 1);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_3(VAR_11, 0, VAR_3 - 768 * VAR_5);
 if (VAR_13) {
  FUNC_8("failed to free part of bitmap space %d", VAR_13);
  return VAR_13;
 }


 if (!FUNC_7(VAR_11, VAR_3 + VAR_2, VAR_2)) {
  FUNC_8("free space range missing");
  return -VAR_1;
 }
 if (!FUNC_7(VAR_11, VAR_3 - 768 * VAR_5, VAR_7)) {
  FUNC_8("free space range missing");
  return -VAR_1;
 }





 if (FUNC_7(VAR_11, 0, VAR_3 - 768 * VAR_5)) {
  FUNC_8("bitmap region not removed from space cache");
  return -VAR_0;
 }





 if (FUNC_7(VAR_11, VAR_3 - VAR_9, VAR_9)) {
  FUNC_8("invalid bitmap region marked as free");
  return -VAR_0;
 }






 VAR_13 = FUNC_1(VAR_11, VAR_3 - VAR_9, VAR_9);
 if (VAR_13) {
  FUNC_8("error adding free space: %d", VAR_13);
  return VAR_13;
 }

 if (!FUNC_7(VAR_11, VAR_3 - VAR_9, VAR_9)) {
  FUNC_8("bitmap region not marked as free");
  return -VAR_1;
 }





 VAR_13 = FUNC_5(VAR_11, 2, 1);
 if (VAR_13)
  return VAR_13;







 VAR_13 = FUNC_1(VAR_11, VAR_8, 2 * VAR_12);
 if (VAR_13) {
  FUNC_8("error adding free space: %d", VAR_13);
  return VAR_13;
 }






 VAR_13 = FUNC_1(VAR_11, VAR_3, VAR_2);
 if (VAR_13) {
  FUNC_8("error adding free space: %d", VAR_13);
  return VAR_13;
 }

 if (!FUNC_7(VAR_11, VAR_3, VAR_2)) {
  FUNC_8("extent region not marked as free");
  return -VAR_1;
 }





 VAR_13 = FUNC_5(VAR_11, 2, 1);
 if (VAR_13)
  return VAR_13;
 if (!FUNC_7(VAR_11, VAR_3 - 768 * VAR_5, VAR_6)) {
  FUNC_8("expected region not marked as free");
  return -VAR_1;
 }

 if (VAR_11->free_space_ctl->free_space != (VAR_6 + 2 * VAR_12)) {
  FUNC_8("cache free space is not 1Mb + %u", 2 * VAR_12);
  return -VAR_0;
 }

 VAR_14 = FUNC_2(VAR_11, 0, VAR_6, 0,
         &VAR_15);
 if (VAR_14 != (VAR_3 - 768 * VAR_5)) {
  FUNC_8(
 "failed to allocate 1Mb from space cache, returned offset is: %llu",
    VAR_14);
  return -VAR_0;
 }





 VAR_13 = FUNC_5(VAR_11, 1, 1);
 if (VAR_13)
  return VAR_13;

 if (VAR_11->free_space_ctl->free_space != 2 * VAR_12) {
  FUNC_8("cache free space is not %u", 2 * VAR_12);
  return -VAR_0;
 }

 VAR_14 = FUNC_2(VAR_11,
         0, 2 * VAR_12, 0,
         &VAR_15);
 if (VAR_14 != VAR_8) {
  FUNC_8("failed to allocate %u, offset: %llu",
    2 * VAR_12, VAR_14);
  return -VAR_0;
 }

 VAR_13 = FUNC_4(VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_11->free_space_ctl->op = VAR_17;
 FUNC_0(VAR_11->free_space_ctl);

 return 0;
}
