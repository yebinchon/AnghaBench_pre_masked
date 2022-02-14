
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct cred const* cred; struct cred const* real_cred; scalar_t__ pdeath_signal; scalar_t__ mm; } ;
typedef struct cred {int fsgid; int sgid; int egid; int gid; int fsuid; int suid; int euid; int uid; TYPE_1__* user; int usage; } const cred ;
struct TYPE_2__ {int processes; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cred const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cred const*,struct cred const*) ;
 struct task_struct* VAR_2 ;
 int FUNC_6 (struct cred const*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,struct cred const*,int,int) ;
 int FUNC_9 (struct cred const*) ;
 int FUNC_10 (struct cred const*) ;
 int FUNC_11 (struct task_struct*,int ) ;
 int FUNC_12 (struct cred const*) ;
 int FUNC_13 (struct cred const*,struct cred const*) ;
 int FUNC_14 (struct cred const*) ;
 int FUNC_15 (scalar_t__,int ) ;
 int FUNC_16 () ;
 int VAR_3 ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (struct cred const*) ;

int FUNC_19(struct cred *VAR_4)
{
 struct task_struct *VAR_5 = VAR_2;
 const struct cred *VAR_6 = VAR_5->real_cred;

 FUNC_8("commit_creds(%p{%d,%d})", VAR_4,
        FUNC_4(&VAR_4->usage),
        FUNC_14(VAR_4));

 FUNC_0(VAR_5->cred != VAR_6);





 FUNC_0(FUNC_4(&VAR_4->usage) < 1);

 FUNC_6(VAR_4);


 if (!FUNC_17(VAR_6->euid, VAR_4->euid) ||
     !FUNC_7(VAR_6->egid, VAR_4->egid) ||
     !FUNC_17(VAR_6->fsuid, VAR_4->fsuid) ||
     !FUNC_7(VAR_6->fsgid, VAR_4->fsgid) ||
     !FUNC_5(VAR_6, VAR_4)) {
  if (VAR_5->mm)
   FUNC_15(VAR_5->mm, VAR_3);
  VAR_5->pdeath_signal = 0;
  FUNC_16();
 }


 if (!FUNC_17(VAR_4->fsuid, VAR_6->fsuid))
  FUNC_10(VAR_4);
 if (!FUNC_7(VAR_4->fsgid, VAR_6->fsgid))
  FUNC_9(VAR_4);





 FUNC_1(VAR_4, 2);
 if (VAR_4->user != VAR_6->user)
  FUNC_3(&VAR_4->user->processes);
 FUNC_13(VAR_5->real_cred, VAR_4);
 FUNC_13(VAR_5->cred, VAR_4);
 if (VAR_4->user != VAR_6->user)
  FUNC_2(&VAR_6->user->processes);
 FUNC_1(VAR_6, -2);


 if (!FUNC_17(VAR_4->uid, VAR_6->uid) ||
     !FUNC_17(VAR_4->euid, VAR_6->euid) ||
     !FUNC_17(VAR_4->suid, VAR_6->suid) ||
     !FUNC_17(VAR_4->fsuid, VAR_6->fsuid))
  FUNC_11(VAR_5, VAR_1);

 if (!FUNC_7(VAR_4->gid, VAR_6->gid) ||
     !FUNC_7(VAR_4->egid, VAR_6->egid) ||
     !FUNC_7(VAR_4->sgid, VAR_6->sgid) ||
     !FUNC_7(VAR_4->fsgid, VAR_6->fsgid))
  FUNC_11(VAR_5, VAR_0);


 FUNC_12(VAR_6);
 FUNC_12(VAR_6);
 return 0;
}
