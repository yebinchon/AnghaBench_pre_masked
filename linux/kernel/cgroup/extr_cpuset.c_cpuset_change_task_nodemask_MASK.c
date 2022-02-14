
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int mems_allowed_seq; int mems_allowed; } ;
typedef int nodemask_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct task_struct *VAR_0,
     nodemask_t *VAR_1)
{
 FUNC_4(VAR_0);

 FUNC_0();
 FUNC_6(&VAR_0->mems_allowed_seq);

 FUNC_3(VAR_0->mems_allowed, VAR_0->mems_allowed, *VAR_1);
 FUNC_2(VAR_0, VAR_1);
 VAR_0->mems_allowed = *VAR_1;

 FUNC_7(&VAR_0->mems_allowed_seq);
 FUNC_1();

 FUNC_5(VAR_0);
}
