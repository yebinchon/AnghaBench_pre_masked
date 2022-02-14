
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {int rd_gl; } ;
struct gfs2_rbm {struct gfs2_rgrpd* rgd; } ;
struct gfs2_bitmap {TYPE_1__* bi_bh; int bi_bytes; scalar_t__ bi_offset; scalar_t__ bi_clone; } ;
struct TYPE_2__ {scalar_t__ b_data; int b_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct gfs2_rbm*,int ) ;
 int FUNC_2 (struct gfs2_rbm*) ;
 int FUNC_3 (struct gfs2_rbm*,int,unsigned char) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 struct gfs2_bitmap* FUNC_7 (struct gfs2_rbm*) ;

__attribute__((used)) static void FUNC_8(struct gfs2_sbd *VAR_2, struct gfs2_rgrpd *VAR_3,
         u64 VAR_4, u32 VAR_5, unsigned char VAR_6)
{
 struct gfs2_rbm VAR_7;
 struct gfs2_bitmap *VAR_8, *VAR_9 = ((void*)0);

 VAR_7.rgd = VAR_3;
 if (FUNC_0(FUNC_1(&VAR_7, VAR_4)))
  return;
 while (VAR_5--) {
  VAR_8 = FUNC_7(&VAR_7);
  if (VAR_8 != VAR_9) {
   if (!VAR_8->bi_clone) {
    VAR_8->bi_clone = FUNC_5(VAR_8->bi_bh->b_size,
            VAR_0 | VAR_1);
    FUNC_6(VAR_8->bi_clone + VAR_8->bi_offset,
           VAR_8->bi_bh->b_data + VAR_8->bi_offset,
           VAR_8->bi_bytes);
   }
   FUNC_4(VAR_7.rgd->rd_gl, VAR_8->bi_bh);
   VAR_9 = VAR_8;
  }
  FUNC_3(&VAR_7, 0, VAR_6);
  FUNC_2(&VAR_7);
 }
}
