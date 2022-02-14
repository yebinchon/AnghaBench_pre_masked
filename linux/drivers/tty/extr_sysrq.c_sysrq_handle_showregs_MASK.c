
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 struct pt_regs* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_4(int VAR_0)
{
 struct pt_regs *VAR_1 = ((void*)0);

 if (FUNC_1())
  VAR_1 = FUNC_0();
 if (VAR_1)
  FUNC_3(VAR_1);
 FUNC_2();
}
