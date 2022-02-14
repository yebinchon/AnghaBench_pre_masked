
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct TYPE_4__ {scalar_t__ ar_discard; } ;
struct gfs2_sbd {TYPE_2__ sd_args; struct super_block* sd_vfs; } ;
struct gfs2_bitmap {unsigned int bi_bytes; int* bi_clone; int bi_offset; unsigned int bi_start; TYPE_1__* bi_bh; } ;
struct buffer_head {int* b_data; } ;
typedef scalar_t__ sector_t ;
struct TYPE_3__ {int* b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct gfs2_sbd*,char*,int) ;
 int FUNC_1 (struct super_block*,scalar_t__,scalar_t__,int ,int ) ;

int FUNC_2(struct gfs2_sbd *VAR_3, u64 VAR_4,
        struct buffer_head *VAR_5,
        const struct gfs2_bitmap *VAR_6, unsigned VAR_7, u64 *VAR_8)
{
 struct super_block *VAR_9 = VAR_3->sd_vfs;
 u64 VAR_10;
 sector_t VAR_11 = 0;
 sector_t VAR_12 = 0;
 int VAR_13;
 unsigned int VAR_14;
 u32 VAR_15 = 0;
 u8 VAR_16;

 for (VAR_14 = 0; VAR_14 < VAR_6->bi_bytes; VAR_14++) {
  const u8 *VAR_17 = VAR_6->bi_clone ? VAR_6->bi_clone : VAR_6->bi_bh->b_data;
  VAR_17 += VAR_6->bi_offset;
  VAR_17 += VAR_14;
  if (VAR_5) {
   const u8 *VAR_18 = VAR_5->b_data + VAR_6->bi_offset + VAR_14;
   VAR_16 = ~(*VAR_18 | (*VAR_18 >> 1)) & (*VAR_17 | (*VAR_17 >> 1));
  } else {
   VAR_16 = ~(*VAR_17 | (*VAR_17 >> 1));
  }
  VAR_16 &= 0x55;
  if (VAR_16 == 0)
   continue;
  VAR_10 = VAR_4 + ((VAR_6->bi_start + VAR_14) * VAR_2);
  while(VAR_16) {
   if (VAR_16 & 1) {
    if (VAR_12 == 0)
     goto start_new_extent;
    if ((VAR_11 + VAR_12) != VAR_10) {
     if (VAR_12 >= VAR_7) {
      VAR_13 = FUNC_1(VAR_9,
       VAR_11, VAR_12,
       VAR_1, 0);
      if (VAR_13)
       goto fail;
      VAR_15 += VAR_12;
     }
     VAR_12 = 0;
start_new_extent:
     VAR_11 = VAR_10;
    }
    VAR_12++;
   }
   VAR_16 >>= 2;
   VAR_10++;
  }
 }
 if (VAR_12 >= VAR_7) {
  VAR_13 = FUNC_1(VAR_9, VAR_11, VAR_12, VAR_1, 0);
  if (VAR_13)
   goto fail;
  VAR_15 += VAR_12;
 }
 if (VAR_8)
  *VAR_8 = VAR_15;
 return 0;

fail:
 if (VAR_3->sd_args.ar_discard)
  FUNC_0(VAR_3, "error %d on discard request, turning discards off for this filesystem\n", VAR_13);
 VAR_3->sd_args.ar_discard = 0;
 return -VAR_0;
}
