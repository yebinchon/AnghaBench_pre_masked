
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (char**) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_3)
{
 char *VAR_4;
 int VAR_5 = -1;

 if (VAR_2 < 0)
  return -VAR_1;

 while ((VAR_4 = FUNC_1(&VAR_3))) {
  if (FUNC_2(VAR_4, "0") == 0)
   VAR_5 = 0;
  else if (FUNC_2(VAR_4, "1") == 0)
   VAR_5 = 1;
 }

 if (VAR_5 == -1)
  return -VAR_0;

 return FUNC_0(VAR_5);
}
