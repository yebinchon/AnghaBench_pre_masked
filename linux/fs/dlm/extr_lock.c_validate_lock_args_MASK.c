
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dlm_ls {int dummy; } ;
struct dlm_lkb {int lkb_flags; int lkb_grmode; int lkb_exflags; int lkb_rqmode; int lkb_ownpid; TYPE_2__* lkb_resource; int lkb_wait_type; int lkb_status; int lkb_id; int lkb_timeout_cs; int lkb_lvbptr; TYPE_1__* lkb_lksb; int lkb_bastfn; int lkb_astparam; int lkb_astfn; scalar_t__ lkb_sbflags; } ;
struct dlm_args {int flags; int mode; int timeout; TYPE_1__* lksb; int bastfn; int astparam; int astfn; } ;
struct TYPE_6__ {scalar_t__ pid; } ;
struct TYPE_5__ {int res_name; } ;
struct TYPE_4__ {int sb_lvbptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int ** VAR_6 ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_0 (struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_ls*,char*,int,int ,int,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dlm_ls *VAR_8, struct dlm_lkb *VAR_9,
         struct dlm_args *VAR_10)
{
 int VAR_11 = -VAR_5;

 if (VAR_10->flags & VAR_1) {
  if (VAR_9->lkb_flags & VAR_0)
   goto out;

  if (VAR_10->flags & VAR_2 &&
      !VAR_6[VAR_9->lkb_grmode+1][VAR_10->mode+1])
   goto out;

  VAR_11 = -VAR_4;
  if (VAR_9->lkb_status != VAR_3)
   goto out;

  if (VAR_9->lkb_wait_type)
   goto out;

  if (FUNC_0(VAR_9))
   goto out;
 }

 VAR_9->lkb_exflags = VAR_10->flags;
 VAR_9->lkb_sbflags = 0;
 VAR_9->lkb_astfn = VAR_10->astfn;
 VAR_9->lkb_astparam = VAR_10->astparam;
 VAR_9->lkb_bastfn = VAR_10->bastfn;
 VAR_9->lkb_rqmode = VAR_10->mode;
 VAR_9->lkb_lksb = VAR_10->lksb;
 VAR_9->lkb_lvbptr = VAR_10->lksb->sb_lvbptr;
 VAR_9->lkb_ownpid = (int) VAR_7->pid;
 VAR_9->lkb_timeout_cs = VAR_10->timeout;
 VAR_11 = 0;
 out:
 if (VAR_11)
  FUNC_1(VAR_8, "validate_lock_args %d %x %x %x %d %d %s",
     VAR_11, VAR_9->lkb_id, VAR_9->lkb_flags, VAR_10->flags,
     VAR_9->lkb_status, VAR_9->lkb_wait_type,
     VAR_9->lkb_resource->res_name);
 return VAR_11;
}
