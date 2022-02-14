
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {int rd_length; int rd_free; int rd_data; int rd_dinodes; struct gfs2_bitmap* rd_bits; struct gfs2_sbd* rd_sbd; } ;
struct gfs2_bitmap {int bi_bytes; scalar_t__ bi_offset; TYPE_1__* bi_bh; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int FUNC_0 (struct gfs2_sbd*,char*,int,int) ;
 int FUNC_1 (struct gfs2_rgrpd*,scalar_t__,int ,int) ;
 scalar_t__ FUNC_2 (struct gfs2_rgrpd*) ;
 int FUNC_3 (int*,int ,int) ;

void FUNC_4(struct gfs2_rgrpd *VAR_0)
{
 struct gfs2_sbd *VAR_1 = VAR_0->rd_sbd;
 struct gfs2_bitmap *VAR_2 = ((void*)0);
 u32 VAR_3 = VAR_0->rd_length;
 u32 VAR_4[4], VAR_5;
 int VAR_6, VAR_7;

 FUNC_3(VAR_4, 0, 4 * sizeof(u32));


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_2 = VAR_0->rd_bits + VAR_6;
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
   VAR_4[VAR_7] += FUNC_1(VAR_0,
        VAR_2->bi_bh->b_data +
        VAR_2->bi_offset,
        VAR_2->bi_bytes, VAR_7);
 }

 if (VAR_4[0] != VAR_0->rd_free) {
  if (FUNC_2(VAR_0))
   FUNC_0(VAR_1, "free data mismatch:  %u != %u\n",
          VAR_4[0], VAR_0->rd_free);
  return;
 }

 VAR_5 = VAR_0->rd_data - VAR_0->rd_free - VAR_0->rd_dinodes;
 if (VAR_4[1] != VAR_5) {
  if (FUNC_2(VAR_0))
   FUNC_0(VAR_1, "used data mismatch:  %u != %u\n",
          VAR_4[1], VAR_5);
  return;
 }

 if (VAR_4[2] + VAR_4[3] != VAR_0->rd_dinodes) {
  if (FUNC_2(VAR_0))
   FUNC_0(VAR_1, "used metadata mismatch:  %u != %u\n",
          VAR_4[2] + VAR_4[3], VAR_0->rd_dinodes);
  return;
 }
}
