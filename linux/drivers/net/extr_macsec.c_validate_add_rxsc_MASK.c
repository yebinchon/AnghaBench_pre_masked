
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct nlattr*) ;

__attribute__((used)) static bool FUNC_1(struct nlattr **VAR_2)
{
 if (!VAR_2[VAR_1])
  return 0;

 if (VAR_2[VAR_0]) {
  if (FUNC_0(VAR_2[VAR_0]) > 1)
   return 0;
 }

 return 1;
}
