
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct cred* cred; } ;
struct cred {int * security; int request_key_auth; int thread_keyring; int process_keyring; int session_keyring; int user_ns; int user; int group_info; int usage; scalar_t__ non_rcu; } ;


 int VAR_0 ;
 int FUNC_0 (struct cred*) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,struct cred*) ;
 int FUNC_6 (int ) ;
 struct cred* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct cred*,struct cred const*,int) ;
 scalar_t__ FUNC_9 (struct cred*,struct cred const*,int ) ;
 int FUNC_10 (struct cred*,int ) ;
 int FUNC_11 (struct cred*) ;
 int FUNC_12 () ;

struct cred *FUNC_13(void)
{
 struct task_struct *VAR_3 = VAR_2;
 const struct cred *VAR_4;
 struct cred *VAR_5;

 FUNC_12();

 VAR_5 = FUNC_7(VAR_1, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_5("prepare_creds() alloc %p", VAR_5);

 VAR_4 = VAR_3->cred;
 FUNC_8(VAR_5, VAR_4, sizeof(struct cred));

 VAR_5->non_rcu = 0;
 FUNC_1(&VAR_5->usage, 1);
 FUNC_10(VAR_5, 0);
 FUNC_2(VAR_5->group_info);
 FUNC_3(VAR_5->user);
 FUNC_4(VAR_5->user_ns);
 if (FUNC_9(VAR_5, VAR_4, VAR_0) < 0)
  goto error;
 FUNC_11(VAR_5);
 return VAR_5;

error:
 FUNC_0(VAR_5);
 return ((void*)0);
}
