
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct task_struct {int ptracer_cred; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cred* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct cred const*,struct user_namespace*,int ,int ) ;

bool FUNC_4(struct task_struct *VAR_2, struct user_namespace *VAR_3)
{
 int VAR_4 = 0;
 const struct cred *VAR_5;

 FUNC_1();
 VAR_5 = FUNC_0(VAR_2->ptracer_cred);
 if (VAR_5)
  VAR_4 = FUNC_3(VAR_5, VAR_3, VAR_1,
           VAR_0);
 FUNC_2();
 return (VAR_4 == 0);
}
