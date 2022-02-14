
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_rfkill {int * rfkill; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct asus_rfkill *VAR_0)
{
 if (!VAR_0->rfkill)
  return ;

 FUNC_1(VAR_0->rfkill);
 FUNC_0(VAR_0->rfkill);
 VAR_0->rfkill = ((void*)0);
}
