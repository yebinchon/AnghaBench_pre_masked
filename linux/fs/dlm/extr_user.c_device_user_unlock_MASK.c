
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_user_proc {int lockspace; } ;
struct dlm_user_args {int castaddr; int castparam; int user_lksb; struct dlm_user_proc* proc; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lock_params {int flags; int lvb; int lkid; int castaddr; int castparam; int lksb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dlm_ls* FUNC_0 (int ) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_ls*,struct dlm_user_args*,int,int ) ;
 int FUNC_3 (struct dlm_ls*,struct dlm_user_args*,int,int ,int ) ;
 struct dlm_user_args* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct dlm_user_proc *VAR_4,
         struct dlm_lock_params *VAR_5)
{
 struct dlm_ls *VAR_6;
 struct dlm_user_args *VAR_7;
 int VAR_8 = -VAR_2;

 VAR_6 = FUNC_0(VAR_4->lockspace);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_4(sizeof(struct dlm_user_args), VAR_3);
 if (!VAR_7)
  goto out;
 VAR_7->proc = VAR_4;
 VAR_7->user_lksb = VAR_5->lksb;
 VAR_7->castparam = VAR_5->castparam;
 VAR_7->castaddr = VAR_5->castaddr;

 if (VAR_5->flags & VAR_0)
  VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_5->flags, VAR_5->lkid);
 else
  VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_5->flags, VAR_5->lkid,
     VAR_5->lvb);
 out:
 FUNC_1(VAR_6);
 return VAR_8;
}
