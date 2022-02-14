
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct gfs2_rbm {int bii; scalar_t__ offset; TYPE_1__* rgd; } ;
struct gfs2_inode {int i_res; } ;
struct gfs2_extent {scalar_t__ len; struct gfs2_rbm rbm; } ;
struct gfs2_bitmap {int bi_offset; int bi_flags; int bi_bytes; int * bi_clone; struct buffer_head* bi_bh; } ;
struct buffer_head {int * b_data; } ;
struct TYPE_2__ {int rd_length; scalar_t__ rd_extfail_pt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__,int ) ;
 int FUNC_3 (struct gfs2_rbm*,struct gfs2_inode const*,scalar_t__,struct gfs2_extent*) ;
 int FUNC_4 (int *) ;
 struct gfs2_bitmap* FUNC_5 (struct gfs2_rbm*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct gfs2_rbm *VAR_6, u8 VAR_7, u32 *VAR_8,
    const struct gfs2_inode *VAR_9, bool VAR_10)
{
 bool VAR_11 = VAR_6->bii == 0 && VAR_6->offset == 0;
 struct buffer_head *VAR_12;
 int VAR_13;
 u32 VAR_14;
 u8 *VAR_15;
 bool VAR_16 = 0;
 int VAR_17;
 struct gfs2_bitmap *VAR_18;
 struct gfs2_extent VAR_19 = { .rbm.rgd = VAR_6->rgd, };






 VAR_13 = VAR_6->bii - (VAR_6->offset == 0);

 while(1) {
  VAR_18 = FUNC_5(VAR_6);
  if ((VAR_9 == ((void*)0) || !FUNC_4(&VAR_9->i_res)) &&
      FUNC_7(VAR_3, &VAR_18->bi_flags) &&
      (VAR_7 == VAR_4))
   goto next_bitmap;

  VAR_12 = VAR_18->bi_bh;
  VAR_15 = VAR_12->b_data + VAR_18->bi_offset;
  FUNC_0(!FUNC_1(VAR_12));
  if (VAR_7 != VAR_5 && VAR_18->bi_clone)
   VAR_15 = VAR_18->bi_clone + VAR_18->bi_offset;
  VAR_14 = FUNC_2(VAR_15, VAR_18->bi_bytes, VAR_6->offset, VAR_7);
  if (VAR_14 == VAR_0) {
   if (VAR_7 == VAR_4 && VAR_6->offset == 0)
    FUNC_6(VAR_3, &VAR_18->bi_flags);
   goto next_bitmap;
  }
  VAR_6->offset = VAR_14;
  if (VAR_9 == ((void*)0))
   return 0;

  VAR_17 = FUNC_3(VAR_6, VAR_9,
       VAR_8 ? *VAR_8 : 0,
       &VAR_19);
  if (VAR_17 == 0)
   return 0;
  if (VAR_17 > 0)
   goto next_iter;
  if (VAR_17 == -VAR_1) {
   VAR_6->bii = 0;
   VAR_6->offset = 0;
   goto res_covered_end_of_rgrp;
  }
  return VAR_17;

next_bitmap:
  VAR_6->offset = 0;
  VAR_6->bii++;
  if (VAR_6->bii == VAR_6->rgd->rd_length)
   VAR_6->bii = 0;
res_covered_end_of_rgrp:
  if (VAR_6->bii == 0) {
   if (VAR_16)
    break;
   VAR_16 = 1;
   if (VAR_10)
    break;
  }
next_iter:

  if (VAR_16 && VAR_6->bii > VAR_13)
   break;
 }

 if (VAR_8 == ((void*)0) || VAR_7 != VAR_4)
  return -VAR_2;




 if (VAR_16 && (VAR_11 || VAR_6->bii > VAR_13) &&
     *VAR_8 < VAR_6->rgd->rd_extfail_pt)
  VAR_6->rgd->rd_extfail_pt = *VAR_8;



 if (VAR_19.len) {
  *VAR_6 = VAR_19.rbm;
  *VAR_8 = VAR_19.len;
  return 0;
 }

 return -VAR_2;
}
