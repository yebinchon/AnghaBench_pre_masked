
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_rgrpd {int rd_length; struct gfs2_bitmap* rd_bits; } ;
struct gfs2_bitmap {int * bi_bh; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct gfs2_rgrpd *VAR_0)
{
 int VAR_1, VAR_2 = VAR_0->rd_length;

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
  struct gfs2_bitmap *VAR_3 = VAR_0->rd_bits + VAR_1;
  if (VAR_3->bi_bh) {
   FUNC_0(VAR_3->bi_bh);
   VAR_3->bi_bh = ((void*)0);
  }
 }

}
