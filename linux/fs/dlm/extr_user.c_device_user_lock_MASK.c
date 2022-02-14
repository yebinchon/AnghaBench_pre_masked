
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dlm_user_proc {int lockspace; } ;
struct TYPE_2__ {int sb_lkid; } ;
struct dlm_user_args {TYPE_1__ lksb; int xid; int bastaddr; int bastparam; scalar_t__ castaddr; int castparam; scalar_t__ user_lksb; struct dlm_user_proc* proc; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lock_params {int flags; scalar_t__ timeout; int namelen; int name; int mode; int lvb; int lkid; int xid; int bastaddr; int bastparam; scalar_t__ castaddr; int castparam; scalar_t__ lksb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dlm_ls* FUNC_0 (int ) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_ls*,struct dlm_user_args*,int ,int,int ,int ,unsigned long,int*) ;
 int FUNC_3 (struct dlm_ls*,struct dlm_user_args*,int ,int,int ,int ,unsigned long) ;
 int FUNC_4 (struct dlm_ls*,struct dlm_user_args*,int ,int,int ,int ,unsigned long) ;
 struct dlm_user_args* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct dlm_user_proc *VAR_6,
       struct dlm_lock_params *VAR_7)
{
 struct dlm_ls *VAR_8;
 struct dlm_user_args *VAR_9;
 uint32_t VAR_10;
 int VAR_11 = -VAR_4;

 VAR_8 = FUNC_0(VAR_6->lockspace);
 if (!VAR_8)
  return -VAR_3;

 if (!VAR_7->castaddr || !VAR_7->lksb) {
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_9 = FUNC_5(sizeof(struct dlm_user_args), VAR_5);
 if (!VAR_9)
  goto out;
 VAR_9->proc = VAR_6;
 VAR_9->user_lksb = VAR_7->lksb;
 VAR_9->castparam = VAR_7->castparam;
 VAR_9->castaddr = VAR_7->castaddr;
 VAR_9->bastparam = VAR_7->bastparam;
 VAR_9->bastaddr = VAR_7->bastaddr;
 VAR_9->xid = VAR_7->xid;

 if (VAR_7->flags & VAR_0) {
  VAR_11 = FUNC_3(VAR_8, VAR_9,
             VAR_7->mode, VAR_7->flags,
             VAR_7->lkid, VAR_7->lvb,
      (unsigned long) VAR_7->timeout);
 } else if (VAR_7->flags & VAR_1) {
  VAR_11 = FUNC_2(VAR_8, VAR_9,
      VAR_7->mode, VAR_7->flags,
      VAR_7->name, VAR_7->namelen,
      (unsigned long) VAR_7->timeout,
      &VAR_10);
  if (!VAR_11)
   VAR_11 = VAR_10;
 } else {
  VAR_11 = FUNC_4(VAR_8, VAR_9,
      VAR_7->mode, VAR_7->flags,
      VAR_7->name, VAR_7->namelen,
      (unsigned long) VAR_7->timeout);
  if (!VAR_11)
   VAR_11 = VAR_9->lksb.sb_lkid;
 }
 out:
 FUNC_1(VAR_8);
 return VAR_11;
}
