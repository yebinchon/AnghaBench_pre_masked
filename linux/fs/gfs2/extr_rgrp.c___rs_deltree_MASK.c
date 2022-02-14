
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct gfs2_rgrpd {scalar_t__ rd_reserved; int rd_extfail_pt; int rd_rstree; } ;
struct gfs2_rbm {struct gfs2_rgrpd* rgd; } ;
struct gfs2_blkreserv {scalar_t__ rs_free; struct gfs2_rbm rs_rbm; int rs_node; } ;
struct gfs2_bitmap {int bi_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct gfs2_rbm*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct gfs2_rbm*) ;
 int FUNC_5 (struct gfs2_blkreserv*) ;
 int FUNC_6 (int *,int *) ;
 struct gfs2_bitmap* FUNC_7 (struct gfs2_rbm*) ;
 int FUNC_8 (struct gfs2_blkreserv*,int ) ;

__attribute__((used)) static void FUNC_9(struct gfs2_blkreserv *VAR_2)
{
 struct gfs2_rgrpd *VAR_3;

 if (!FUNC_5(VAR_2))
  return;

 VAR_3 = VAR_2->rs_rbm.rgd;
 FUNC_8(VAR_2, VAR_1);
 FUNC_6(&VAR_2->rs_node, &VAR_3->rd_rstree);
 FUNC_1(&VAR_2->rs_node);

 if (VAR_2->rs_free) {
  u64 VAR_4 = FUNC_4(&VAR_2->rs_rbm) +
     VAR_2->rs_free - 1;
  struct gfs2_rbm VAR_5 = { .rgd = VAR_2->rs_rbm.rgd, };
  struct gfs2_bitmap *VAR_6, *VAR_7;


  FUNC_0(VAR_2->rs_rbm.rgd->rd_reserved < VAR_2->rs_free);
  VAR_2->rs_rbm.rgd->rd_reserved -= VAR_2->rs_free;




  VAR_3->rd_extfail_pt += VAR_2->rs_free;
  VAR_2->rs_free = 0;
  if (FUNC_3(&VAR_5, VAR_4))
   return;
  VAR_6 = FUNC_7(&VAR_2->rs_rbm);
  VAR_7 = FUNC_7(&VAR_5);
  do
   FUNC_2(VAR_0, &VAR_6->bi_flags);
  while (VAR_6++ != VAR_7);
 }
}
