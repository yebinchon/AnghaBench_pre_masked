
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_3__ {int fl_owner; int * fl_lmops; int fl_pid; int fl_file; } ;
struct nlm_lock {TYPE_1__ fl; scalar_t__ svid; int fh; int len; int caller; } ;
struct nlm_host {int dummy; } ;
struct nlm_file {int f_file; } ;
struct nlm_args {scalar_t__ monitor; struct nlm_lock lock; } ;
typedef int pid_t ;
typedef scalar_t__ __be32 ;
struct TYPE_4__ {int tgid; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,struct nlm_file**,int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,struct nlm_host*,int ) ;
 struct nlm_host* FUNC_2 (struct svc_rqst*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct nlm_host*) ;
 scalar_t__ FUNC_4 (struct nlm_host*) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_4, struct nlm_args *VAR_5,
   struct nlm_host **VAR_6, struct nlm_file **VAR_7)
{
 struct nlm_host *VAR_8 = ((void*)0);
 struct nlm_file *VAR_9 = ((void*)0);
 struct nlm_lock *VAR_10 = &VAR_5->lock;
 __be32 VAR_11 = 0;


 if (!VAR_3)
  return VAR_1;


 if (!(VAR_8 = FUNC_2(VAR_4, VAR_10->caller, VAR_10->len))
  || (VAR_5->monitor && FUNC_4(VAR_8) < 0))
  goto no_locks;
 *VAR_6 = VAR_8;


 if (VAR_7 != ((void*)0)) {
  if ((VAR_11 = FUNC_0(VAR_4, &VAR_9, &VAR_10->fh)) != 0)
   goto no_locks;
  *VAR_7 = VAR_9;


  VAR_10->fl.fl_file = VAR_9->f_file;
  VAR_10->fl.fl_pid = VAR_0->tgid;
  VAR_10->fl.fl_lmops = &VAR_2;
  FUNC_1(&VAR_10->fl, VAR_8, (pid_t)VAR_10->svid);
  if (!VAR_10->fl.fl_owner) {

   FUNC_3(VAR_8);
   return VAR_1;
  }
 }

 return 0;

no_locks:
 FUNC_3(VAR_8);
  if (VAR_11)
  return VAR_11;
 return VAR_1;
}
