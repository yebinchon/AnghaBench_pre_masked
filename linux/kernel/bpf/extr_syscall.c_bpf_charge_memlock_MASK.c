
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct user_struct {int locked_vm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct user_struct *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5 = FUNC_2(VAR_2) >> VAR_1;

 if (FUNC_0(VAR_4, &VAR_3->locked_vm) > VAR_5) {
  FUNC_1(VAR_4, &VAR_3->locked_vm);
  return -VAR_0;
 }
 return 0;
}
