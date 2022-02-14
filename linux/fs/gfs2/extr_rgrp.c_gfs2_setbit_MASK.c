
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {int dummy; } ;
struct gfs2_rbm {int offset; TYPE_2__* rgd; } ;
struct gfs2_bitmap {unsigned int bi_bytes; int bi_offset; unsigned char bi_start; unsigned char* bi_clone; TYPE_1__* bi_bh; } ;
struct TYPE_4__ {scalar_t__ rd_addr; struct gfs2_sbd* rd_sbd; } ;
struct TYPE_3__ {unsigned char* b_data; scalar_t__ b_blocknr; } ;


 int FUNC_0 (int) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct gfs2_sbd*,char*,unsigned long long,unsigned char,unsigned long long) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct gfs2_rbm const*) ;
 struct gfs2_bitmap* FUNC_5 (struct gfs2_rbm const*) ;
 scalar_t__ FUNC_6 (int) ;
 int * VAR_3 ;

__attribute__((used)) static inline void FUNC_7(const struct gfs2_rbm *VAR_4, bool VAR_5,
          unsigned char VAR_6)
{
 unsigned char *VAR_7, *VAR_8, *VAR_9, VAR_10;
 struct gfs2_bitmap *VAR_11 = FUNC_5(VAR_4);
 unsigned int VAR_12 = VAR_11->bi_bytes;
 const unsigned int VAR_13 = (VAR_4->offset % VAR_2) * VAR_1;

 VAR_7 = VAR_11->bi_bh->b_data + VAR_11->bi_offset + (VAR_4->offset / VAR_2);
 VAR_9 = VAR_11->bi_bh->b_data + VAR_11->bi_offset + VAR_12;

 FUNC_0(VAR_7 >= VAR_9);

 VAR_10 = (*VAR_7 >> VAR_13) & VAR_0;

 if (FUNC_6(!VAR_3[VAR_6 * 4 + VAR_10])) {
  struct gfs2_sbd *VAR_14 = VAR_4->rgd->rd_sbd;

  FUNC_2(VAR_14, "buf_blk = 0x%x old_state=%d, new_state=%d\n",
   VAR_4->offset, VAR_10, VAR_6);
  FUNC_2(VAR_14, "rgrp=0x%llx bi_start=0x%x biblk: 0x%llx\n",
   (unsigned long long)VAR_4->rgd->rd_addr, VAR_11->bi_start,
   (unsigned long long)VAR_11->bi_bh->b_blocknr);
  FUNC_2(VAR_14, "bi_offset=0x%x bi_bytes=0x%x block=0x%llx\n",
   VAR_11->bi_offset, VAR_11->bi_bytes,
   (unsigned long long)FUNC_4(VAR_4));
  FUNC_1();
  FUNC_3(VAR_4->rgd);
  return;
 }
 *VAR_7 ^= (VAR_10 ^ VAR_6) << VAR_13;

 if (VAR_5 && VAR_11->bi_clone) {
  VAR_8 = VAR_11->bi_clone + VAR_11->bi_offset + (VAR_4->offset / VAR_2);
  VAR_10 = (*VAR_8 >> VAR_13) & VAR_0;
  *VAR_8 ^= (VAR_10 ^ VAR_6) << VAR_13;
 }
}
