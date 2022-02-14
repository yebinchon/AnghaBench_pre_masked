
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ar_rgrplvb; } ;
struct gfs2_sbd {TYPE_2__ sd_args; } ;
struct gfs2_rgrpd {struct gfs2_sbd* rd_sbd; } ;
struct gfs2_holder {int gh_flags; TYPE_1__* gh_gl; } ;
struct TYPE_3__ {struct gfs2_rgrpd* gl_object; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_rgrpd*) ;

int FUNC_1(struct gfs2_holder *VAR_1)
{
 struct gfs2_rgrpd *VAR_2 = VAR_1->gh_gl->gl_object;
 struct gfs2_sbd *VAR_3 = VAR_2->rd_sbd;

 if (VAR_1->gh_flags & VAR_0 && VAR_3->sd_args.ar_rgrplvb)
  return 0;
 return FUNC_0(VAR_2);
}
