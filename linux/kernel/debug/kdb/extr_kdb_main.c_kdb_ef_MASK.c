
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char const**,int*,unsigned long*,long*,int *) ;
 int FUNC_1 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_2(int VAR_1, const char **VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;
 long VAR_5;
 int VAR_6;

 if (VAR_1 != 1)
  return VAR_0;

 VAR_6 = 1;
 VAR_3 = FUNC_0(VAR_1, VAR_2, &VAR_6, &VAR_4, &VAR_5, ((void*)0));
 if (VAR_3)
  return VAR_3;
 FUNC_1((struct pt_regs *)VAR_4);
 return 0;
}
