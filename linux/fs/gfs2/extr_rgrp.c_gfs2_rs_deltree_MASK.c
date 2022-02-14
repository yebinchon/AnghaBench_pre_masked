
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_rgrpd {int rd_rsspin; } ;
struct TYPE_2__ {struct gfs2_rgrpd* rgd; } ;
struct gfs2_blkreserv {int rs_free; TYPE_1__ rs_rbm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_blkreserv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct gfs2_blkreserv *VAR_0)
{
 struct gfs2_rgrpd *VAR_1;

 VAR_1 = VAR_0->rs_rbm.rgd;
 if (VAR_1) {
  FUNC_2(&VAR_1->rd_rsspin);
  FUNC_1(VAR_0);
  FUNC_0(VAR_0->rs_free);
  FUNC_3(&VAR_1->rd_rsspin);
 }
}
