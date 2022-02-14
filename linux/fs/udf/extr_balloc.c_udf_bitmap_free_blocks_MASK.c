
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct udf_sb_info {int s_alloc_mutex; int s_partition; struct udf_part_map* s_partmaps; } ;
struct udf_part_map {scalar_t__ s_partition_len; } ;
struct udf_bitmap {struct buffer_head** s_block_bitmap; } ;
struct super_block {int s_blocksize_bits; int s_blocksize; } ;
struct spaceBitmapDesc {int dummy; } ;
struct kernel_lb_addr {size_t partitionReferenceNum; scalar_t__ logicalBlockNum; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef unsigned long __u8 ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,struct udf_bitmap*,unsigned long) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct super_block*,int ,scalar_t__) ;
 int FUNC_6 (char*,unsigned long,...) ;
 scalar_t__ FUNC_7 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct super_block *VAR_0,
       struct udf_bitmap *VAR_1,
       struct kernel_lb_addr *VAR_2,
       uint32_t VAR_3,
       uint32_t VAR_4)
{
 struct udf_sb_info *VAR_5 = FUNC_0(VAR_0);
 struct buffer_head *VAR_6 = ((void*)0);
 struct udf_part_map *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 unsigned long VAR_13;

 FUNC_3(&VAR_5->s_alloc_mutex);
 VAR_7 = &VAR_5->s_partmaps[VAR_2->partitionReferenceNum];
 if (VAR_2->logicalBlockNum + VAR_4 < VAR_4 ||
     (VAR_2->logicalBlockNum + VAR_4) > VAR_7->s_partition_len) {
  FUNC_6("%u < %d || %u + %u > %u\n",
     VAR_2->logicalBlockNum, 0,
     VAR_2->logicalBlockNum, VAR_4,
     VAR_7->s_partition_len);
  goto error_return;
 }

 VAR_8 = VAR_2->logicalBlockNum + VAR_3 +
  (sizeof(struct spaceBitmapDesc) << 3);

 do {
  VAR_13 = 0;
  VAR_9 = VAR_8 >> (VAR_0->s_blocksize_bits + 3);
  VAR_10 = VAR_8 % (VAR_0->s_blocksize << 3);




  if (VAR_10 + VAR_4 > (VAR_0->s_blocksize << 3)) {
   VAR_13 = VAR_10 + VAR_4 - (VAR_0->s_blocksize << 3);
   VAR_4 -= VAR_13;
  }
  VAR_12 = FUNC_1(VAR_0, VAR_1, VAR_9);
  if (VAR_12 < 0)
   goto error_return;

  VAR_6 = VAR_1->s_block_bitmap[VAR_12];
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
   if (FUNC_7(VAR_10 + VAR_11, VAR_6->b_data)) {
    FUNC_6("bit %lu already set\n", VAR_10 + VAR_11);
    FUNC_6("byte=%2x\n",
       ((__u8 *)VAR_6->b_data)[(VAR_10 + VAR_11) >> 3]);
   }
  }
  FUNC_5(VAR_0, VAR_5->s_partition, VAR_4);
  FUNC_2(VAR_6);
  if (VAR_13) {
   VAR_8 += VAR_4;
   VAR_4 = VAR_13;
  }
 } while (VAR_13);

error_return:
 FUNC_4(&VAR_5->s_alloc_mutex);
}
