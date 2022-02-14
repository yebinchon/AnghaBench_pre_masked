
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {int sd_async_glock_wait; } ;
struct gfs2_holder {int gh_flags; TYPE_2__* gh_gl; int gh_iflags; } ;
struct TYPE_3__ {struct gfs2_sbd* ln_sbd; } ;
struct TYPE_4__ {TYPE_1__ gl_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct gfs2_holder *VAR_2)
{
 FUNC_0(VAR_1, &VAR_2->gh_iflags);
 FUNC_1();
 FUNC_3(&VAR_2->gh_iflags, VAR_1);
 if (VAR_2->gh_flags & VAR_0) {
  struct gfs2_sbd *VAR_3 = VAR_2->gh_gl->gl_name.ln_sbd;

  FUNC_2(&VAR_3->sd_async_glock_wait);
 }
}
