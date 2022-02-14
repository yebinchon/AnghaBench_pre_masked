
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct o2hb_region {unsigned int hr_block_bits; unsigned int hr_slots_per_page; unsigned int hr_start_block; struct page** hr_slot_data; int hr_bdev; } ;
struct o2hb_bio_wait_ctxt {int dummy; } ;
struct TYPE_2__ {unsigned int bi_sector; } ;
struct bio {int bi_end_io; struct o2hb_bio_wait_ctxt* bi_private; TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 struct bio* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct bio*,struct page*,unsigned int,unsigned int) ;
 struct bio* FUNC_2 (int ,int) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,int,int) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_5 ;

__attribute__((used)) static struct bio *FUNC_7(struct o2hb_region *VAR_6,
          struct o2hb_bio_wait_ctxt *VAR_7,
          unsigned int *VAR_8,
          unsigned int VAR_9, int VAR_10,
          int VAR_11)
{
 int VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16 = VAR_6->hr_block_bits;
 unsigned int VAR_17 = VAR_6->hr_slots_per_page;
 unsigned int VAR_18 = *VAR_8;
 struct bio *VAR_19;
 struct page *VAR_20;





 VAR_19 = FUNC_2(VAR_1, 16);
 if (!VAR_19) {
  FUNC_6(VAR_2, "Could not alloc slots BIO!\n");
  VAR_19 = FUNC_0(-VAR_0);
  goto bail;
 }


 VAR_19->bi_iter.bi_sector = (VAR_6->hr_start_block + VAR_18) << (VAR_16 - 9);
 FUNC_3(VAR_19, VAR_6->hr_bdev);
 VAR_19->bi_private = VAR_7;
 VAR_19->bi_end_io = VAR_5;
 FUNC_4(VAR_19, VAR_10, VAR_11);

 VAR_15 = (VAR_18 << VAR_16) % VAR_4;
 while(VAR_18 < VAR_9) {
  VAR_13 = VAR_18 / VAR_17;
  VAR_20 = VAR_6->hr_slot_data[VAR_13];

  VAR_14 = FUNC_5(VAR_4 - VAR_15,
         (VAR_9-VAR_18) * (VAR_4/VAR_17) );

  FUNC_6(VAR_3, "page %d, vec_len = %u, vec_start = %u\n",
       VAR_13, VAR_14, VAR_15);

  VAR_12 = FUNC_1(VAR_19, VAR_20, VAR_14, VAR_15);
  if (VAR_12 != VAR_14) break;

  VAR_18 += VAR_14 / (VAR_4/VAR_17);
  VAR_15 = 0;
 }

bail:
 *VAR_8 = VAR_18;
 return VAR_19;
}
