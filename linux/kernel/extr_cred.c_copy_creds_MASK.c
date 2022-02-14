
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct cred* real_cred; struct cred* cred; int * cached_requested_key; } ;
struct cred {TYPE_1__* user; int * process_keyring; int * thread_keyring; int usage; } ;
struct TYPE_2__ {int processes; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cred*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cred*) ;
 void* FUNC_4 (struct cred*) ;
 int FUNC_5 (struct cred*) ;
 int FUNC_6 (char*,struct cred*,int ,int ) ;
 int FUNC_7 (int *) ;
 struct cred* FUNC_8 () ;
 int FUNC_9 (struct cred*) ;
 int FUNC_10 (struct cred*) ;
 int FUNC_11 (struct cred*) ;

int FUNC_12(struct task_struct *VAR_3, unsigned long VAR_4)
{
 struct cred *VAR_5;
 int VAR_6;





 if (



  VAR_4 & VAR_1
     ) {
  VAR_3->real_cred = FUNC_4(VAR_3->cred);
  FUNC_4(VAR_3->cred);
  FUNC_0(VAR_3->cred, 2);
  FUNC_6("share_creds(%p{%d,%d})",
         VAR_3->cred, FUNC_2(&VAR_3->cred->usage),
         FUNC_10(VAR_3->cred));
  FUNC_1(&VAR_3->cred->user->processes);
  return 0;
 }

 VAR_5 = FUNC_8();
 if (!VAR_5)
  return -VAR_2;

 if (VAR_4 & VAR_0) {
  VAR_6 = FUNC_3(VAR_5);
  if (VAR_6 < 0)
   goto error_put;
 }
 FUNC_1(&VAR_5->user->processes);
 VAR_3->cred = VAR_3->real_cred = FUNC_4(VAR_5);
 FUNC_0(VAR_5, 2);
 FUNC_11(VAR_5);
 return 0;

error_put:
 FUNC_9(VAR_5);
 return VAR_6;
}
