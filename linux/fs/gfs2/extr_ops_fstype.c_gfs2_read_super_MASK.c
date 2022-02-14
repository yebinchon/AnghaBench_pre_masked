
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; int s_bdev; } ;
struct page {int dummy; } ;
struct gfs2_sbd {struct super_block* sd_vfs; } ;
struct gfs2_sb {int dummy; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {struct page* bi_private; int bi_end_io; TYPE_1__ bi_iter; } ;
typedef int sector_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct page*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (int ) ;
 int FUNC_5 (struct bio*,struct page*,int ,int ) ;
 struct bio* FUNC_6 (int ,int) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (struct bio*,int ) ;
 int FUNC_9 (struct bio*,int ,int ) ;
 int VAR_6 ;
 int FUNC_10 (struct gfs2_sbd*,int) ;
 int FUNC_11 (struct gfs2_sbd*,struct gfs2_sb*) ;
 struct gfs2_sb* FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct bio*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (struct page*) ;

__attribute__((used)) static int FUNC_18(struct gfs2_sbd *VAR_7, sector_t VAR_8, int VAR_9)
{
 struct super_block *VAR_10 = VAR_7->sd_vfs;
 struct gfs2_sb *VAR_11;
 struct page *VAR_12;
 struct bio *VAR_13;

 VAR_12 = FUNC_4(VAR_2);
 if (FUNC_16(!VAR_12))
  return -VAR_1;

 FUNC_1(VAR_12);
 FUNC_0(VAR_12);
 FUNC_14(VAR_12);

 VAR_13 = FUNC_6(VAR_2, 1);
 VAR_13->bi_iter.bi_sector = VAR_8 * (VAR_10->s_blocksize >> 9);
 FUNC_8(VAR_13, VAR_10->s_bdev);
 FUNC_5(VAR_13, VAR_12, VAR_3, 0);

 VAR_13->bi_end_io = VAR_6;
 VAR_13->bi_private = VAR_12;
 FUNC_9(VAR_13, VAR_5, VAR_4);
 FUNC_15(VAR_13);
 FUNC_17(VAR_12);
 FUNC_7(VAR_13);
 if (!FUNC_2(VAR_12)) {
  FUNC_3(VAR_12);
  return -VAR_0;
 }
 VAR_11 = FUNC_12(VAR_12);
 FUNC_11(VAR_7, VAR_11);
 FUNC_13(VAR_12);
 FUNC_3(VAR_12);
 return FUNC_10(VAR_7, VAR_9);
}
