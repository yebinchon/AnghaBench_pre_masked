
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;

__attribute__((used)) static bool FUNC_2(struct nlattr **VAR_6)
{
 if (!VAR_6[VAR_2] ||
     VAR_6[VAR_3] ||
     VAR_6[VAR_4])
  return 0;

 if (FUNC_1(VAR_6[VAR_2]) >= VAR_0)
  return 0;

 if (VAR_6[VAR_5] && FUNC_0(VAR_6[VAR_5]) == 0)
  return 0;

 if (VAR_6[VAR_1]) {
  if (FUNC_1(VAR_6[VAR_1]) > 1)
   return 0;
 }

 return 1;
}
