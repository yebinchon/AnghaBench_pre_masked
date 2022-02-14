
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {scalar_t__ bacct; struct pid_namespace* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct pid_namespace*) ;
 struct pid_namespace* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pid_namespace*) ;

void FUNC_3(void)
{
 struct pid_namespace *VAR_1;






 for (VAR_1 = FUNC_1(VAR_0); VAR_1 != ((void*)0); VAR_1 = VAR_1->parent) {
  if (VAR_1->bacct)
   break;
 }
 if (FUNC_2(VAR_1))
  FUNC_0(VAR_1);
}
