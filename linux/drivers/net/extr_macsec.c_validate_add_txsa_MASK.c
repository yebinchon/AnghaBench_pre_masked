
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 scalar_t__ FUNC_2 (struct nlattr*) ;

__attribute__((used)) static bool FUNC_3(struct nlattr **VAR_7)
{
 if (!VAR_7[VAR_3] ||
     !VAR_7[VAR_6] ||
     !VAR_7[VAR_4] ||
     !VAR_7[VAR_5])
  return 0;

 if (FUNC_1(VAR_7[VAR_3]) >= VAR_1)
  return 0;

 if (FUNC_0(VAR_7[VAR_6]) == 0)
  return 0;

 if (VAR_7[VAR_2]) {
  if (FUNC_1(VAR_7[VAR_2]) > 1)
   return 0;
 }

 if (FUNC_2(VAR_7[VAR_5]) != VAR_0)
  return 0;

 return 1;
}
