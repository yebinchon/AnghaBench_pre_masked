
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lm_lockstruct {int ls_dlm; } ;
struct TYPE_6__ {int sb_lkid; } ;
struct TYPE_5__ {TYPE_1__* ln_sbd; } ;
struct gfs2_glock {TYPE_3__ gl_lksb; TYPE_2__ gl_name; } ;
struct TYPE_4__ {struct lm_lockstruct sd_lockstruct; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,struct gfs2_glock*) ;

__attribute__((used)) static void FUNC_1(struct gfs2_glock *VAR_1)
{
 struct lm_lockstruct *VAR_2 = &VAR_1->gl_name.ln_sbd->sd_lockstruct;
 FUNC_0(VAR_2->ls_dlm, VAR_1->gl_lksb.sb_lkid, VAR_0, ((void*)0), VAR_1);
}
