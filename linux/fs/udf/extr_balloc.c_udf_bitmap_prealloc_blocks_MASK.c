
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t uint16_t ;
struct udf_sb_info {int s_alloc_mutex; TYPE_1__* s_partmaps; } ;
struct udf_bitmap {struct buffer_head** s_block_bitmap; } ;
struct super_block {int s_blocksize_bits; int s_blocksize; } ;
struct spaceBitmapDesc {int dummy; } ;
struct buffer_head {int b_data; } ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {scalar_t__ s_partition_len; } ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,struct udf_bitmap*,int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct super_block*,size_t,int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_0,
          struct udf_bitmap *VAR_1,
          uint16_t VAR_2, uint32_t VAR_3,
          uint32_t VAR_4)
{
 struct udf_sb_info *VAR_5 = FUNC_0(VAR_0);
 int VAR_6 = 0;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10;
 struct buffer_head *VAR_11;
 __u32 VAR_12;

 FUNC_3(&VAR_5->s_alloc_mutex);
 VAR_12 = VAR_5->s_partmaps[VAR_2].s_partition_len;
 if (VAR_3 >= VAR_12)
  goto out;

 if (VAR_3 + VAR_4 > VAR_12)
  VAR_4 = VAR_12 - VAR_3;

 do {
  VAR_8 = VAR_3 + (sizeof(struct spaceBitmapDesc) << 3);
  VAR_9 = VAR_8 >> (VAR_0->s_blocksize_bits + 3);

  VAR_10 = FUNC_1(VAR_0, VAR_1, VAR_9);
  if (VAR_10 < 0)
   goto out;
  VAR_11 = VAR_1->s_block_bitmap[VAR_10];

  VAR_7 = VAR_8 % (VAR_0->s_blocksize << 3);

  while (VAR_7 < (VAR_0->s_blocksize << 3) && VAR_4 > 0) {
   if (!FUNC_6(VAR_7, VAR_11->b_data))
    goto out;
   VAR_4--;
   VAR_6++;
   VAR_7++;
   VAR_8++;
  }
  FUNC_2(VAR_11);
 } while (VAR_4 > 0);

out:
 FUNC_5(VAR_0, VAR_2, -VAR_6);
 FUNC_4(&VAR_5->s_alloc_mutex);
 return VAR_6;
}
