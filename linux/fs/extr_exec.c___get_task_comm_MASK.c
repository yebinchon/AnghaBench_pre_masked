
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int comm; } ;


 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;

char *FUNC_3(char *VAR_0, size_t VAR_1, struct task_struct *VAR_2)
{
 FUNC_1(VAR_2);
 FUNC_0(VAR_0, VAR_2->comm, VAR_1);
 FUNC_2(VAR_2);
 return VAR_0;
}
