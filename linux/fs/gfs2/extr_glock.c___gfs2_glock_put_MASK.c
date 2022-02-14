
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ls_ops; } ;
struct gfs2_sbd {TYPE_2__ sd_lockstruct; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {int gl_holders; TYPE_4__ gl_lockref; TYPE_3__ gl_name; } ;
struct address_space {scalar_t__ nrpages; } ;
struct TYPE_5__ {int (* lm_put_lock ) (struct gfs2_glock*) ;} ;


 int FUNC_0 (struct gfs2_glock*,int) ;
 struct address_space* FUNC_1 (struct gfs2_glock*) ;
 int FUNC_2 (struct gfs2_glock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gfs2_glock*) ;
 int FUNC_7 (struct gfs2_glock*) ;

__attribute__((used)) static void FUNC_8(struct gfs2_glock *VAR_0)
{
 struct gfs2_sbd *VAR_1 = VAR_0->gl_name.ln_sbd;
 struct address_space *VAR_2 = FUNC_1(VAR_0);

 FUNC_4(&VAR_0->gl_lockref);

 FUNC_2(VAR_0);
 FUNC_5(&VAR_0->gl_lockref.lock);
 FUNC_0(VAR_0, !FUNC_3(&VAR_0->gl_holders));
 FUNC_0(VAR_0, VAR_2 && VAR_2->nrpages);
 FUNC_7(VAR_0);
 VAR_1->sd_lockstruct.ls_ops->lm_put_lock(VAR_0);
}
