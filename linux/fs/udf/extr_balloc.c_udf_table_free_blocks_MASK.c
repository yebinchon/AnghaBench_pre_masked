
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct unallocSpaceEntry {int dummy; } ;
struct udf_sb_info {int s_alloc_mutex; int s_partition; struct udf_part_map* s_partmaps; } ;
struct udf_part_map {scalar_t__ s_partition_len; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_location; } ;
struct super_block {scalar_t__ s_blocksize_bits; int s_blocksize; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct kernel_lb_addr {size_t partitionReferenceNum; scalar_t__ logicalBlockNum; } ;
struct inode {int dummy; } ;
struct extent_position {int offset; int * bh; int block; } ;
typedef int int8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 struct udf_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct inode*,struct extent_position*,struct kernel_lb_addr*,scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct super_block*,int ,scalar_t__) ;
 int FUNC_8 (char*,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct inode*,struct extent_position*,struct kernel_lb_addr*,scalar_t__*,int) ;
 int FUNC_10 (struct inode*,scalar_t__,struct extent_position*) ;
 int FUNC_11 (struct inode*,struct extent_position*,struct kernel_lb_addr*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_12(struct super_block *VAR_3,
      struct inode *VAR_4,
      struct kernel_lb_addr *VAR_5,
      uint32_t VAR_6,
      uint32_t VAR_7)
{
 struct udf_sb_info *VAR_8 = FUNC_1(VAR_3);
 struct udf_part_map *VAR_9;
 uint32_t VAR_10, VAR_11;
 uint32_t VAR_12;
 struct kernel_lb_addr VAR_13;
 struct extent_position VAR_14, VAR_15;
 int8_t VAR_16;
 struct udf_inode_info *VAR_17;

 FUNC_5(&VAR_8->s_alloc_mutex);
 VAR_9 = &VAR_8->s_partmaps[VAR_5->partitionReferenceNum];
 if (VAR_5->logicalBlockNum + VAR_7 < VAR_7 ||
     (VAR_5->logicalBlockNum + VAR_7) > VAR_9->s_partition_len) {
  FUNC_8("%u < %d || %u + %u > %u\n",
     VAR_5->logicalBlockNum, 0,
     VAR_5->logicalBlockNum, VAR_7,
     VAR_9->s_partition_len);
  goto error_return;
 }

 VAR_17 = FUNC_0(VAR_4);
 FUNC_7(VAR_3, VAR_8->s_partition, VAR_7);

 VAR_10 = VAR_5->logicalBlockNum + VAR_6;
 VAR_11 = VAR_5->logicalBlockNum + VAR_6 + VAR_7 - 1;

 VAR_15.offset = VAR_14.offset = sizeof(struct unallocSpaceEntry);
 VAR_12 = 0;
 VAR_15.block = VAR_14.block = VAR_17->i_location;
 VAR_15.bh = VAR_14.bh = ((void*)0);

 while (VAR_7 &&
        (VAR_16 = FUNC_9(VAR_4, &VAR_15, &VAR_13, &VAR_12, 1)) != -1) {
  if (((VAR_13.logicalBlockNum +
   (VAR_12 >> VAR_3->s_blocksize_bits)) == VAR_10)) {
   if ((0x3FFFFFFF - VAR_12) <
     (VAR_7 << VAR_3->s_blocksize_bits)) {
    uint32_t VAR_18 = ((0x3FFFFFFF - VAR_12) >>
       VAR_3->s_blocksize_bits);
    VAR_7 -= VAR_18;
    VAR_10 += VAR_18;
    VAR_12 = (VAR_16 << 30) |
     (0x40000000 - VAR_3->s_blocksize);
   } else {
    VAR_12 = (VAR_16 << 30) |
     (VAR_12 +
     (VAR_7 << VAR_3->s_blocksize_bits));
    VAR_10 += VAR_7;
    VAR_7 = 0;
   }
   FUNC_11(VAR_4, &VAR_14, &VAR_13, VAR_12, 1);
  } else if (VAR_13.logicalBlockNum == (VAR_11 + 1)) {
   if ((0x3FFFFFFF - VAR_12) <
     (VAR_7 << VAR_3->s_blocksize_bits)) {
    uint32_t VAR_19 = ((0x3FFFFFFF - VAR_12) >>
      VAR_3->s_blocksize_bits);
    VAR_7 -= VAR_19;
    VAR_11 -= VAR_19;
    VAR_13.logicalBlockNum -= VAR_19;
    VAR_12 = (VAR_16 << 30) |
     (0x40000000 - VAR_3->s_blocksize);
   } else {
    VAR_13.logicalBlockNum = VAR_10;
    VAR_12 = (VAR_16 << 30) |
     (VAR_12 +
     (VAR_7 << VAR_3->s_blocksize_bits));
    VAR_11 -= VAR_7;
    VAR_7 = 0;
   }
   FUNC_11(VAR_4, &VAR_14, &VAR_13, VAR_12, 1);
  }

  if (VAR_15.bh != VAR_14.bh) {
   VAR_14.block = VAR_15.block;
   FUNC_3(VAR_14.bh);
   FUNC_4(VAR_15.bh);
   VAR_14.bh = VAR_15.bh;
   VAR_14.offset = 0;
  } else {
   VAR_14.offset = VAR_15.offset;
  }
 }

 if (VAR_7) {
  int VAR_20;

  VAR_13.logicalBlockNum = VAR_10;
  VAR_12 = VAR_0 |
   (VAR_7 << VAR_3->s_blocksize_bits);

  if (VAR_17->i_alloc_type == VAR_2)
   VAR_20 = sizeof(struct short_ad);
  else if (VAR_17->i_alloc_type == VAR_1)
   VAR_20 = sizeof(struct long_ad);
  else {
   FUNC_3(VAR_14.bh);
   FUNC_3(VAR_15.bh);
   goto error_return;
  }

  if (VAR_15.offset + (2 * VAR_20) > VAR_3->s_blocksize) {

   FUNC_10(VAR_4, VAR_13.logicalBlockNum,
      &VAR_15);

   VAR_13.logicalBlockNum++;
   VAR_12 -= VAR_3->s_blocksize;
  }


  if (VAR_12)
   FUNC_2(VAR_4, &VAR_15, &VAR_13, VAR_12, 1);
 }

 FUNC_3(VAR_15.bh);
 FUNC_3(VAR_14.bh);

error_return:
 FUNC_6(&VAR_8->s_alloc_mutex);
 return;
}
