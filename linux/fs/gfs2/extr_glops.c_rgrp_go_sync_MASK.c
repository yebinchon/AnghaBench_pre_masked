
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct address_space {int dummy; } ;
struct gfs2_sbd {struct address_space sd_aspace; } ;
struct gfs2_rgrpd {int dummy; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int end; int start; } ;
struct TYPE_4__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {scalar_t__ gl_state; TYPE_3__ gl_lockref; struct gfs2_rgrpd* gl_object; TYPE_2__ gl_vm; int gl_flags; TYPE_1__ gl_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gfs2_glock*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct address_space*,int ,int ) ;
 int FUNC_2 (struct address_space*,int ,int ) ;
 int FUNC_3 (struct gfs2_glock*) ;
 int FUNC_4 (struct gfs2_rgrpd*) ;
 int FUNC_5 (struct gfs2_sbd*,struct gfs2_glock*,int) ;
 int FUNC_6 (struct gfs2_rgrpd*) ;
 int FUNC_7 (struct address_space*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct gfs2_glock *VAR_4)
{
 struct gfs2_sbd *VAR_5 = VAR_4->gl_name.ln_sbd;
 struct address_space *VAR_6 = &VAR_5->sd_aspace;
 struct gfs2_rgrpd *VAR_7;
 int VAR_8;

 FUNC_8(&VAR_4->gl_lockref.lock);
 VAR_7 = VAR_4->gl_object;
 if (VAR_7)
  FUNC_6(VAR_7);
 FUNC_9(&VAR_4->gl_lockref.lock);

 if (!FUNC_10(VAR_2, &VAR_4->gl_flags))
  return;
 FUNC_0(VAR_4, VAR_4->gl_state != VAR_3);

 FUNC_5(VAR_5, VAR_4, VAR_1 |
         VAR_0);
 FUNC_2(VAR_6, VAR_4->gl_vm.start, VAR_4->gl_vm.end);
 VAR_8 = FUNC_1(VAR_6, VAR_4->gl_vm.start, VAR_4->gl_vm.end);
 FUNC_7(VAR_6, VAR_8);
 FUNC_3(VAR_4);

 FUNC_8(&VAR_4->gl_lockref.lock);
 VAR_7 = VAR_4->gl_object;
 if (VAR_7)
  FUNC_4(VAR_7);
 FUNC_9(&VAR_4->gl_lockref.lock);
}
