
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct pid_namespace {int dummy; } ;
struct file {TYPE_6__* f_cred; } ;
struct cred {int gid; int uid; } ;
struct bsd_acct_struct {struct pid_namespace* ns; struct file* file; } ;
typedef int loff_t ;
struct TYPE_12__ {void* ac_ppid; void* ac_pid; int ac_gid; int ac_gid16; int ac_uid; int ac_uid16; } ;
typedef TYPE_3__ acct_t ;
struct TYPE_14__ {int user_ns; } ;
struct TYPE_13__ {TYPE_2__* signal; int real_parent; } ;
struct TYPE_11__ {TYPE_1__* rlim; } ;
struct TYPE_10__ {unsigned long rlim_cur; } ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct file*,TYPE_3__*,int,int *) ;
 int FUNC_1 (struct bsd_acct_struct*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (struct file*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 struct cred* FUNC_7 (TYPE_6__*) ;
 TYPE_4__* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct cred const*) ;
 void* FUNC_12 (TYPE_4__*,struct pid_namespace*) ;

__attribute__((used)) static void FUNC_13(struct bsd_acct_struct *VAR_3)
{
 acct_t VAR_4;
 unsigned long VAR_5;
 const struct cred *VAR_6;
 struct file *VAR_7 = VAR_3->file;




 VAR_5 = VAR_2->signal->rlim[VAR_0].rlim_cur;
 VAR_2->signal->rlim[VAR_0].rlim_cur = VAR_1;

 VAR_6 = FUNC_7(VAR_7->f_cred);





 if (!FUNC_1(VAR_3))
  goto out;

 FUNC_4(&VAR_4);

 VAR_4.ac_uid = FUNC_6(VAR_7->f_cred->user_ns, VAR_6->uid);
 VAR_4.ac_gid = FUNC_5(VAR_7->f_cred->user_ns, VAR_6->gid);
 if (FUNC_3(VAR_7)) {

  loff_t VAR_8 = 0;
  FUNC_0(VAR_7, &VAR_4, sizeof(acct_t), &VAR_8);
  FUNC_2(VAR_7);
 }
out:
 VAR_2->signal->rlim[VAR_0].rlim_cur = VAR_5;
 FUNC_11(VAR_6);
}
