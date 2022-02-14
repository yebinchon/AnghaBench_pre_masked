
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ sb_lvbptr; } ;
struct dlm_user_args {TYPE_2__* proc; int user_lksb; scalar_t__ castparam; TYPE_1__ lksb; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {int lkb_ownqueue; struct dlm_user_args* lkb_ua; } ;
struct dlm_args {int dummy; } ;
struct TYPE_4__ {int locks_spin; int unlocking; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dlm_ls*) ;
 int FUNC_1 (struct dlm_lkb*) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (struct dlm_ls*,int,struct dlm_lkb**) ;
 int FUNC_4 (struct dlm_user_args*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (scalar_t__,char*,int ) ;
 int FUNC_8 (int,struct dlm_user_args*,struct dlm_args*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct dlm_ls*,struct dlm_lkb*,struct dlm_args*) ;

int FUNC_12(struct dlm_ls *VAR_4, struct dlm_user_args *VAR_5,
      uint32_t VAR_6, uint32_t VAR_7, char *VAR_8)
{
 struct dlm_lkb *VAR_9;
 struct dlm_args VAR_10;
 struct dlm_user_args *VAR_11;
 int VAR_12;

 FUNC_0(VAR_4);

 VAR_12 = FUNC_3(VAR_4, VAR_7, &VAR_9);
 if (VAR_12)
  goto out;

 VAR_11 = VAR_9->lkb_ua;

 if (VAR_8 && VAR_11->lksb.sb_lvbptr)
  FUNC_7(VAR_11->lksb.sb_lvbptr, VAR_8, VAR_2);
 if (VAR_5->castparam)
  VAR_11->castparam = VAR_5->castparam;
 VAR_11->user_lksb = VAR_5->user_lksb;

 VAR_12 = FUNC_8(VAR_6, VAR_11, &VAR_10);
 if (VAR_12)
  goto out_put;

 VAR_12 = FUNC_11(VAR_4, VAR_9, &VAR_10);

 if (VAR_12 == -VAR_0)
  VAR_12 = 0;

 if (VAR_12 == -VAR_3 && (VAR_6 & VAR_1))
  VAR_12 = 0;
 if (VAR_12)
  goto out_put;

 FUNC_9(&VAR_11->proc->locks_spin);

 if (!FUNC_5(&VAR_9->lkb_ownqueue))
  FUNC_6(&VAR_9->lkb_ownqueue, &VAR_11->proc->unlocking);
 FUNC_10(&VAR_11->proc->locks_spin);
 out_put:
 FUNC_1(VAR_9);
 out:
 FUNC_2(VAR_4);
 FUNC_4(VAR_5);
 return VAR_12;
}
