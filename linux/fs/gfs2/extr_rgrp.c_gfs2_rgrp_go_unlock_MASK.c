
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_rgrpd {int dummy; } ;
struct gfs2_holder {TYPE_1__* gh_gl; } ;
struct TYPE_2__ {int gl_flags; struct gfs2_rgrpd* gl_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gfs2_rgrpd*) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct gfs2_holder *VAR_2)
{
 struct gfs2_rgrpd *VAR_3 = VAR_2->gh_gl->gl_object;
 int VAR_4 = FUNC_1(VAR_0, &VAR_2->gh_gl->gl_flags) |
  FUNC_1(VAR_1, &VAR_2->gh_gl->gl_flags);

 if (VAR_3 && VAR_4)
  FUNC_0(VAR_3);
}
