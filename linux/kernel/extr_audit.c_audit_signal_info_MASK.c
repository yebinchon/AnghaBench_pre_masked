
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int kuid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(int VAR_8, struct task_struct *VAR_9)
{
 kuid_t VAR_10 = FUNC_3(), VAR_11;

 if (FUNC_2(VAR_9) &&
     (VAR_8 == VAR_1 || VAR_8 == VAR_0 ||
      VAR_8 == VAR_2 || VAR_8 == VAR_3)) {
  VAR_4 = FUNC_5(VAR_7);
  VAR_11 = FUNC_0(VAR_7);
  if (FUNC_6(VAR_11))
   VAR_6 = VAR_11;
  else
   VAR_6 = VAR_10;
  FUNC_4(VAR_7, &VAR_5);
 }

 return FUNC_1(VAR_9);
}
