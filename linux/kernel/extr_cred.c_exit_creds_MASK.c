
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {TYPE_1__* cred; int * real_cred; int pid; } ;
struct cred {int dummy; } ;
struct TYPE_5__ {int * cached_requested_key; } ;
struct TYPE_4__ {int usage; } ;


 int FUNC_0 (struct cred*,int) ;
 int FUNC_1 (int *) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (char*,int ,int *,TYPE_1__*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cred*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct cred*) ;

void FUNC_7(struct task_struct *VAR_1)
{
 struct cred *VAR_2;

 FUNC_2("exit_creds(%u,%p,%p,{%d,%d})", VAR_1->pid, VAR_1->real_cred, VAR_1->cred,
        FUNC_1(&VAR_1->cred->usage),
        FUNC_5(VAR_1->cred));

 VAR_2 = (struct cred *) VAR_1->real_cred;
 VAR_1->real_cred = ((void*)0);
 FUNC_6(VAR_2);
 FUNC_0(VAR_2, -1);
 FUNC_4(VAR_2);

 VAR_2 = (struct cred *) VAR_1->cred;
 VAR_1->cred = ((void*)0);
 FUNC_6(VAR_2);
 FUNC_0(VAR_2, -1);
 FUNC_4(VAR_2);





}
