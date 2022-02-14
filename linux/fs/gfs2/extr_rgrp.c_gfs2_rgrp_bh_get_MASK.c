
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ar_rgrplvb; } ;
struct gfs2_sbd {TYPE_1__ sd_args; } ;
struct gfs2_rgrpd {unsigned int rd_length; int rd_flags; struct gfs2_bitmap* rd_bits; TYPE_2__* rd_rgl; int rd_free; int rd_extfail_pt; int rd_free_clone; scalar_t__ rd_addr; struct gfs2_glock* rd_gl; struct gfs2_sbd* rd_sbd; } ;
struct gfs2_glock {int dummy; } ;
struct gfs2_bitmap {int bi_clone; TYPE_3__* bi_bh; int bi_flags; } ;
struct TYPE_9__ {int b_data; } ;
struct TYPE_8__ {scalar_t__ rl_magic; scalar_t__ rl_unlinked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct gfs2_rgrpd*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct gfs2_sbd*,int) ;
 int FUNC_5 (struct gfs2_rgrpd*) ;
 int FUNC_6 (struct gfs2_glock*,scalar_t__,int ,int ,TYPE_3__**) ;
 int FUNC_7 (struct gfs2_sbd*,TYPE_3__*) ;
 scalar_t__ FUNC_8 (struct gfs2_sbd*,TYPE_3__*,int ) ;
 int FUNC_9 (struct gfs2_rgrpd*,int ) ;
 int FUNC_10 (struct gfs2_rgrpd*) ;
 int FUNC_11 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_12(struct gfs2_rgrpd *VAR_7)
{
 struct gfs2_sbd *VAR_8 = VAR_7->rd_sbd;
 struct gfs2_glock *VAR_9 = VAR_7->rd_gl;
 unsigned int VAR_10 = VAR_7->rd_length;
 struct gfs2_bitmap *VAR_11;
 unsigned int VAR_12, VAR_13;
 int VAR_14;

 if (VAR_7->rd_bits[0].bi_bh != ((void*)0))
  return 0;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_11 = VAR_7->rd_bits + VAR_12;
  VAR_14 = FUNC_6(VAR_9, VAR_7->rd_addr + VAR_12, 0, 0, &VAR_11->bi_bh);
  if (VAR_14)
   goto fail;
 }

 for (VAR_13 = VAR_10; VAR_13--;) {
  VAR_11 = VAR_7->rd_bits + VAR_13;
  VAR_14 = FUNC_7(VAR_8, VAR_11->bi_bh);
  if (VAR_14)
   goto fail;
  if (FUNC_8(VAR_8, VAR_11->bi_bh, VAR_13 ? VAR_3 :
           VAR_4)) {
   VAR_14 = -VAR_0;
   goto fail;
  }
 }

 if (!(VAR_7->rd_flags & VAR_6)) {
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
   FUNC_1(VAR_1, &VAR_7->rd_bits[VAR_12].bi_flags);
  FUNC_9(VAR_7, (VAR_7->rd_bits[0].bi_bh)->b_data);
  VAR_7->rd_flags |= (VAR_6 | VAR_5);
  VAR_7->rd_free_clone = VAR_7->rd_free;

  VAR_7->rd_extfail_pt = VAR_7->rd_free;
 }
 if (FUNC_3(VAR_2) != VAR_7->rd_rgl->rl_magic) {
  VAR_7->rd_rgl->rl_unlinked = FUNC_3(FUNC_2(VAR_7));
  FUNC_11(VAR_7->rd_rgl,
         VAR_7->rd_bits[0].bi_bh->b_data);
 }
 else if (VAR_8->sd_args.ar_rgrplvb) {
  if (!FUNC_10(VAR_7)){
   FUNC_5(VAR_7);
   VAR_14 = -VAR_0;
   goto fail;
  }
  if (VAR_7->rd_rgl->rl_unlinked == 0)
   VAR_7->rd_flags &= ~VAR_5;
 }
 return 0;

fail:
 while (VAR_12--) {
  VAR_11 = VAR_7->rd_bits + VAR_12;
  FUNC_0(VAR_11->bi_bh);
  VAR_11->bi_bh = ((void*)0);
  FUNC_4(VAR_8, !VAR_11->bi_clone);
 }

 return VAR_14;
}
