
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 struct task_struct* FUNC_1 (int (*) (void*),void*,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct task_struct *FUNC_3(int (*VAR_0)(void *),
           void *VAR_1, char *VAR_2)
{
 struct task_struct *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, "%s", VAR_2);
 if (FUNC_0(VAR_3)) {
  FUNC_2("visorbus failed to start thread\n");
  return ((void*)0);
 }
 return VAR_3;
}
