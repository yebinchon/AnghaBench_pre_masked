
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;

__attribute__((used)) static bool FUNC_2(char VAR_0, bool VAR_1, bool VAR_2)
{
 if ((VAR_1 ? !FUNC_1(VAR_0) :
       !FUNC_0(VAR_0)) &&
     VAR_0 != '_' &&
     ((VAR_0 == '.' && !VAR_2) ||
       VAR_0 != '.'))
  return 0;
 return 1;
}
