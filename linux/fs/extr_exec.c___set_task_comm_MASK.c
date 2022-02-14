
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int comm; } ;


 int FUNC_0 (struct task_struct*,int) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*,char const*) ;

void FUNC_5(struct task_struct *VAR_0, const char *VAR_1, bool VAR_2)
{
 FUNC_2(VAR_0);
 FUNC_4(VAR_0, VAR_1);
 FUNC_1(VAR_0->comm, VAR_1, sizeof(VAR_0->comm));
 FUNC_3(VAR_0);
 FUNC_0(VAR_0, VAR_2);
}
