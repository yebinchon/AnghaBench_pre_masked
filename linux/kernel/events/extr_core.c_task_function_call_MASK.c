
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct remote_function_call {void* info; int ret; int func; struct task_struct* p; } ;
typedef int remote_function_f ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct remote_function_call*,int) ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static int
FUNC_2(struct task_struct *VAR_2, remote_function_f VAR_3, void *VAR_4)
{
 struct remote_function_call VAR_5 = {
  .p = VAR_2,
  .func = VAR_3,
  .info = VAR_4,
  .ret = -VAR_0,
 };
 int VAR_6;

 do {
  VAR_6 = FUNC_0(FUNC_1(VAR_2), VAR_1, &VAR_5, 1);
  if (!VAR_6)
   VAR_6 = VAR_5.ret;
 } while (VAR_6 == -VAR_0);

 return VAR_6;
}
