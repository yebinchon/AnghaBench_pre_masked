
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct address_space {int dummy; } ;
struct gfs2_sbd {struct address_space sd_aspace; } ;
struct gfs2_rgrpd {int rd_flags; } ;
struct TYPE_3__ {int end; int start; } ;
struct TYPE_4__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {TYPE_1__ gl_vm; int gl_ail_count; TYPE_2__ gl_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gfs2_sbd*,int) ;
 struct gfs2_rgrpd* FUNC_3 (struct gfs2_glock*) ;
 int FUNC_4 (struct gfs2_rgrpd*) ;
 int FUNC_5 (struct address_space*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct gfs2_glock *VAR_2, int VAR_3)
{
 struct gfs2_sbd *VAR_4 = VAR_2->gl_name.ln_sbd;
 struct address_space *VAR_5 = &VAR_4->sd_aspace;
 struct gfs2_rgrpd *VAR_6 = FUNC_3(VAR_2);

 if (VAR_6)
  FUNC_4(VAR_6);

 FUNC_0(!(VAR_3 & VAR_0));
 FUNC_2(VAR_4, !FUNC_1(&VAR_2->gl_ail_count));
 FUNC_5(VAR_5, VAR_2->gl_vm.start, VAR_2->gl_vm.end);

 if (VAR_6)
  VAR_6->rd_flags &= ~VAR_1;
}
